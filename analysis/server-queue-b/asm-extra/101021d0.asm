
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101021d0 <.text+0x1011d0>:
101021d0:	55                   	push   ebp
101021d1:	8b ec                	mov    ebp,esp
101021d3:	f3 0f 10 5d 0c       	movss  xmm3,DWORD PTR [ebp+0xc]
101021d8:	0f 57 c0             	xorps  xmm0,xmm0
101021db:	f3 0f 10 4d 14       	movss  xmm1,DWORD PTR [ebp+0x14]
101021e0:	f3 0f 10 55 10       	movss  xmm2,DWORD PTR [ebp+0x10]
101021e5:	0f 2e d8             	ucomiss xmm3,xmm0
101021e8:	9f                   	lahf
101021e9:	f6 c4 44             	test   ah,0x44
101021ec:	7a 2f                	jp     0x1010221d
101021ee:	0f 2e 15 d0 13 1a 10 	ucomiss xmm2,DWORD PTR ds:0x101a13d0
101021f5:	9f                   	lahf
101021f6:	f6 c4 44             	test   ah,0x44
101021f9:	7a 22                	jp     0x1010221d
101021fb:	0f 2e c8             	ucomiss xmm1,xmm0
101021fe:	9f                   	lahf
101021ff:	f6 c4 44             	test   ah,0x44
10102202:	7a 19                	jp     0x1010221d
10102204:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10102207:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
1010220d:	c7 40 04 00 00 00 00 	mov    DWORD PTR [eax+0x4],0x0
10102214:	c7 40 08 00 00 80 3f 	mov    DWORD PTR [eax+0x8],0x3f800000
1010221b:	5d                   	pop    ebp
1010221c:	c3                   	ret
1010221d:	0f 2e d8             	ucomiss xmm3,xmm0
10102220:	9f                   	lahf
10102221:	f6 c4 44             	test   ah,0x44
10102224:	7a 2f                	jp     0x10102255
10102226:	0f 2e 15 60 1f 1a 10 	ucomiss xmm2,DWORD PTR ds:0x101a1f60
1010222d:	9f                   	lahf
1010222e:	f6 c4 44             	test   ah,0x44
10102231:	7a 22                	jp     0x10102255
10102233:	0f 2e c8             	ucomiss xmm1,xmm0
10102236:	9f                   	lahf
10102237:	f6 c4 44             	test   ah,0x44
1010223a:	7a 19                	jp     0x10102255
1010223c:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1010223f:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
10102245:	c7 40 04 00 00 00 00 	mov    DWORD PTR [eax+0x4],0x0
1010224c:	c7 40 08 00 00 80 bf 	mov    DWORD PTR [eax+0x8],0xbf800000
10102253:	5d                   	pop    ebp
10102254:	c3                   	ret
10102255:	56                   	push   esi
10102256:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10102259:	8d 45 0c             	lea    eax,[ebp+0xc]
1010225c:	50                   	push   eax
1010225d:	e8 be 70 01 00       	call   0x10119320
10102262:	8b 15 88 31 22 10    	mov    edx,DWORD PTR ds:0x10223188
10102268:	83 c4 04             	add    esp,0x4
1010226b:	8b c6                	mov    eax,esi
1010226d:	8b 4a 28             	mov    ecx,DWORD PTR [edx+0x28]
10102270:	89 0e                	mov    DWORD PTR [esi],ecx
10102272:	8b 4a 2c             	mov    ecx,DWORD PTR [edx+0x2c]
10102275:	89 4e 04             	mov    DWORD PTR [esi+0x4],ecx
10102278:	8b 4a 30             	mov    ecx,DWORD PTR [edx+0x30]
1010227b:	89 4e 08             	mov    DWORD PTR [esi+0x8],ecx
1010227e:	5e                   	pop    esi
1010227f:	5d                   	pop    ebp
10102280:	c3                   	ret
