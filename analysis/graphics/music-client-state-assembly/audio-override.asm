; Extracted from retained GNU objdump -d -Mintel listing; original DLL bytes verified.
1007f8fa:	80 be c4 00 00 00 00 	cmp    BYTE PTR [esi+0xc4],0x0
1007f901:	74 35                	je     0x1007f938
1007f903:	85 c9                	test   ecx,ecx
1007f905:	74 31                	je     0x1007f938
1007f907:	66 0f 6e 86 c0 00 00 	movd   xmm0,DWORD PTR [esi+0xc0]
1007f90e:	00 
1007f90f:	0f 57 c9             	xorps  xmm1,xmm1
1007f912:	0f 5b c0             	cvtdq2ps xmm0,xmm0
1007f915:	8b 01                	mov    eax,DWORD PTR [ecx]
1007f917:	51                   	push   ecx
1007f918:	f3 0f 5e 05 48 f5 13 	divss  xmm0,DWORD PTR ds:0x1013f548
1007f91f:	10 
1007f920:	f3 0f 5f c8          	maxss  xmm1,xmm0
1007f924:	f3 0f 10 05 f0 cc 13 	movss  xmm0,DWORD PTR ds:0x1013ccf0
1007f92b:	10 
1007f92c:	f3 0f 5d c1          	minss  xmm0,xmm1
1007f930:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1007f935:	ff 50 20             	call   DWORD PTR [eax+0x20]
1007f938:	5e                   	pop    esi
1007f939:	8b e5                	mov    esp,ebp
1007f93b:	5d                   	pop    ebp
1007f93c:	c3                   	ret
1007f93d:	cc                   	int3
1007f93e:	cc                   	int3
1007f93f:	cc                   	int3
