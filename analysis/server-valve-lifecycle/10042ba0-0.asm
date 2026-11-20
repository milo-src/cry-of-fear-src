
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10042ba0 <.text+0x41ba0>:
10042ba0:	56                   	push   esi
10042ba1:	8b f1                	mov    esi,ecx
10042ba3:	8b 06                	mov    eax,DWORD PTR [esi]
10042ba5:	ff 50 30             	call   DWORD PTR [eax+0x30]
10042ba8:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10042bab:	c7 80 0c 01 00 00 04 	mov    DWORD PTR [eax+0x10c],0x4
10042bb2:	00 00 00 
10042bb5:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10042bb8:	c7 80 08 01 00 00 07 	mov    DWORD PTR [eax+0x108],0x7
10042bbf:	00 00 00 
10042bc2:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10042bc5:	83 c0 08             	add    eax,0x8
10042bc8:	50                   	push   eax
10042bc9:	56                   	push   esi
10042bca:	e8 11 74 0d 00       	call   0x10119fe0
10042bcf:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10042bd2:	8d 81 e8 00 00 00    	lea    eax,[ecx+0xe8]
10042bd8:	50                   	push   eax
10042bd9:	8d 81 dc 00 00 00    	lea    eax,[ecx+0xdc]
10042bdf:	50                   	push   eax
10042be0:	51                   	push   ecx
10042be1:	e8 4a 74 0d 00       	call   0x1011a030
10042be6:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10042be9:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10042bee:	8b 8a b8 00 00 00    	mov    ecx,DWORD PTR [edx+0xb8]
10042bf4:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
10042bfa:	51                   	push   ecx
10042bfb:	ff b2 0c 02 00 00    	push   DWORD PTR [edx+0x20c]
10042c01:	ff 15 50 2f 22 10    	call   DWORD PTR ds:0x10222f50
10042c07:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10042c0a:	83 c4 1c             	add    esp,0x1c
10042c0d:	8b 16                	mov    edx,DWORD PTR [esi]
10042c0f:	83 b8 d8 01 00 00 00 	cmp    DWORD PTR [eax+0x1d8],0x0
10042c16:	51                   	push   ecx
10042c17:	8b ce                	mov    ecx,esi
10042c19:	74 11                	je     0x10042c2c
10042c1b:	c7 04 24 00 00 00 40 	mov    DWORD PTR [esp],0x40000000
10042c22:	ff 52 08             	call   DWORD PTR [edx+0x8]
10042c25:	b8 a0 26 04 10       	mov    eax,0x100426a0
10042c2a:	eb 0f                	jmp    0x10042c3b
10042c2c:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
10042c33:	ff 52 08             	call   DWORD PTR [edx+0x8]
10042c36:	b8 00 2a 04 10       	mov    eax,0x10042a00
10042c3b:	89 46 78             	mov    DWORD PTR [esi+0x78],eax
10042c3e:	83 be 80 01 00 00 00 	cmp    DWORD PTR [esi+0x180],0x0
10042c45:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10042c48:	74 19                	je     0x10042c63
10042c4a:	c7 80 4c 01 00 00 05 	mov    DWORD PTR [eax+0x14c],0x5
10042c51:	00 00 00 
10042c54:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10042c57:	c7 80 50 01 00 00 00 	mov    DWORD PTR [eax+0x150],0x0
10042c5e:	00 00 00 
10042c61:	eb 17                	jmp    0x10042c7a
10042c63:	c7 80 4c 01 00 00 00 	mov    DWORD PTR [eax+0x14c],0x0
10042c6a:	00 00 00 
10042c6d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10042c70:	c7 80 50 01 00 00 00 	mov    DWORD PTR [eax+0x150],0x437f0000
10042c77:	00 7f 43 
10042c7a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10042c7d:	81 b8 48 02 00 00 68 	cmp    DWORD PTR [eax+0x248],0x168
10042c84:	01 00 00 
10042c87:	7c 0d                	jl     0x10042c96
10042c89:	c7 80 48 02 00 00 67 	mov    DWORD PTR [eax+0x248],0x167
10042c90:	01 00 00 
10042c93:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10042c96:	83 b8 4c 02 00 00 00 	cmp    DWORD PTR [eax+0x24c],0x0
10042c9d:	7f 0d                	jg     0x10042cac
10042c9f:	c7 80 4c 02 00 00 02 	mov    DWORD PTR [eax+0x24c],0x2
10042ca6:	00 00 00 
10042ca9:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10042cac:	83 b8 54 02 00 00 02 	cmp    DWORD PTR [eax+0x254],0x2
10042cb3:	7e 0d                	jle    0x10042cc2
10042cb5:	c7 80 54 02 00 00 02 	mov    DWORD PTR [eax+0x254],0x2
10042cbc:	00 00 00 
10042cbf:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10042cc2:	83 b8 54 02 00 00 00 	cmp    DWORD PTR [eax+0x254],0x0
10042cc9:	7d 0d                	jge    0x10042cd8
10042ccb:	c7 80 54 02 00 00 00 	mov    DWORD PTR [eax+0x254],0x0
10042cd2:	00 00 00 
10042cd5:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10042cd8:	c7 80 50 02 00 00 00 	mov    DWORD PTR [eax+0x250],0x0
10042cdf:	00 00 00 
10042ce2:	5e                   	pop    esi
10042ce3:	c3                   	ret
