
import hashlib

def sign(message, p, q, g, x, k):
    h = int(hashlib.sha1(message.encode()).hexdigest(), 16) % q
    r = pow(g, k, p) % q
    s = (pow(k, -1, q) * (h + x * r)) % q
    return r, s

def verify(message, r, s, p, q, g, y):
    h = int(hashlib.sha1(message.encode()).hexdigest(), 16) % q
    w = pow(s, -1, q)
    u1 = (h * w) % q
    u2 = (r * w) % q
    v = ((pow(g, u1, p) * pow(y, u2, p)) % p) % q
    return v == r

message = input("Enter message: ")

p = 23
q = 11
g = 4
x = 3
k = 7

y = pow(g, x, p)

r, s = sign(message, p, q, g, x, k)

print("Public Key:", y)
print("Signature (r, s):", (r, s))

if verify(message, r, s, p, q, g, y):
    print("Signature is VALID")
else:
    print("Signature is INVALID")

tampered = input("Enter message to verify: ")

if verify(tampered, r, s, p, q, g, y):
    print("Signature is VALID")
else:
    print("Signature is INVALID")