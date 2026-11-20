
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011a8d0 <.text+0x1198d0>:
1011a8d0:	55                   	push   ebp
1011a8d1:	8b ec                	mov    ebp,esp
1011a8d3:	83 ec 10             	sub    esp,0x10
1011a8d6:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1011a8db:	33 c5                	xor    eax,ebp
1011a8dd:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1011a8e0:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
1011a8e3:	8d 45 f0             	lea    eax,[ebp-0x10]
1011a8e6:	56                   	push   esi
1011a8e7:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1011a8ea:	50                   	push   eax
1011a8eb:	51                   	push   ecx
1011a8ec:	ff 15 70 2f 22 10    	call   DWORD PTR ds:0x10222f70
1011a8f2:	f3 0f 10 45 f0       	movss  xmm0,DWORD PTR [ebp-0x10]
1011a8f7:	83 c4 08             	add    esp,0x8
1011a8fa:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1011a8fd:	8b c6                	mov    eax,esi
1011a8ff:	f3 0f 11 06          	movss  DWORD PTR [esi],xmm0
1011a903:	33 cd                	xor    ecx,ebp
1011a905:	f3 0f 10 45 f4       	movss  xmm0,DWORD PTR [ebp-0xc]
1011a90a:	f3 0f 11 46 04       	movss  DWORD PTR [esi+0x4],xmm0
1011a90f:	f3 0f 10 45 f8       	movss  xmm0,DWORD PTR [ebp-0x8]
1011a914:	f3 0f 11 46 08       	movss  DWORD PTR [esi+0x8],xmm0
1011a919:	5e                   	pop    esi
1011a91a:	e8 94 32 02 00       	call   0x1013dbb3
1011a91f:	8b e5                	mov    esp,ebp
1011a921:	5d                   	pop    ebp
1011a922:	c3                   	ret
