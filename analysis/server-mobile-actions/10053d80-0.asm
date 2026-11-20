
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10053d80 <.text+0x52d80>:
10053d80:	56                   	push   esi
10053d81:	8b f1                	mov    esi,ecx
10053d83:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
10053d89:	80 b9 e8 1e 00 00 00 	cmp    BYTE PTR [ecx+0x1ee8],0x0
10053d90:	0f 85 b3 00 00 00    	jne    0x10053e49
10053d96:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10053d9b:	f3 0f 10 81 e4 1e 00 	movss  xmm0,DWORD PTR [ecx+0x1ee4]
10053da2:	00 
10053da3:	f3 0f 10 08          	movss  xmm1,DWORD PTR [eax]
10053da7:	0f 2f c1             	comiss xmm0,xmm1
10053daa:	0f 87 99 00 00 00    	ja     0x10053e49
10053db0:	f3 0f 10 86 cc 01 00 	movss  xmm0,DWORD PTR [esi+0x1cc]
10053db7:	00 
10053db8:	0f 2f c1             	comiss xmm0,xmm1
10053dbb:	0f 87 88 00 00 00    	ja     0x10053e49
10053dc1:	f3 0f 10 86 d0 01 00 	movss  xmm0,DWORD PTR [esi+0x1d0]
10053dc8:	00 
10053dc9:	0f 2f c1             	comiss xmm0,xmm1
10053dcc:	77 7b                	ja     0x10053e49
10053dce:	f3 0f 10 86 d4 01 00 	movss  xmm0,DWORD PTR [esi+0x1d4]
10053dd5:	00 
10053dd6:	0f 2f c1             	comiss xmm0,xmm1
10053dd9:	77 6e                	ja     0x10053e49
10053ddb:	68 c8 00 00 00       	push   0xc8
10053de0:	e8 6b 02 0a 00       	call   0x100f4050
10053de5:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10053deb:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10053dee:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10053df4:	6a 00                	push   0x0
10053df6:	ff 35 90 65 22 10    	push   DWORD PTR ds:0x10226590
10053dfc:	6a 01                	push   0x1
10053dfe:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
10053e04:	6a 01                	push   0x1
10053e06:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10053e0c:	83 c4 14             	add    esp,0x14
10053e0f:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
10053e15:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10053e1b:	6a 64                	push   0x64
10053e1d:	6a 00                	push   0x0
10053e1f:	83 ec 08             	sub    esp,0x8
10053e22:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10053e25:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
10053e2c:	3f 
10053e2d:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10053e34:	68 98 95 1a 10       	push   0x101a9598
10053e39:	6a 03                	push   0x3
10053e3b:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10053e41:	e8 aa 8b 0a 00       	call   0x100fc9f0
10053e46:	83 c4 1c             	add    esp,0x1c
10053e49:	5e                   	pop    esi
10053e4a:	c3                   	ret
