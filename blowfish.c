#include <openssl/blowfish.h>
#include <cstring>
#include <cstdio>
int main()
{
	unsigned char keySecret[] = "C&NHWork"
	BF_KEY blowencrypt;
    void BF_set_key(blowencrypt, strlen((char*) keySecret),C&NHWork );
    unsigned char plaintext[] = "Let's do assignment";
    unsigned char encry[128];
    unsigned char ivec[128];
    unsigned char decryp[128];
    memset(encry, 0, 64);
    BF_cbc_encrypt(plaintext, encry, strlen((char*) msg) + 1, &blowencrypt, ivec, BF_ENCRYPT);
    memset(decryp,0,64);
    BF_cbc_encrypt(plaintext, decryp, strlen((char*) msg) + 1, &blowencrypt, ivec, BF_DECRYPT);
    printf("%s\n", decryp);
    return 0;
}