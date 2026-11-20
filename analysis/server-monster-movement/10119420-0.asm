
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10119420 <.text+0x118420>:
10119420:	55                   	push   ebp
10119421:	8b ec                	mov    ebp,esp
10119423:	83 ec 10             	sub    esp,0x10
10119426:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1011942b:	33 c5                	xor    eax,ebp
1011942d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10119430:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10119433:	ff 75 14             	push   DWORD PTR [ebp+0x14]
10119436:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10119439:	51                   	push   ecx
1011943a:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1011943e:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
10119443:	f3 0f 10 40 04       	movss  xmm0,DWORD PTR [eax+0x4]
10119448:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
1011944d:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
10119452:	8d 45 f0             	lea    eax,[ebp-0x10]
10119455:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
1011945a:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
1011945f:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10119464:	50                   	push   eax
10119465:	51                   	push   ecx
10119466:	ff 15 74 2f 22 10    	call   DWORD PTR ds:0x10222f74
1011946c:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1011946f:	83 c4 10             	add    esp,0x10
10119472:	33 cd                	xor    ecx,ebp
10119474:	e8 3a 47 02 00       	call   0x1013dbb3
10119479:	8b e5                	mov    esp,ebp
1011947b:	5d                   	pop    ebp
1011947c:	c3                   	ret
