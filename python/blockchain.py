# A very simple Flask Hello World app for you to get started with...

import hashlib
import json
from block import block
from flask import Flask
from flask import jsonify
from flask import request



app = Flask(__name__)

@app.after_request
def add_cors_headers(response):
    response.headers['Access-Control-Allow-Origin'] = '*'
    return response


@app.route('/')
def hello_world():
    # class to hold blocks


    class Block:
        def __init__(self, previous_hash, transaction):
            self.transactions = transaction
            self.previous_hash = previous_hash
            string_to_hash = "".join(transaction) + previous_hash
            self.block_hash = hashlib.sha256(string_to_hash.encode()).hexdigest()

    # consists blocks
    # blocks consist transaction
    # blocks are connected through hashing
    # unique digital fingerprint - transaction + previous block's fingerprint


    blockchain = []

    print("\nHi I am Utkarsh Rana, currently in 2nd semester, B.C.A., National P.G. College.\nThis is implementation of the blockchain data structure.\nBeing certificate incharge, I register Students in the certificate courses of NPGC and submit fees.\nHence, I have access to Student's DETAILS as well as TRANSACTION\nSo why not implement this data on Blockchain.\nBelow is the hash code of block and details of student's transaction who registered in NPGC certificate course\n")

    genesis_block = Block("This is the genesis block of the message containing this message. Hi I am Utkarsh Rana, currently in 2nd semester, B.C.A., National P.G. College. This is implementation of the blockchain data structure. Being certificate incharge, I register Students in the certificate courses of NPGC and submit fees. Hence, I have access to Student's DETAILS as well as TRANSACTION, So why not implement this data on Blockchain. Below is the hash code of block and details of student's transaction who registered in NPGC certificate course",
                        ["Gayatri Bajpai BSC4",
                        "Registration fee given - 100",
                        "Course Fee given - 0",
                        "Demand Draft fee - 0",
                        "Total fee - 1000"])

    block2 = Block(genesis_block.block_hash, ["Ayush Katiyar BSC2",
                                            "Registration fee given - 100",
                                            "Course Fee given - 4000",
                                            "Demand Draft fee - 25",
                                            "Total fee - 4125"])

    block3 = Block(block2.block_hash, ["Vaishnavi Awasthi BCA2",
                                    "Registration fee given - 100",
                                    "Course fee given - 0",
                                    "Demand Draft - 0",
                                    "Total fee - 100"])

    block4 = Block(block3.block_hash, ["Garima Maurya BCA2",
                                    "Registration fee given - 100",
                                    "Course fee given - 0",
                                    "Demand Draft - 0",
                                    "Total fee - 100"])

    block5 = Block(block4.block_hash, ["Vishakha BCA2",
                                    "Registration fee given - 100",
                                    "Course fee given - 4000",
                                    "Demand Draft - 25",
                                    "Total fee - 4125"])

    block6 = Block(block5.block_hash, ["Anchal Nigam BCA2",
                                    "Registration fee given - 100",
                                    "Course fee given - 4000",
                                    "Demand Draft - 25",
                                    "Total fee - 4125"])

    block7 = Block(block6.block_hash, ["Aditi Bajpai BCA2",
                                    "Registration fee given - 100",
                                    "Course fee given - 4000",
                                    "Demand Draft - 25",
                                    "Total fee - 4125"])

    block8 = Block(block7.block_hash, ["Apurva Bajpai BCA2",
                                    "Registration fee given - 100",
                                    "Course fee given - 0",
                                    "Demand Draft - 0",
                                    "Total fee - 100"])

    block9 = Block(block8.block_hash, ["Lakshya Srivastava BCA2",
                                    "Registration fee given - 100",
                                    "Course fee given - 0",
                                    "Demand Draft - 0",
                                    "Total fee - 100"])

    block10 = Block(block9.block_hash, ["Ananya Sharma BCA2",
                                        "Registration fee given - 100",
                                        "Course fee given - 0",
                                        "Demand Draft - 0",
                                        "Total fee - 100"])

    block11 = Block(block10.block_hash, ["Maitri BCA2",
                                        "Registration fee given - 100",
                                        "Course fee given - 0",
                                        "Demand Draft - 0",
                                        "Total fee - 100"])

    block12 = Block(block11.block_hash, ["Kanishka Dwivedi BCA2",
                                        "Registration fee given - 100",
                                        "Course fee given - 0",
                                        "Demand Draft - 0",
                                        "Total fee - 100"])
    output = [

    ["Genesis_Block_Hash",
    genesis_block.block_hash,
    genesis_block.transactions],
    
    ["Second_Block_Hash", 
    block2.block_hash,
    block2.transactions],
    
    ["Third_Block_Hash",
    block3.block_hash,
    block3.transactions],
    
    ["Fourth_Block_Hash", 
    block4.block_hash,
    block4.transactions],
    
    ["Fifth_Block_Hash", 
    block5.block_hash, 
    block5.transactions], 
    
    ["Sixth_Block_Hash", 
    block6.block_hash ,
    block6.transactions], 
    
    ["Seventh_Block_Hash", 
    block7.block_hash,
    block7.transactions], 
    
    ["Eighth_Block_Hash", 
    block8.block_hash,
    block8.transactions],
    
    ["Nineth_Block_Hash", 
    block9.block_hash,
    block9.transactions],
    
    ["Tenth_Block_Hash", 
    block10.block_hash,
    block10.transactions],

    ["Eleventh_Block_Hash", 
    block11.block_hash,
    block11.transactions],
    
    ["Twelfth_Block_Hash", 
    block12.block_hash,
    block12.transactions]
    ]
    jsonData = json.dumps(output)
    return jsonData
