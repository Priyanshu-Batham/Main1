package main

import (
	"bytes"
	"crypto/sha256"
	"fmt"
)

type BlockChain struct {
	blocks []*Block
}

type Block struct {
	Hash     []byte
	Data     []byte
	PrevHash []byte
}

func (b *Block) DeriveHash() {
	info := bytes.Join([][]byte{b.Data, b.PrevHash}, []byte{})
	hash := sha256.Sum256(info)
	b.Hash = hash[:]
}

func CreateBlock(data string, prevHash []byte) *Block {
	block := &Block{[]byte{}, []byte(data), prevHash}
	block.DeriveHash()
	return block
}

func (chain *BlockChain) AddBlock(data string) {
	prevBlock := chain.blocks[len(chain.blocks)-1]
	new := CreateBlock(data, prevBlock.Hash)
	chain.blocks = append(chain.blocks, new)
}

func Genesis() *Block {
	return CreateBlock("Genesis", []byte{})
}

func InitBlockChain() *BlockChain {
	return &BlockChain{[]*Block{Genesis()}}
}

func main() {
	chain := InitBlockChain()

	chain.AddBlock("1\n    Name:Priyanshu Batham\n    Email:priyanshubatham24733@gmail.com\n    Phno:7905570261\n    Blood group:B+")
	chain.AddBlock("2\n    Name:Pihu Gautam\n    Email:piihhuu123@gmail.com\n    Phno:8473815186\n    Blood group:A-")
	chain.AddBlock("3\n    Name:Abhishek Yadav\n    Email:abhistark45@gmail.com\n    Phno:9456187265\n    Blood group:O+")
	chain.AddBlock("4\n    Name:Srijan Upadhyay\n    Email:legend_extreme106@gmail.com\n    Phno:9461852345\n    Blood group:B-")
	chain.AddBlock("5\n    Name:Gaurav Singh\n    Email:Gaurav_here69@gmail.com\n    Phno:9451286452\n    Blood group:A+")
	chain.AddBlock("6\n    Name:Garima Agnihotri\n    Email:GarimaAgnihotri11@gmail.com\n    Phno:9451287645\n    Blood group:O-")

	for _, block := range chain.blocks {
		fmt.Printf("Previous Hash: %x\n", block.PrevHash)
		fmt.Printf("Data in Block: %s\n", block.Data)
		fmt.Printf("Hash: %x\n", block.Hash)
		fmt.Println("\n")
	}
}
