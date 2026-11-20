
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100b1c80 <.text+0xb0c80>:
100b1c80:	55                   	push   ebp
100b1c81:	8b ec                	mov    ebp,esp
100b1c83:	83 ec 18             	sub    esp,0x18
100b1c86:	56                   	push   esi
100b1c87:	6a 00                	push   0x0
100b1c89:	e8 c2 f2 ff ff       	call   0x100b0f50
100b1c8e:	8b f0                	mov    esi,eax
100b1c90:	ba 64 eb 1c 10       	mov    edx,0x101ceb64
100b1c95:	68 70 a9 1c 10       	push   0x101ca970
100b1c9a:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100b1c9d:	c7 81 08 01 00 00 0a 	mov    DWORD PTR [ecx+0x108],0xa
100b1ca4:	00 00 00 
100b1ca7:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100b1cad:	2b 91 98 00 00 00    	sub    edx,DWORD PTR [ecx+0x98]
100b1cb3:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100b1cb6:	89 11                	mov    DWORD PTR [ecx],edx
100b1cb8:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100b1cbb:	c7 81 0c 01 00 00 02 	mov    DWORD PTR [ecx+0x10c],0x2
100b1cc2:	00 00 00 
100b1cc5:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b1cc8:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100b1cce:	ff 15 50 2f 22 10    	call   DWORD PTR ds:0x10222f50
100b1cd4:	8d 45 f4             	lea    eax,[ebp-0xc]
100b1cd7:	c7 45 f4 00 00 00 00 	mov    DWORD PTR [ebp-0xc],0x0
100b1cde:	50                   	push   eax
100b1cdf:	8d 45 e8             	lea    eax,[ebp-0x18]
100b1ce2:	c7 45 f8 00 00 00 00 	mov    DWORD PTR [ebp-0x8],0x0
100b1ce9:	50                   	push   eax
100b1cea:	ff 76 04             	push   DWORD PTR [esi+0x4]
100b1ced:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
100b1cf4:	c7 45 e8 00 00 00 00 	mov    DWORD PTR [ebp-0x18],0x0
100b1cfb:	c7 45 ec 00 00 00 00 	mov    DWORD PTR [ebp-0x14],0x0
100b1d02:	c7 45 f0 00 00 00 00 	mov    DWORD PTR [ebp-0x10],0x0
100b1d09:	e8 22 83 06 00       	call   0x1011a030
100b1d0e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b1d11:	c7 80 e4 01 00 00 00 	mov    DWORD PTR [eax+0x1e4],0x43480000
100b1d18:	00 48 43 
100b1d1b:	8d 45 0c             	lea    eax,[ebp+0xc]
100b1d1e:	50                   	push   eax
100b1d1f:	56                   	push   esi
100b1d20:	e8 bb 82 06 00       	call   0x10119fe0
100b1d25:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100b1d28:	83 c4 20             	add    esp,0x20
100b1d2b:	f3 0f 7e 45 18       	movq   xmm0,QWORD PTR [ebp+0x18]
100b1d30:	66 0f d6 41 20       	movq   QWORD PTR [ecx+0x20],xmm0
100b1d35:	8b 45 20             	mov    eax,DWORD PTR [ebp+0x20]
100b1d38:	89 41 28             	mov    DWORD PTR [ecx+0x28],eax
100b1d3b:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100b1d3e:	f3 0f 7e 05 34 2f 22 	movq   xmm0,QWORD PTR ds:0x10222f34
100b1d45:	10 
100b1d46:	66 0f d6 41 50       	movq   QWORD PTR [ecx+0x50],xmm0
100b1d4b:	a1 3c 2f 22 10       	mov    eax,ds:0x10222f3c
100b1d50:	89 41 58             	mov    DWORD PTR [ecx+0x58],eax
100b1d53:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100b1d56:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100b1d59:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
100b1d5f:	89 81 9c 01 00 00    	mov    DWORD PTR [ecx+0x19c],eax
100b1d65:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b1d68:	c7 46 78 d0 28 10 10 	mov    DWORD PTR [esi+0x78],0x101028d0
100b1d6f:	c7 86 80 00 00 00 20 	mov    DWORD PTR [esi+0x80],0x100b1520
100b1d76:	15 0b 10 
100b1d79:	c7 46 7c 30 1f 0b 10 	mov    DWORD PTR [esi+0x7c],0x100b1f30
100b1d80:	c7 80 a4 01 00 00 01 	mov    DWORD PTR [eax+0x1a4],0x1
100b1d87:	00 00 00 
100b1d8a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b1d8d:	c7 80 20 01 00 00 66 	mov    DWORD PTR [eax+0x120],0x3f666666
100b1d94:	66 66 3f 
100b1d97:	8b c6                	mov    eax,esi
100b1d99:	5e                   	pop    esi
100b1d9a:	8b e5                	mov    esp,ebp
100b1d9c:	5d                   	pop    ebp
100b1d9d:	c3                   	ret
