
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100e0ce0 <.text+0xdfce0>:
100e0ce0:	55                   	push   ebp
100e0ce1:	8b ec                	mov    ebp,esp
100e0ce3:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e0ce8:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
100e0ceb:	56                   	push   esi
100e0cec:	57                   	push   edi
100e0ced:	2b 90 98 00 00 00    	sub    edx,DWORD PTR [eax+0x98]
100e0cf3:	8b f9                	mov    edi,ecx
100e0cf5:	52                   	push   edx
100e0cf6:	ff 15 a4 2f 22 10    	call   DWORD PTR ds:0x10222fa4
100e0cfc:	8b f0                	mov    esi,eax
100e0cfe:	83 c4 04             	add    esp,0x4
100e0d01:	85 f6                	test   esi,esi
100e0d03:	0f 84 88 00 00 00    	je     0x100e0d91
100e0d09:	56                   	push   esi
100e0d0a:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
100e0d10:	83 c4 04             	add    esp,0x4
100e0d13:	85 c0                	test   eax,eax
100e0d15:	74 7a                	je     0x100e0d91
100e0d17:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e0d1a:	68 90 87 1a 10       	push   0x101a8790
100e0d1f:	f3 0f 7e 40 08       	movq   xmm0,QWORD PTR [eax+0x8]
100e0d24:	66 0f d6 86 88 00 00 	movq   QWORD PTR [esi+0x88],xmm0
100e0d2b:	00 
100e0d2c:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
100e0d2f:	89 86 90 00 00 00    	mov    DWORD PTR [esi+0x90],eax
100e0d35:	81 8e 24 02 00 00 00 	or     DWORD PTR [esi+0x224],0x40000000
100e0d3c:	00 00 40 
100e0d3f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e0d44:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e0d4a:	03 86 80 00 00 00    	add    eax,DWORD PTR [esi+0x80]
100e0d50:	50                   	push   eax
100e0d51:	e8 9a e8 05 00       	call   0x1013f5f0
100e0d56:	83 c4 08             	add    esp,0x8
100e0d59:	85 c0                	test   eax,eax
100e0d5b:	74 16                	je     0x100e0d73
100e0d5d:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
100e0d60:	85 c0                	test   eax,eax
100e0d62:	78 0f                	js     0x100e0d73
100e0d64:	66 0f 6e c0          	movd   xmm0,eax
100e0d68:	0f 5b c0             	cvtdq2ps xmm0,xmm0
100e0d6b:	f3 0f 11 86 e8 01 00 	movss  DWORD PTR [esi+0x1e8],xmm0
100e0d72:	00 
100e0d73:	56                   	push   esi
100e0d74:	e8 57 5a f3 ff       	call   0x100167d0
100e0d79:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e0d7c:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e0d82:	56                   	push   esi
100e0d83:	e8 f8 5b f3 ff       	call   0x10016980
100e0d88:	83 c4 0c             	add    esp,0xc
100e0d8b:	5f                   	pop    edi
100e0d8c:	5e                   	pop    esi
100e0d8d:	5d                   	pop    ebp
100e0d8e:	c2 08 00             	ret    0x8
100e0d91:	68 50 b8 1d 10       	push   0x101db850
100e0d96:	6a 01                	push   0x1
100e0d98:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100e0d9e:	83 c4 08             	add    esp,0x8
100e0da1:	5f                   	pop    edi
100e0da2:	5e                   	pop    esi
100e0da3:	5d                   	pop    ebp
100e0da4:	c2 08 00             	ret    0x8
