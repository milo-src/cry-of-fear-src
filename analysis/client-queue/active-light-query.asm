1005bff0:	55                   	push   ebp
1005bff1:	8b ec                	mov    ebp,esp
1005bff3:	51                   	push   ecx
1005bff4:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1005bffa:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
1005bffd:	f3 0f 10 4d fc       	movss  xmm1,DWORD PTR [ebp-0x4]
1005c002:	33 d2                	xor    edx,edx
1005c004:	b9 5c c5 4c 10       	mov    ecx,0x104cc55c
1005c009:	0f 57 d2             	xorps  xmm2,xmm2
1005c00c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
1005c010:	f3 0f 10 41 10       	movss  xmm0,DWORD PTR [ecx+0x10]
1005c015:	0f 2f c1             	comiss xmm0,xmm1
1005c018:	72 0d                	jb     0x1005c027
1005c01a:	f3 0f 10 01          	movss  xmm0,DWORD PTR [ecx]
1005c01e:	0f 2e c2             	ucomiss xmm0,xmm2
1005c021:	9f                   	lahf
1005c022:	f6 c4 44             	test   ah,0x44
1005c025:	7a 0f                	jp     0x1005c036
1005c027:	42                   	inc    edx
1005c028:	83 c1 7c             	add    ecx,0x7c
1005c02b:	83 fa 20             	cmp    edx,0x20
1005c02e:	7c e0                	jl     0x1005c010
1005c030:	33 c0                	xor    eax,eax
1005c032:	8b e5                	mov    esp,ebp
1005c034:	5d                   	pop    ebp
1005c035:	c3                   	ret
1005c036:	b8 01 00 00 00       	mov    eax,0x1
1005c03b:	8b e5                	mov    esp,ebp
1005c03d:	5d                   	pop    ebp
1005c03e:	c3                   	ret
