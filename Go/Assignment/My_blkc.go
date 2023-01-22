package main

import (
	"bytes"
	"crypto/sha256"
	"fmt"
	"math"
	"math/big"
	"time"
)

const (
	difficulty = 15
)

type Block struct {
	Index     int
	Timestamp int64
	Hash      []byte
	Data      string
	PrevHash  []byte
}

// bytes manipulation based on https://github.com/Jeiwan/blockchain_go

func genhash(data string, prev []byte) []byte {
	head := bytes.Join([][]byte{prev, []byte(data)}, []byte{})

	h32 := sha256.Sum256(head)

	fmt.Printf("Header hash: %x\n", h32)

	return h32[:]
}

func mine(hash []byte) []byte {
	target := big.NewInt(1)
	target = target.Lsh(target, uint(256-difficulty))

	fmt.Printf("target: %x\n", target)

	var nonce int64

	for nonce = 0; nonce < math.MaxInt64; nonce++ {
		testNum := big.NewInt(0)
		testNum.Add(testNum.SetBytes(hash), big.NewInt(nonce))
		testHash := sha256.Sum256(testNum.Bytes())

		fmt.Printf("\rproof: %x (nonce: %d)", testHash, nonce)

		if target.Cmp(testNum.SetBytes(testHash[:])) > 0 {
			fmt.Println("\nFound!")
			return testHash[:]
		}
	}

	return []byte{}
}

func NewBlock(id int, data string, prev []byte) *Block {
	return &Block{
		id,
		time.Now().Unix(),
		mine(genhash(data, prev)),
		data,
		prev,
	}
}

func main() {
	bdatas := []string{"\n1\n    Name:Priyanshu Batham\n    Email:priyanshubatham24733@gmail.com\n    Phno:7905570261\n    Blood group:B+\n",
		"\n2\n    Name:Pihu Gautam\n    Email:piihhuu123@gmail.com\n    Phno:8473815186\n    Blood group:A-\n",
		"\n3\n    Name:Abhishek Yadav\n    Email:abhistark45@gmail.com\n    Phno:9456187265\n    Blood group:O+\n",
		"\n4\n    Name:Srijan Upadhyay\n    Email:legend_extreme106@gmail.com\n    Phno:9461852345\n    Blood group:B-\n",
		"\n5\n    Name:Gaurav Singh\n    Email:Gaurav_here69@gmail.com\n    Phno:9451286452\n    Blood group:A+\n",
		"\n6\n    Name:Garima Agnihotri\n    Email:GarimaAgnihotri11@gmail.com\n    Phno:9451287645\n    Blood group:O-\n"}

	prev := []byte{}

	for i, d := range bdatas {
		b := NewBlock(i, d, prev)
		fmt.Printf("Id: %d\nHash; %x\nData: %s\nPrevious: %x\n",
			b.Index,
			b.Hash,
			b.Data,
			b.PrevHash,
		)
		prev = b.Hash
	}
}
