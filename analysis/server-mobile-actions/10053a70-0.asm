
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10053a70 <.text+0x52a70>:
10053a70:	56                   	push   esi
10053a71:	8b f1                	mov    esi,ecx
10053a73:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
10053a79:	80 b9 e8 1e 00 00 00 	cmp    BYTE PTR [ecx+0x1ee8],0x0
10053a80:	0f 85 1c 01 00 00    	jne    0x10053ba2
10053a86:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10053a8b:	f3 0f 10 81 e4 1e 00 	movss  xmm0,DWORD PTR [ecx+0x1ee4]
10053a92:	00 
10053a93:	f3 0f 10 08          	movss  xmm1,DWORD PTR [eax]
10053a97:	0f 2f c1             	comiss xmm0,xmm1
10053a9a:	0f 87 02 01 00 00    	ja     0x10053ba2
10053aa0:	f3 0f 10 86 cc 01 00 	movss  xmm0,DWORD PTR [esi+0x1cc]
10053aa7:	00 
10053aa8:	0f 2f c1             	comiss xmm0,xmm1
10053aab:	0f 87 f1 00 00 00    	ja     0x10053ba2
10053ab1:	f3 0f 10 86 d0 01 00 	movss  xmm0,DWORD PTR [esi+0x1d0]
10053ab8:	00 
10053ab9:	0f 2f c1             	comiss xmm0,xmm1
10053abc:	0f 87 e0 00 00 00    	ja     0x10053ba2
10053ac2:	f3 0f 10 86 d4 01 00 	movss  xmm0,DWORD PTR [esi+0x1d4]
10053ac9:	00 
10053aca:	0f 2f c1             	comiss xmm0,xmm1
10053acd:	0f 87 cf 00 00 00    	ja     0x10053ba2
10053ad3:	83 be 28 01 00 00 00 	cmp    DWORD PTR [esi+0x128],0x0
10053ada:	0f 85 c2 00 00 00    	jne    0x10053ba2
10053ae0:	83 ec 0c             	sub    esp,0xc
10053ae3:	83 b9 98 1e 00 00 00 	cmp    DWORD PTR [ecx+0x1e98],0x0
10053aea:	c7 44 24 08 00 00 40 	mov    DWORD PTR [esp+0x8],0x40400000
10053af1:	40 
10053af2:	c7 44 24 04 00 00 80 	mov    DWORD PTR [esp+0x4],0x3f800000
10053af9:	3f 
10053afa:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10053b01:	74 0d                	je     0x10053b10
10053b03:	e8 a8 56 0a 00       	call   0x100f91b0
10053b08:	6a 00                	push   0x0
10053b0a:	6a 01                	push   0x1
10053b0c:	6a 0b                	push   0xb
10053b0e:	eb 0b                	jmp    0x10053b1b
10053b10:	e8 9b 56 0a 00       	call   0x100f91b0
10053b15:	6a 00                	push   0x0
10053b17:	6a 01                	push   0x1
10053b19:	6a 0a                	push   0xa
10053b1b:	8b 06                	mov    eax,DWORD PTR [esi]
10053b1d:	8b ce                	mov    ecx,esi
10053b1f:	ff 90 98 01 00 00    	call   DWORD PTR [eax+0x198]
10053b25:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
10053b2b:	51                   	push   ecx
10053b2c:	c7 04 24 27 31 08 3e 	mov    DWORD PTR [esp],0x3e083127
10053b33:	8b 01                	mov    eax,DWORD PTR [ecx]
10053b35:	ff 50 08             	call   DWORD PTR [eax+0x8]
10053b38:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10053b3e:	6a 64                	push   0x64
10053b40:	6a 00                	push   0x0
10053b42:	83 ec 08             	sub    esp,0x8
10053b45:	c7 40 78 f0 7a 0e 10 	mov    DWORD PTR [eax+0x78],0x100e7af0
10053b4c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10053b51:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
10053b58:	3f 
10053b59:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10053b60:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10053b64:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
10053b6b:	10 
10053b6c:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10053b72:	68 30 8b 1a 10       	push   0x101a8b30
10053b77:	6a 00                	push   0x0
10053b79:	f3 0f 11 86 d8 01 00 	movss  DWORD PTR [esi+0x1d8],xmm0
10053b80:	00 
10053b81:	f3 0f 11 86 d0 01 00 	movss  DWORD PTR [esi+0x1d0],xmm0
10053b88:	00 
10053b89:	f3 0f 11 86 cc 01 00 	movss  DWORD PTR [esi+0x1cc],xmm0
10053b90:	00 
10053b91:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10053b94:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10053b9a:	e8 51 8e 0a 00       	call   0x100fc9f0
10053b9f:	83 c4 1c             	add    esp,0x1c
10053ba2:	5e                   	pop    esi
10053ba3:	c3                   	ret
