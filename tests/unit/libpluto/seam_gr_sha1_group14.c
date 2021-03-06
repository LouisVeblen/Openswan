#ifndef __seam_gr_sha1_group14_c__
#define __seam_gr_sha1_group14_c__
#include "seam_secrets.h"
/*
 * these files are created by running a full pluto, and observing the
 * debug lines, and transforming them to C data files
 */

/* test case 3 - DH operation, SHA1 + AES */
u_int16_t     __tc14_oakleygroup  = OAKLEY_GROUP_MODP2048;
oakley_auth_t __tc14_auth         = AUTH_ALGORITHM_HMAC_SHA1;
oakley_hash_t __tc14_hash         = OAKLEY_SHA1;
enum phase1_role __tc14_init      = RESPONDER;

/* secret value */
unsigned char __tc14_secretr[] = {
  0x36, 0x19, 0x54, 0xfb,  0x99, 0x37, 0x8b, 0x75,
  0x10, 0xb8, 0x30, 0x3b,  0xde, 0x69, 0xa6, 0x08,
  0x86, 0xc0, 0xfa, 0x0f,  0x42, 0x5f, 0x00, 0x04,
  0xf8, 0x77, 0x28, 0x76,  0x52, 0x91, 0xb9, 0x47
};
unsigned int __tc14_secretr_len = sizeof(__tc14_secretr);


unsigned char __tc14_gr[] = {
 0xa5, 0x9a, 0x13, 0x6c,  0xb8, 0x87, 0x48, 0x57,
 0xe1, 0x22, 0x6e, 0xa0,  0xb8, 0x55, 0xc2, 0x00,
 0x31, 0x15, 0x65, 0x84,  0x8b, 0xf9, 0xdc, 0xa4,
 0x5f, 0x49, 0xd4, 0xc5,  0xf0, 0x98, 0x8e, 0x9b,
 0x31, 0x85, 0x6e, 0x27,  0x5a, 0xc2, 0x75, 0x09,
 0x07, 0x37, 0x05, 0xb5,  0xb1, 0x53, 0x18, 0x07,
 0x81, 0xe8, 0x1d, 0x07,  0xc6, 0x19, 0x1c, 0xde,
 0xdc, 0x1f, 0x2c, 0x26,  0xd2, 0x0b, 0x59, 0xf9,
 0x67, 0x6a, 0xee, 0x3c,  0xe5, 0xfa, 0x72, 0x3f,
 0x54, 0x96, 0x1e, 0x7d,  0x8e, 0xd0, 0x30, 0x08,
 0x0b, 0xed, 0x95, 0xb0,  0x65, 0x2f, 0x5c, 0xa6,
 0x36, 0x7e, 0x92, 0x2d,  0xda, 0xcb, 0x88, 0x54,
 0xe3, 0x97, 0xfa, 0x16,  0x6f, 0x9e, 0x7c, 0xa6,
 0x0c, 0x43, 0x2f, 0x29,  0xbe, 0x2c, 0xa4, 0x55,
 0x68, 0x01, 0x45, 0xbc,  0x56, 0xa9, 0x84, 0xb9,
 0x2b, 0x1b, 0xbf, 0x9a,  0xfc, 0x84, 0x67, 0x5f,
 0xd3, 0x04, 0x79, 0x90,  0xb7, 0xfa, 0x89, 0x5b,
 0x04, 0x06, 0xd5, 0x9a,  0x50, 0x92, 0x16, 0x4b,
 0xd6, 0x33, 0x40, 0xbe,  0x2a, 0x44, 0x94, 0x74,
 0x33, 0xa7, 0xa5, 0xc1,  0x1f, 0x88, 0x5b, 0xeb,
 0x4e, 0xd2, 0xbb, 0x94,  0xb9, 0x22, 0xdb, 0xe3,
 0xb6, 0x5a, 0x8c, 0xf9,  0xd6, 0x43, 0x5d, 0x5e,
 0x5d, 0xc9, 0x19, 0xb8,  0xc8, 0x81, 0x53, 0x01,
 0x95, 0x09, 0x02, 0x7b,  0xc0, 0x2a, 0xb0, 0xc8,
 0x5d, 0x2c, 0x69, 0x78,  0x6c, 0xe8, 0xf6, 0x5d,
 0xe4, 0x90, 0x43, 0x83,  0xfd, 0xf7, 0x98, 0x5e,
 0xcc, 0x92, 0x5c, 0x79,  0x7b, 0x62, 0xae, 0x98,
 0xdb, 0x4f, 0x7f, 0xe0,  0x68, 0x7c, 0xcd, 0x29,
 0x69, 0x0a, 0xad, 0xa3,  0xe8, 0x37, 0xd7, 0x41,
 0xb4, 0x79, 0xb3, 0xa5,  0x38, 0xa2, 0x8d, 0xa0,
 0x69, 0xff, 0xbd, 0xaa,  0xba, 0xd5, 0x54, 0x70,
 0x40, 0xab, 0xb5, 0xfc,  0x26, 0x6d, 0xae, 0xce
};
unsigned int __tc14_gr_len = sizeof(__tc14_gr);

