
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011fc80 <.text+0x11ec80>:
1011fc80:	55                   	push   ebp
1011fc81:	8b ec                	mov    ebp,esp
1011fc83:	53                   	push   ebx
1011fc84:	56                   	push   esi
1011fc85:	57                   	push   edi
1011fc86:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1011fc89:	33 db                	xor    ebx,ebx
1011fc8b:	8b f1                	mov    esi,ecx
1011fc8d:	8b 87 2c 25 00 00    	mov    eax,DWORD PTR [edi+0x252c]
1011fc93:	8d 53 01             	lea    edx,[ebx+0x1]
1011fc96:	3b c6                	cmp    eax,esi
1011fc98:	75 11                	jne    0x1011fcab
1011fc9a:	83 bf 4c 26 00 00 00 	cmp    DWORD PTR [edi+0x264c],0x0
1011fca1:	8b da                	mov    ebx,edx
1011fca3:	b9 40 00 00 00       	mov    ecx,0x40
1011fca8:	0f 45 d9             	cmovne ebx,ecx
1011fcab:	33 c9                	xor    ecx,ecx
1011fcad:	39 8f d8 24 00 00    	cmp    DWORD PTR [edi+0x24d8],ecx
1011fcb3:	0f 94 c1             	sete   cl
1011fcb6:	3b f0                	cmp    esi,eax
1011fcb8:	74 08                	je     0x1011fcc2
1011fcba:	3b b7 30 25 00 00    	cmp    esi,DWORD PTR [edi+0x2530]
1011fcc0:	75 09                	jne    0x1011fccb
1011fcc2:	3b 87 30 25 00 00    	cmp    eax,DWORD PTR [edi+0x2530]
1011fcc8:	0f 45 ca             	cmovne ecx,edx
1011fccb:	8b 86 e4 01 00 00    	mov    eax,DWORD PTR [esi+0x1e4]
1011fcd1:	3b 86 e8 01 00 00    	cmp    eax,DWORD PTR [esi+0x1e8]
1011fcd7:	75 1a                	jne    0x1011fcf3
1011fcd9:	3b 9e ec 01 00 00    	cmp    ebx,DWORD PTR [esi+0x1ec]
1011fcdf:	75 12                	jne    0x1011fcf3
1011fce1:	8b 87 08 25 00 00    	mov    eax,DWORD PTR [edi+0x2508]
1011fce7:	3b 87 0c 25 00 00    	cmp    eax,DWORD PTR [edi+0x250c]
1011fced:	75 04                	jne    0x1011fcf3
1011fcef:	85 c9                	test   ecx,ecx
1011fcf1:	74 62                	je     0x1011fd55
1011fcf3:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1011fcf6:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1011fcfc:	6a 00                	push   0x0
1011fcfe:	ff 35 cc 64 22 10    	push   DWORD PTR ds:0x102264cc
1011fd04:	6a 01                	push   0x1
1011fd06:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1011fd0c:	53                   	push   ebx
1011fd0d:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1011fd13:	ff b6 68 01 00 00    	push   DWORD PTR [esi+0x168]
1011fd19:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1011fd1f:	ff b6 e4 01 00 00    	push   DWORD PTR [esi+0x1e4]
1011fd25:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1011fd2b:	83 c4 1c             	add    esp,0x1c
1011fd2e:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
1011fd34:	8b 86 e4 01 00 00    	mov    eax,DWORD PTR [esi+0x1e4]
1011fd3a:	ba 01 00 00 00       	mov    edx,0x1
1011fd3f:	89 86 e8 01 00 00    	mov    DWORD PTR [esi+0x1e8],eax
1011fd45:	89 9e ec 01 00 00    	mov    DWORD PTR [esi+0x1ec],ebx
1011fd4b:	c7 87 d8 24 00 00 01 	mov    DWORD PTR [edi+0x24d8],0x1
1011fd52:	00 00 00 
1011fd55:	8b 8e 64 01 00 00    	mov    ecx,DWORD PTR [esi+0x164]
1011fd5b:	85 c9                	test   ecx,ecx
1011fd5d:	74 15                	je     0x1011fd74
1011fd5f:	8b 11                	mov    edx,DWORD PTR [ecx]
1011fd61:	57                   	push   edi
1011fd62:	ff 92 70 01 00 00    	call   DWORD PTR [edx+0x170]
1011fd68:	5f                   	pop    edi
1011fd69:	5e                   	pop    esi
1011fd6a:	b8 01 00 00 00       	mov    eax,0x1
1011fd6f:	5b                   	pop    ebx
1011fd70:	5d                   	pop    ebp
1011fd71:	c2 04 00             	ret    0x4
1011fd74:	5f                   	pop    edi
1011fd75:	5e                   	pop    esi
1011fd76:	8b c2                	mov    eax,edx
1011fd78:	5b                   	pop    ebx
1011fd79:	5d                   	pop    ebp
1011fd7a:	c2 04 00             	ret    0x4
