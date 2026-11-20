
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10008ef0 <.text+0x7ef0>:
10008ef0:	55                   	push   ebp
10008ef1:	8b ec                	mov    ebp,esp
10008ef3:	83 ec 54             	sub    esp,0x54
10008ef6:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
10008efb:	33 c5                	xor    eax,ebp
10008efd:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10008f00:	8b 15 50 0c 22 10    	mov    edx,DWORD PTR ds:0x10220c50
10008f06:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10008f09:	8d 4a 38             	lea    ecx,[edx+0x38]
10008f0c:	56                   	push   esi
10008f0d:	6a ff                	push   0xffffffff
10008f0f:	6a 00                	push   0x0
10008f11:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10008f15:	f3 0f 58 01          	addss  xmm0,DWORD PTR [ecx]
10008f19:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
10008f1e:	f3 0f 10 42 3c       	movss  xmm0,DWORD PTR [edx+0x3c]
10008f23:	f3 0f 58 40 04       	addss  xmm0,DWORD PTR [eax+0x4]
10008f28:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
10008f2d:	f3 0f 10 42 40       	movss  xmm0,DWORD PTR [edx+0x40]
10008f32:	f3 0f 58 40 08       	addss  xmm0,DWORD PTR [eax+0x8]
10008f37:	8d 45 f0             	lea    eax,[ebp-0x10]
10008f3a:	50                   	push   eax
10008f3b:	51                   	push   ecx
10008f3c:	8d 45 ac             	lea    eax,[ebp-0x54]
10008f3f:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
10008f44:	50                   	push   eax
10008f45:	8b 82 84 f5 04 00    	mov    eax,DWORD PTR [edx+0x4f584]
10008f4b:	ff d0                	call   eax
10008f4d:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10008f50:	83 c4 14             	add    esp,0x14
10008f53:	0f 10 00             	movups xmm0,XMMWORD PTR [eax]
10008f56:	0f 11 06             	movups XMMWORD PTR [esi],xmm0
10008f59:	0f 10 40 10          	movups xmm0,XMMWORD PTR [eax+0x10]
10008f5d:	0f 11 46 10          	movups XMMWORD PTR [esi+0x10],xmm0
10008f61:	0f 10 40 20          	movups xmm0,XMMWORD PTR [eax+0x20]
10008f65:	0f 11 46 20          	movups XMMWORD PTR [esi+0x20],xmm0
10008f69:	0f 10 40 30          	movups xmm0,XMMWORD PTR [eax+0x30]
10008f6d:	8b 40 40             	mov    eax,DWORD PTR [eax+0x40]
10008f70:	0f 11 46 30          	movups XMMWORD PTR [esi+0x30],xmm0
10008f74:	89 46 40             	mov    DWORD PTR [esi+0x40],eax
10008f77:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10008f7c:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
10008f7f:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
10008f86:	10 
10008f87:	0f 2f 46 10          	comiss xmm0,DWORD PTR [esi+0x10]
10008f8b:	89 48 38             	mov    DWORD PTR [eax+0x38],ecx
10008f8e:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10008f93:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
10008f96:	89 48 3c             	mov    DWORD PTR [eax+0x3c],ecx
10008f99:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10008f9e:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
10008fa1:	89 48 40             	mov    DWORD PTR [eax+0x40],ecx
10008fa4:	76 3f                	jbe    0x10008fe5
10008fa6:	83 3e 00             	cmp    DWORD PTR [esi],0x0
10008fa9:	75 3a                	jne    0x10008fe5
10008fab:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10008fb0:	0f 10 06             	movups xmm0,XMMWORD PTR [esi]
10008fb3:	8b 4e 40             	mov    ecx,DWORD PTR [esi+0x40]
10008fb6:	83 c0 5c             	add    eax,0x5c
10008fb9:	50                   	push   eax
10008fba:	83 ec 44             	sub    esp,0x44
10008fbd:	8b d4                	mov    edx,esp
10008fbf:	0f 11 02             	movups XMMWORD PTR [edx],xmm0
10008fc2:	0f 10 46 10          	movups xmm0,XMMWORD PTR [esi+0x10]
10008fc6:	0f 11 42 10          	movups XMMWORD PTR [edx+0x10],xmm0
10008fca:	0f 10 46 20          	movups xmm0,XMMWORD PTR [esi+0x20]
10008fce:	0f 11 42 20          	movups XMMWORD PTR [edx+0x20],xmm0
10008fd2:	0f 10 46 30          	movups xmm0,XMMWORD PTR [esi+0x30]
10008fd6:	0f 11 42 30          	movups XMMWORD PTR [edx+0x30],xmm0
10008fda:	89 4a 40             	mov    DWORD PTR [edx+0x40],ecx
10008fdd:	e8 5e a8 ff ff       	call   0x10003840
10008fe2:	83 c4 48             	add    esp,0x48
10008fe5:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10008fe8:	8b c6                	mov    eax,esi
10008fea:	33 cd                	xor    ecx,ebp
10008fec:	5e                   	pop    esi
10008fed:	e8 c1 4b 13 00       	call   0x1013dbb3
10008ff2:	8b e5                	mov    esp,ebp
10008ff4:	5d                   	pop    ebp
10008ff5:	c3                   	ret
