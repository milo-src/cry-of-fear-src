
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100459b0 <.text+0x449b0>:
100459b0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100459b5:	56                   	push   esi
100459b6:	8b f1                	mov    esi,ecx
100459b8:	f3 0f 10 08          	movss  xmm1,DWORD PTR [eax]
100459bc:	f3 0f 10 86 cc 01 00 	movss  xmm0,DWORD PTR [esi+0x1cc]
100459c3:	00 
100459c4:	0f 2f c1             	comiss xmm0,xmm1
100459c7:	0f 87 e5 00 00 00    	ja     0x10045ab2
100459cd:	f3 0f 10 86 d0 01 00 	movss  xmm0,DWORD PTR [esi+0x1d0]
100459d4:	00 
100459d5:	0f 2f c1             	comiss xmm0,xmm1
100459d8:	0f 87 d4 00 00 00    	ja     0x10045ab2
100459de:	f3 0f 10 86 d8 01 00 	movss  xmm0,DWORD PTR [esi+0x1d8]
100459e5:	00 
100459e6:	0f 2f c1             	comiss xmm0,xmm1
100459e9:	0f 87 c3 00 00 00    	ja     0x10045ab2
100459ef:	83 be 28 01 00 00 00 	cmp    DWORD PTR [esi+0x128],0x0
100459f6:	0f 85 b6 00 00 00    	jne    0x10045ab2
100459fc:	83 be 40 01 00 00 00 	cmp    DWORD PTR [esi+0x140],0x0
10045a03:	0f 85 a9 00 00 00    	jne    0x10045ab2
10045a09:	80 be 78 01 00 00 00 	cmp    BYTE PTR [esi+0x178],0x0
10045a10:	0f 85 9c 00 00 00    	jne    0x10045ab2
10045a16:	68 57 02 00 00       	push   0x257
10045a1b:	6a 00                	push   0x0
10045a1d:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
10045a23:	83 c4 08             	add    esp,0x8
10045a26:	83 f8 32             	cmp    eax,0x32
10045a29:	0f 85 83 00 00 00    	jne    0x10045ab2
10045a2f:	6a 02                	push   0x2
10045a31:	6a 00                	push   0x0
10045a33:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
10045a39:	83 c4 08             	add    esp,0x8
10045a3c:	83 e8 00             	sub    eax,0x0
10045a3f:	74 50                	je     0x10045a91
10045a41:	83 e8 01             	sub    eax,0x1
10045a44:	74 28                	je     0x10045a6e
10045a46:	83 e8 01             	sub    eax,0x1
10045a49:	75 67                	jne    0x10045ab2
10045a4b:	83 be e4 01 00 00 00 	cmp    DWORD PTR [esi+0x1e4],0x0
10045a52:	8b ce                	mov    ecx,esi
10045a54:	8b 06                	mov    eax,DWORD PTR [esi]
10045a56:	6a 00                	push   0x0
10045a58:	6a 01                	push   0x1
10045a5a:	8b 80 98 01 00 00    	mov    eax,DWORD PTR [eax+0x198]
10045a60:	74 06                	je     0x10045a68
10045a62:	6a 19                	push   0x19
10045a64:	ff d0                	call   eax
10045a66:	5e                   	pop    esi
10045a67:	c3                   	ret
10045a68:	6a 1a                	push   0x1a
10045a6a:	ff d0                	call   eax
10045a6c:	5e                   	pop    esi
10045a6d:	c3                   	ret
10045a6e:	83 be e4 01 00 00 00 	cmp    DWORD PTR [esi+0x1e4],0x0
10045a75:	8b ce                	mov    ecx,esi
10045a77:	8b 06                	mov    eax,DWORD PTR [esi]
10045a79:	6a 00                	push   0x0
10045a7b:	6a 01                	push   0x1
10045a7d:	8b 80 98 01 00 00    	mov    eax,DWORD PTR [eax+0x198]
10045a83:	74 06                	je     0x10045a8b
10045a85:	6a 17                	push   0x17
10045a87:	ff d0                	call   eax
10045a89:	5e                   	pop    esi
10045a8a:	c3                   	ret
10045a8b:	6a 18                	push   0x18
10045a8d:	ff d0                	call   eax
10045a8f:	5e                   	pop    esi
10045a90:	c3                   	ret
10045a91:	83 be e4 01 00 00 00 	cmp    DWORD PTR [esi+0x1e4],0x0
10045a98:	8b ce                	mov    ecx,esi
10045a9a:	8b 06                	mov    eax,DWORD PTR [esi]
10045a9c:	6a 00                	push   0x0
10045a9e:	6a 01                	push   0x1
10045aa0:	8b 80 98 01 00 00    	mov    eax,DWORD PTR [eax+0x198]
10045aa6:	74 06                	je     0x10045aae
10045aa8:	6a 15                	push   0x15
10045aaa:	ff d0                	call   eax
10045aac:	5e                   	pop    esi
10045aad:	c3                   	ret
10045aae:	6a 16                	push   0x16
10045ab0:	ff d0                	call   eax
10045ab2:	5e                   	pop    esi
10045ab3:	c3                   	ret
