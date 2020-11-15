



T = int(input())

for _ in range(T):

    E = bytes.fromhex(input())
    KL = int(input())
    RP = bytes.fromhex(input())
    
    # using the input/output, recover the key
    key = b"".join(bytes([a^b]) for a,b in zip(E[:KL], RP[:KL]))

    # using the key, decrypt the encrypted data
    plaintext = b"".join(bytes([E[i] ^ key[i % KL]]) for i in range(len(E)))

    print(plaintext.decode())