
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\client.dll:     file format pei-i386


Disassembly of section .text:

10064ac0 <.text+0x63ac0>:
10064ac0:	55                   	push   ebp
10064ac1:	8b ec                	mov    ebp,esp
10064ac3:	83 3d f0 26 4d 10 00 	cmp    DWORD PTR ds:0x104d26f0,0x0
10064aca:	53                   	push   ebx
10064acb:	56                   	push   esi
10064acc:	57                   	push   edi
10064acd:	0f 85 b7 00 00 00    	jne    0x10064b8a
10064ad3:	68 00 00 03 00       	push   0x30000
10064ad8:	e8 d5 f7 04 00       	call   0x100b42b2
10064add:	68 00 00 03 00       	push   0x30000
10064ae2:	8b f0                	mov    esi,eax
10064ae4:	6a 00                	push   0x0
10064ae6:	56                   	push   esi
10064ae7:	e8 94 e1 06 00       	call   0x100d2c80
10064aec:	83 c4 10             	add    esp,0x10
10064aef:	68 f0 26 4d 10       	push   0x104d26f0
10064af4:	68 69 80 00 00       	push   0x8069
10064af9:	ff 15 b8 e6 1b 10    	call   DWORD PTR ds:0x101be6b8
10064aff:	ff 35 8c fe 18 10    	push   DWORD PTR ds:0x1018fe8c
10064b05:	68 e1 0d 00 00       	push   0xde1
10064b0a:	ff 15 4c e6 1b 10    	call   DWORD PTR ds:0x101be64c
10064b10:	68 01 26 00 00       	push   0x2601
10064b15:	68 01 28 00 00       	push   0x2801
10064b1a:	68 e1 0d 00 00       	push   0xde1
10064b1f:	ff 15 38 e7 1b 10    	call   DWORD PTR ds:0x101be738
10064b25:	68 01 26 00 00       	push   0x2601
10064b2a:	68 00 28 00 00       	push   0x2800
10064b2f:	68 e1 0d 00 00       	push   0xde1
10064b34:	ff 15 38 e7 1b 10    	call   DWORD PTR ds:0x101be738
10064b3a:	56                   	push   esi
10064b3b:	68 01 14 00 00       	push   0x1401
10064b40:	68 07 19 00 00       	push   0x1907
10064b45:	6a 00                	push   0x0
10064b47:	68 00 01 00 00       	push   0x100
10064b4c:	68 00 01 00 00       	push   0x100
10064b51:	6a 03                	push   0x3
10064b53:	6a 00                	push   0x0
10064b55:	68 e1 0d 00 00       	push   0xde1
10064b5a:	ff 15 34 e7 1b 10    	call   DWORD PTR ds:0x101be734
10064b60:	ff 35 f0 26 4d 10    	push   DWORD PTR ds:0x104d26f0
10064b66:	68 e1 0d 00 00       	push   0xde1
10064b6b:	ff 15 4c e6 1b 10    	call   DWORD PTR ds:0x101be64c
10064b71:	56                   	push   esi
10064b72:	e8 44 f7 04 00       	call   0x100b42bb
10064b77:	a1 8c fe 18 10       	mov    eax,ds:0x1018fe8c
10064b7c:	83 c4 04             	add    esp,0x4
10064b7f:	a3 f0 26 4d 10       	mov    ds:0x104d26f0,eax
10064b84:	40                   	inc    eax
10064b85:	a3 8c fe 18 10       	mov    ds:0x1018fe8c,eax
10064b8a:	68 ec 26 4d 10       	push   0x104d26ec
10064b8f:	68 69 80 00 00       	push   0x8069
10064b94:	ff 15 b8 e6 1b 10    	call   DWORD PTR ds:0x101be6b8
10064b9a:	ff 35 f0 26 4d 10    	push   DWORD PTR ds:0x104d26f0
10064ba0:	68 e1 0d 00 00       	push   0xde1
10064ba5:	ff 15 4c e6 1b 10    	call   DWORD PTR ds:0x101be64c
10064bab:	a1 30 f4 18 10       	mov    eax,ds:0x1018f430
10064bb0:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
10064bb3:	99                   	cdq
10064bb4:	2b c2                	sub    eax,edx
10064bb6:	8b c8                	mov    ecx,eax
10064bb8:	d1 f9                	sar    ecx,1
10064bba:	85 ff                	test   edi,edi
10064bbc:	74 09                	je     0x10064bc7
10064bbe:	8b c7                	mov    eax,edi
10064bc0:	99                   	cdq
10064bc1:	2b c2                	sub    eax,edx
10064bc3:	d1 f8                	sar    eax,1
10064bc5:	2b c8                	sub    ecx,eax
10064bc7:	a1 34 f4 18 10       	mov    eax,ds:0x1018f434
10064bcc:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
10064bcf:	99                   	cdq
10064bd0:	2b c2                	sub    eax,edx
10064bd2:	8b f0                	mov    esi,eax
10064bd4:	d1 fe                	sar    esi,1
10064bd6:	85 db                	test   ebx,ebx
10064bd8:	74 09                	je     0x10064be3
10064bda:	8b c3                	mov    eax,ebx
10064bdc:	99                   	cdq
10064bdd:	2b c2                	sub    eax,edx
10064bdf:	d1 f8                	sar    eax,1
10064be1:	2b f0                	sub    esi,eax
10064be3:	6a 00                	push   0x0
10064be5:	53                   	push   ebx
10064be6:	57                   	push   edi
10064be7:	56                   	push   esi
10064be8:	51                   	push   ecx
10064be9:	68 07 19 00 00       	push   0x1907
10064bee:	6a 00                	push   0x0
10064bf0:	68 e1 0d 00 00       	push   0xde1
10064bf5:	ff 15 70 e6 1b 10    	call   DWORD PTR ds:0x101be670
10064bfb:	5f                   	pop    edi
10064bfc:	5e                   	pop    esi
10064bfd:	c6 05 e6 26 4d 10 01 	mov    BYTE PTR ds:0x104d26e6,0x1
10064c04:	5b                   	pop    ebx
10064c05:	5d                   	pop    ebp
10064c06:	c3                   	ret