unsigned char __tc14_nr[] = {
 0xc6, 0xba, 0x31, 0x9f,  0x88, 0x5b, 0xe7, 0xb7,
 0xa2, 0x93, 0x85, 0xdc,  0xbb, 0xc6, 0x15, 0x84
};
unsigned int __tc14_nr_len = sizeof(__tc14_nr);

unsigned char __tc14_results_shared[]= {
	0x60, 0x76, 0x62, 0x71,  0x0c, 0x76, 0xfe, 0x27,
	0x4f, 0x6f, 0x7c, 0x9f,  0x68, 0xcf, 0xcf, 0xe0,
	0xa7, 0x56, 0x44, 0xcb,  0xa1, 0x92, 0x2a, 0xb9,
	0xc9, 0xc2, 0x16, 0x0e,  0xa7, 0x80, 0xd0, 0x71,
	0x50, 0x06, 0x87, 0x10,  0x85, 0xf0, 0x80, 0x30,
	0x58, 0xc4, 0x2e, 0xc9,  0xd6, 0xae, 0x4f, 0x53,
	0x41, 0xb6, 0x2b, 0x7c,  0x66, 0x8d, 0x9f, 0xba,
	0x20, 0x15, 0x5a, 0x7c,  0x23, 0x60, 0xe6, 0x22,
	0x03, 0x55, 0xa0, 0x80,  0x3b, 0xc9, 0x11, 0xa5,
	0x6f, 0xc7, 0x30, 0x0d,  0xd7, 0xf6, 0x6b, 0x01,
	0xc4, 0x88, 0xab, 0x8f,  0x79, 0x1a, 0xd2, 0xcc,
	0x58, 0x8d, 0x28, 0xc0,  0xc0, 0x78, 0xfa, 0x61,
	0x21, 0xd5, 0x88, 0x1b,  0x3a, 0xe9, 0xb4, 0xa7,
	0xd8, 0xc9, 0xa6, 0x58,  0x60, 0x6e, 0x0a, 0x2a,
	0x5e, 0x9c, 0x5f, 0x9e,  0xc2, 0xb5, 0x0b, 0x63,
	0xd7, 0xaf, 0xbb, 0x80,  0xf4, 0xa4, 0x83, 0x37,
	0xce, 0xde, 0xf5, 0xaa,  0x6f, 0xa1, 0xa0, 0xf3,
	0xaf, 0xc3, 0x21, 0x47,  0x19, 0x2c, 0x7f, 0xba,
	0x7e, 0x27, 0x9f, 0x00,  0x28, 0x81, 0x21, 0xcb,
	0x3d, 0xe7, 0xf1, 0xd9,  0x76, 0xfd, 0xf1, 0x6c,
	0x99, 0x28, 0xdb, 0x95,  0x92, 0x38, 0xf7, 0x83,
	0xa4, 0xfd, 0x38, 0x75,  0x7e, 0x55, 0x2c, 0xe9,
	0x2d, 0xdb, 0xd6, 0xf5,  0x0c, 0x1d, 0x35, 0xaf,
	0x77, 0x34, 0xfc, 0x85,  0xcb, 0x30, 0xb8, 0x09,
};

