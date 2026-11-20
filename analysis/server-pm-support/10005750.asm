
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10005750 <.text+0x4750>:
10005750:	55                   	push   ebp
10005751:	8b ec                	mov    ebp,esp
10005753:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10005759:	83 ec 0c             	sub    esp,0xc
1000575c:	8d 41 38             	lea    eax,[ecx+0x38]
1000575f:	6a 00                	push   0x0
10005761:	50                   	push   eax
10005762:	8b 81 60 f5 04 00    	mov    eax,DWORD PTR [ecx+0x4f560]
10005768:	ff d0                	call   eax
1000576a:	83 c4 08             	add    esp,0x8
1000576d:	83 f8 ff             	cmp    eax,0xffffffff
10005770:	0f 84 8c 00 00 00    	je     0x10005802
10005776:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000577b:	56                   	push   esi
1000577c:	33 f6                	xor    esi,esi
1000577e:	f3 0f 10 40 38       	movss  xmm0,DWORD PTR [eax+0x38]
10005783:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
10005788:	f3 0f 10 40 3c       	movss  xmm0,DWORD PTR [eax+0x3c]
1000578d:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
10005792:	f3 0f 10 40 40       	movss  xmm0,DWORD PTR [eax+0x40]
10005797:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
1000579c:	66 0f 6e 4d 08       	movd   xmm1,DWORD PTR [ebp+0x8]
100057a1:	f3 0f 10 40 40       	movss  xmm0,DWORD PTR [eax+0x40]
100057a6:	0f 5b c9             	cvtdq2ps xmm1,xmm1
100057a9:	6a 00                	push   0x0
100057ab:	f3 0f 58 c1          	addss  xmm0,xmm1
100057af:	f3 0f 11 40 40       	movss  DWORD PTR [eax+0x40],xmm0
100057b4:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
100057ba:	8d 41 38             	lea    eax,[ecx+0x38]
100057bd:	50                   	push   eax
100057be:	8b 81 60 f5 04 00    	mov    eax,DWORD PTR [ecx+0x4f560]
100057c4:	ff d0                	call   eax
100057c6:	83 c4 08             	add    esp,0x8
100057c9:	83 f8 ff             	cmp    eax,0xffffffff
100057cc:	74 33                	je     0x10005801
100057ce:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100057d3:	46                   	inc    esi
100057d4:	83 fe 24             	cmp    esi,0x24
100057d7:	7c c3                	jl     0x1000579c
100057d9:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
100057de:	f3 0f 11 40 38       	movss  DWORD PTR [eax+0x38],xmm0
100057e3:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100057e8:	f3 0f 10 45 f8       	movss  xmm0,DWORD PTR [ebp-0x8]
100057ed:	f3 0f 11 40 3c       	movss  DWORD PTR [eax+0x3c],xmm0
100057f2:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100057f7:	f3 0f 10 45 f4       	movss  xmm0,DWORD PTR [ebp-0xc]
100057fc:	f3 0f 11 40 40       	movss  DWORD PTR [eax+0x40],xmm0
10005801:	5e                   	pop    esi
10005802:	8b e5                	mov    esp,ebp
10005804:	5d                   	pop    ebp
10005805:	c3                   	ret
