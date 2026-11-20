
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100179f0 <.text+0x169f0>:
100179f0:	55                   	push   ebp
100179f1:	8b ec                	mov    ebp,esp
100179f3:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100179f8:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100179fb:	56                   	push   esi
100179fc:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
10017a02:	51                   	push   ecx
10017a03:	ff 15 a4 2f 22 10    	call   DWORD PTR ds:0x10222fa4
10017a09:	8b f0                	mov    esi,eax
10017a0b:	83 c4 04             	add    esp,0x4
10017a0e:	85 f6                	test   esi,esi
10017a10:	74 79                	je     0x10017a8b
10017a12:	56                   	push   esi
10017a13:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
10017a19:	83 c4 04             	add    esp,0x4
10017a1c:	85 c0                	test   eax,eax
10017a1e:	74 6b                	je     0x10017a8b
10017a20:	8b 76 7c             	mov    esi,DWORD PTR [esi+0x7c]
10017a23:	8b 45 18             	mov    eax,DWORD PTR [ebp+0x18]
10017a26:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10017a29:	89 81 9c 01 00 00    	mov    DWORD PTR [ecx+0x19c],eax
10017a2f:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10017a32:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10017a35:	89 81 d8 01 00 00    	mov    DWORD PTR [ecx+0x1d8],eax
10017a3b:	8b 4d 1c             	mov    ecx,DWORD PTR [ebp+0x1c]
10017a3e:	85 c9                	test   ecx,ecx
10017a40:	74 09                	je     0x10017a4b
10017a42:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10017a45:	89 88 b8 00 00 00    	mov    DWORD PTR [eax+0xb8],ecx
10017a4b:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10017a4e:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
10017a51:	f3 0f 7e 00          	movq   xmm0,QWORD PTR [eax]
10017a55:	66 0f d6 41 08       	movq   QWORD PTR [ecx+0x8],xmm0
10017a5a:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
10017a5d:	89 41 10             	mov    DWORD PTR [ecx+0x10],eax
10017a60:	8b 4d 14             	mov    ecx,DWORD PTR [ebp+0x14]
10017a63:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10017a66:	f3 0f 7e 01          	movq   xmm0,QWORD PTR [ecx]
10017a6a:	66 0f d6 42 50       	movq   QWORD PTR [edx+0x50],xmm0
10017a6f:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
10017a72:	89 4a 58             	mov    DWORD PTR [edx+0x58],ecx
10017a75:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10017a78:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
10017a7e:	e8 4d ed ff ff       	call   0x100167d0
10017a83:	83 c4 04             	add    esp,0x4
10017a86:	8b c6                	mov    eax,esi
10017a88:	5e                   	pop    esi
10017a89:	5d                   	pop    ebp
10017a8a:	c3                   	ret
10017a8b:	68 a0 61 1a 10       	push   0x101a61a0
10017a90:	6a 01                	push   0x1
10017a92:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10017a98:	83 c4 08             	add    esp,0x8
10017a9b:	33 c0                	xor    eax,eax
10017a9d:	5e                   	pop    esi
10017a9e:	5d                   	pop    ebp
10017a9f:	c3                   	ret
