
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10101f20 <.text+0x100f20>:
10101f20:	55                   	push   ebp
10101f21:	8b ec                	mov    ebp,esp
10101f23:	83 ec 50             	sub    esp,0x50
10101f26:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10101f29:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10101f2c:	f3 0f 10 81 78 01 00 	movss  xmm0,DWORD PTR [ecx+0x178]
10101f33:	00 
10101f34:	f3 0f 58 41 08       	addss  xmm0,DWORD PTR [ecx+0x8]
10101f39:	f3 0f 11 45 e8       	movss  DWORD PTR [ebp-0x18],xmm0
10101f3e:	f3 0f 10 81 7c 01 00 	movss  xmm0,DWORD PTR [ecx+0x17c]
10101f45:	00 
10101f46:	f3 0f 58 41 0c       	addss  xmm0,DWORD PTR [ecx+0xc]
10101f4b:	f3 0f 11 45 ec       	movss  DWORD PTR [ebp-0x14],xmm0
10101f50:	f3 0f 10 81 80 01 00 	movss  xmm0,DWORD PTR [ecx+0x180]
10101f57:	00 
10101f58:	f3 0f 58 41 10       	addss  xmm0,DWORD PTR [ecx+0x10]
10101f5d:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
10101f62:	f3 0f 10 80 78 01 00 	movss  xmm0,DWORD PTR [eax+0x178]
10101f69:	00 
10101f6a:	f3 0f 58 40 08       	addss  xmm0,DWORD PTR [eax+0x8]
10101f6f:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
10101f74:	f3 0f 10 80 7c 01 00 	movss  xmm0,DWORD PTR [eax+0x17c]
10101f7b:	00 
10101f7c:	f3 0f 58 40 0c       	addss  xmm0,DWORD PTR [eax+0xc]
10101f81:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
10101f86:	f3 0f 10 80 80 01 00 	movss  xmm0,DWORD PTR [eax+0x180]
10101f8d:	00 
10101f8e:	f3 0f 58 40 10       	addss  xmm0,DWORD PTR [eax+0x10]
10101f93:	8d 45 b0             	lea    eax,[ebp-0x50]
10101f96:	50                   	push   eax
10101f97:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
10101f9d:	8d 45 f4             	lea    eax,[ebp-0xc]
10101fa0:	6a 01                	push   0x1
10101fa2:	50                   	push   eax
10101fa3:	8d 45 e8             	lea    eax,[ebp-0x18]
10101fa6:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
10101fab:	50                   	push   eax
10101fac:	e8 4f 88 01 00       	call   0x1011a800
10101fb1:	83 c4 14             	add    esp,0x14
10101fb4:	83 7d b8 00          	cmp    DWORD PTR [ebp-0x48],0x0
10101fb8:	74 06                	je     0x10101fc0
10101fba:	83 7d bc 00          	cmp    DWORD PTR [ebp-0x44],0x0
10101fbe:	75 1b                	jne    0x10101fdb
10101fc0:	f3 0f 10 45 c0       	movss  xmm0,DWORD PTR [ebp-0x40]
10101fc5:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
10101fcc:	9f                   	lahf
10101fcd:	f6 c4 44             	test   ah,0x44
10101fd0:	7a 09                	jp     0x10101fdb
10101fd2:	b8 01 00 00 00       	mov    eax,0x1
10101fd7:	8b e5                	mov    esp,ebp
10101fd9:	5d                   	pop    ebp
10101fda:	c3                   	ret
10101fdb:	33 c0                	xor    eax,eax
10101fdd:	8b e5                	mov    esp,ebp
10101fdf:	5d                   	pop    ebp
10101fe0:	c3                   	ret