/* NOTE: some calculations below are known to be wrong */
unsigned char __tc14_results_skeyseed[]= {
	0x9d, 0x8e, 0x53, 0x96,  0x0b, 0x36, 0x01, 0xf4,
	0xc0, 0xd3, 0x29, 0xee,  0x1e, 0xc3, 0x70, 0x27,
	0x0d, 0x06, 0x22, 0x17,
};

unsigned char __tc14_results_skey_d[]= {
	0xac, 0x97, 0xeb, 0x39,  0x07, 0x53, 0xa4, 0x5d,
	0x61, 0xc1, 0x64, 0xff,  0xca, 0x25, 0x99, 0xb0,
	0x2e, 0x05, 0x3c, 0x7e,
};

unsigned char __tc14_results_skey_ai[]= {
	0x4e, 0xa8, 0xe6, 0x62,  0xb0, 0x7c, 0xdd, 0x43,
	0x0f, 0x69, 0x44, 0xc6,  0x72, 0x3e, 0x4b, 0x82,
	0xd5, 0x72, 0x24, 0x18,
};

unsigned char __tc14_results_skey_ar[]= {
	0x51, 0x5b, 0x0b, 0xd2,  0x2e, 0x6d, 0x76, 0xb3,
	0x4f, 0xdb, 0x76, 0x0a,  0xa7, 0xbf, 0xad, 0x80,
	0xb1, 0x09, 0xb7, 0x5d,
};

unsigned char __tc14_results_skey_ei[]= {
	0x3f, 0x44, 0xbf, 0x47,  0xca, 0xfd, 0x81, 0x50,
	0x59, 0x1d, 0xeb, 0x08,  0x81, 0x99, 0xfc, 0xbf,
};

unsigned char __tc14_results_skey_er[]= {
	0xbe, 0xdb, 0x67, 0xec,  0x7d, 0xc3, 0xd0, 0x0c,
	0xcc, 0xac, 0x42, 0xe7,  0x0c, 0xd6, 0x3b, 0xde,
};

unsigned char __tc14_results_skey_pi[]= {
	0xcc, 0x07, 0x97, 0x44,  0xb4, 0xa3, 0x4e, 0x8a,
	0x0d, 0x2f, 0x27, 0x8b,  0xee, 0x06, 0x6d, 0x07,
	0xa5, 0xa5, 0x75, 0x2e,
};

unsigned char __tc14_results_skey_pr[]= {
	0xe9, 0x00, 0x11, 0x7e,  0x41, 0xd4, 0x31, 0x62,
	0x40, 0xb8, 0x63, 0x22,  0xbf, 0x06, 0x9f, 0xbc,
	0xeb, 0x81, 0x58, 0xe7,
};

unsigned char __tc14_results_new_iv[] = {
  0xbc, 0xd5, 0x89, 0x68, 0x0c, 0x42, 0x2e, 0xcd,
  0x14, 0x72, 0xae, 0xa3, 0x97, 0x42, 0x67, 0x41
};
unsigned char __tc14_results_enc_key[] = {
  0x56, 0x4c, 0x62, 0xb3, 0x52, 0xd9, 0x33, 0x45,
  0x0a, 0xd1, 0xdf, 0x32, 0x4e, 0xa5, 0x7d, 0x69
};

unsigned char __tc14_undefined[] = {};
#define __tc14_gi __tc14_undefined
#define __tc14_ni __tc14_undefined
#define __tc14_icookie __tc14_undefined
#define __tc14_rcookie __tc14_undefined
#define __tc14_secret __tc14_secretr

SEAM_SECRETS_DECLARE_USING_PREFIX_ARRAYS(tc14_secrets,
					 OAKLEY_GROUP_MODP2048,
					 AUTH_ALGORITHM_HMAC_SHA1,
					 OAKLEY_SHA1,
					 RESPONDER,
                                         IKEv2_PRF_HMAC_SHA1,
                                         IKEv2_AUTH_HMAC_SHA1_96,
					 __tc14);
#undef SECRETS
#define SECRETS (&tc14_secrets)

#endif
