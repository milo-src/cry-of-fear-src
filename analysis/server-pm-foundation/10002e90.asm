
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10002e90 <.text+0x1e90>:
10002e90:	55                   	push   ebp
10002e91:	8b ec                	mov    ebp,esp
10002e93:	83 ec 10             	sub    esp,0x10
10002e96:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
10002e9b:	33 c5                	xor    eax,ebp
10002e9d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10002ea0:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
10002ea3:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10002ea6:	f3 0f 10 01          	movss  xmm0,DWORD PTR [ecx]
10002eaa:	f3 0f 5c 00          	subss  xmm0,DWORD PTR [eax]
10002eae:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
10002eb3:	f3 0f 10 41 04       	movss  xmm0,DWORD PTR [ecx+0x4]
10002eb8:	f3 0f 5c 40 04       	subss  xmm0,DWORD PTR [eax+0x4]
10002ebd:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
10002ec2:	f3 0f 10 41 08       	movss  xmm0,DWORD PTR [ecx+0x8]
10002ec7:	f3 0f 5c 40 08       	subss  xmm0,DWORD PTR [eax+0x8]
10002ecc:	8d 45 f0             	lea    eax,[ebp-0x10]
10002ecf:	50                   	push   eax
10002ed0:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
10002ed5:	e8 f6 00 00 00       	call   0x10002fd0
10002eda:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10002edd:	83 c4 04             	add    esp,0x4
10002ee0:	33 cd                	xor    ecx,ebp
10002ee2:	e8 cc ac 13 00       	call   0x1013dbb3
10002ee7:	8b e5                	mov    esp,ebp
10002ee9:	5d                   	pop    ebp
10002eea:	c3                   	ret
