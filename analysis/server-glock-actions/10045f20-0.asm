
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10045f20 <.text+0x44f20>:
10045f20:	55                   	push   ebp
10045f21:	8b ec                	mov    ebp,esp
10045f23:	51                   	push   ecx
10045f24:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10045f29:	56                   	push   esi
10045f2a:	8b f1                	mov    esi,ecx
10045f2c:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10045f32:	03 86 10 01 00 00    	add    eax,DWORD PTR [esi+0x110]
10045f38:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
10045f3e:	50                   	push   eax
10045f3f:	68 48 ec 1a 10       	push   0x101aec48
10045f44:	e8 27 a0 09 00       	call   0x100dff70
10045f49:	8d 50 01             	lea    edx,[eax+0x1]
10045f4c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
10045f50:	8a 08                	mov    cl,BYTE PTR [eax]
10045f52:	40                   	inc    eax
10045f53:	84 c9                	test   cl,cl
10045f55:	75 f9                	jne    0x10045f50
10045f57:	2b c2                	sub    eax,edx
10045f59:	74 31                	je     0x10045f8c
10045f5b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10045f60:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
10045f66:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10045f6c:	03 86 10 01 00 00    	add    eax,DWORD PTR [esi+0x110]
10045f72:	50                   	push   eax
10045f73:	68 48 ec 1a 10       	push   0x101aec48
10045f78:	e8 f3 9f 09 00       	call   0x100dff70
10045f7d:	50                   	push   eax
10045f7e:	e8 69 96 12 00       	call   0x1016f5ec
10045f83:	d9 9e 7c 01 00 00    	fstp   DWORD PTR [esi+0x17c]
10045f89:	83 c4 04             	add    esp,0x4
10045f8c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10045f91:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
10045f97:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10045f9d:	03 86 10 01 00 00    	add    eax,DWORD PTR [esi+0x110]
10045fa3:	50                   	push   eax
10045fa4:	68 5c ec 1a 10       	push   0x101aec5c
10045fa9:	e8 c2 9f 09 00       	call   0x100dff70
10045fae:	8d 50 01             	lea    edx,[eax+0x1]
10045fb1:	8a 08                	mov    cl,BYTE PTR [eax]
10045fb3:	40                   	inc    eax
10045fb4:	84 c9                	test   cl,cl
10045fb6:	75 f9                	jne    0x10045fb1
10045fb8:	2b c2                	sub    eax,edx
10045fba:	74 31                	je     0x10045fed
10045fbc:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10045fc1:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
10045fc7:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10045fcd:	03 86 10 01 00 00    	add    eax,DWORD PTR [esi+0x110]
10045fd3:	50                   	push   eax
10045fd4:	68 5c ec 1a 10       	push   0x101aec5c
10045fd9:	e8 92 9f 09 00       	call   0x100dff70
10045fde:	50                   	push   eax
10045fdf:	e8 08 96 12 00       	call   0x1016f5ec
10045fe4:	d9 9e 80 01 00 00    	fstp   DWORD PTR [esi+0x180]
10045fea:	83 c4 04             	add    esp,0x4
10045fed:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10045ff2:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
10045ff8:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10045ffe:	03 86 10 01 00 00    	add    eax,DWORD PTR [esi+0x110]
10046004:	50                   	push   eax
10046005:	68 6c ec 1a 10       	push   0x101aec6c
1004600a:	e8 61 9f 09 00       	call   0x100dff70
1004600f:	8d 50 01             	lea    edx,[eax+0x1]
10046012:	8a 08                	mov    cl,BYTE PTR [eax]
10046014:	40                   	inc    eax
10046015:	84 c9                	test   cl,cl
10046017:	75 f9                	jne    0x10046012
10046019:	2b c2                	sub    eax,edx
1004601b:	74 31                	je     0x1004604e
1004601d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10046022:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
10046028:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1004602e:	03 86 10 01 00 00    	add    eax,DWORD PTR [esi+0x110]
10046034:	50                   	push   eax
10046035:	68 6c ec 1a 10       	push   0x101aec6c
1004603a:	e8 31 9f 09 00       	call   0x100dff70
1004603f:	50                   	push   eax
10046040:	e8 a7 95 12 00       	call   0x1016f5ec
10046045:	d9 9e 84 01 00 00    	fstp   DWORD PTR [esi+0x184]
1004604b:	83 c4 04             	add    esp,0x4
1004604e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10046053:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
10046059:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1004605f:	03 86 10 01 00 00    	add    eax,DWORD PTR [esi+0x110]
10046065:	50                   	push   eax
10046066:	68 7c ec 1a 10       	push   0x101aec7c
1004606b:	e8 00 9f 09 00       	call   0x100dff70
10046070:	8d 50 01             	lea    edx,[eax+0x1]
10046073:	8a 08                	mov    cl,BYTE PTR [eax]
10046075:	40                   	inc    eax
10046076:	84 c9                	test   cl,cl
10046078:	75 f9                	jne    0x10046073
1004607a:	2b c2                	sub    eax,edx
1004607c:	74 31                	je     0x100460af
1004607e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10046083:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
10046089:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1004608f:	03 86 10 01 00 00    	add    eax,DWORD PTR [esi+0x110]
10046095:	50                   	push   eax
10046096:	68 7c ec 1a 10       	push   0x101aec7c
1004609b:	e8 d0 9e 09 00       	call   0x100dff70
100460a0:	50                   	push   eax
100460a1:	e8 b8 54 12 00       	call   0x1016b55e
100460a6:	83 c4 04             	add    esp,0x4
100460a9:	89 86 88 01 00 00    	mov    DWORD PTR [esi+0x188],eax
100460af:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
100460b5:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100460b8:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100460be:	6a 00                	push   0x0
100460c0:	ff 35 68 66 22 10    	push   DWORD PTR ds:0x10226668
100460c6:	6a 01                	push   0x1
100460c8:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100460ce:	f3 0f 10 86 7c 01 00 	movss  xmm0,DWORD PTR [esi+0x17c]
100460d5:	00 
100460d6:	83 c4 0c             	add    esp,0xc
100460d9:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100460de:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100460e4:	f3 0f 10 86 80 01 00 	movss  xmm0,DWORD PTR [esi+0x180]
100460eb:	00 
100460ec:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100460f1:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100460f7:	f3 0f 10 86 84 01 00 	movss  xmm0,DWORD PTR [esi+0x184]
100460fe:	00 
100460ff:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10046104:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
1004610a:	ff b6 88 01 00 00    	push   DWORD PTR [esi+0x188]
10046110:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10046116:	6a 01                	push   0x1
10046118:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1004611e:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
10046124:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1004612a:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004612d:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10046133:	6a 00                	push   0x0
10046135:	ff 35 cc 65 22 10    	push   DWORD PTR ds:0x102265cc
1004613b:	6a 01                	push   0x1
1004613d:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
10046143:	83 c4 18             	add    esp,0x18
10046146:	c7 04 24 00 00 af 43 	mov    DWORD PTR [esp],0x43af0000
1004614d:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
10046153:	6a 00                	push   0x0
10046155:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1004615b:	6a 00                	push   0x0
1004615d:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10046163:	83 c4 0c             	add    esp,0xc
10046166:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
1004616c:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10046172:	8b ce                	mov    ecx,esi
10046174:	66 0f 6e 86 88 01 00 	movd   xmm0,DWORD PTR [esi+0x188]
1004617b:	00 
1004617c:	0f 5b c0             	cvtdq2ps xmm0,xmm0
1004617f:	6a 00                	push   0x0
10046181:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10046184:	6a 01                	push   0x1
10046186:	f3 0f 11 80 74 02 00 	movss  DWORD PTR [eax+0x274],xmm0
1004618d:	00 
1004618e:	83 be e4 01 00 00 00 	cmp    DWORD PTR [esi+0x1e4],0x0
10046195:	8b 06                	mov    eax,DWORD PTR [esi]
10046197:	74 04                	je     0x1004619d
10046199:	6a 1e                	push   0x1e
1004619b:	eb 02                	jmp    0x1004619f
1004619d:	6a 1f                	push   0x1f
1004619f:	ff 90 98 01 00 00    	call   DWORD PTR [eax+0x198]
100461a5:	c6 86 78 01 00 00 01 	mov    BYTE PTR [esi+0x178],0x1
100461ac:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100461b1:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100461b5:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
100461bb:	0f 5a c0             	cvtps2pd xmm0,xmm0
100461be:	f2 0f 58 05 78 13 1a 	addsd  xmm0,QWORD PTR ds:0x101a1378
100461c5:	10 
100461c6:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100461ca:	f3 0f 11 86 d4 01 00 	movss  DWORD PTR [esi+0x1d4],xmm0
100461d1:	00 
100461d2:	f3 0f 11 86 d0 01 00 	movss  DWORD PTR [esi+0x1d0],xmm0
100461d9:	00 
100461da:	f3 0f 11 86 cc 01 00 	movss  DWORD PTR [esi+0x1cc],xmm0
100461e1:	00 
100461e2:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100461e5:	ff b0 1c 02 00 00    	push   DWORD PTR [eax+0x21c]
100461eb:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100461ee:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100461f4:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
100461fa:	83 c4 04             	add    esp,0x4
100461fd:	50                   	push   eax
100461fe:	e8 8d 91 fc ff       	call   0x1000f390
10046203:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10046208:	83 c4 08             	add    esp,0x8
1004620b:	d8 00                	fadd   DWORD PTR [eax]
1004620d:	d9 9e d8 01 00 00    	fstp   DWORD PTR [esi+0x1d8]
10046213:	5e                   	pop    esi
10046214:	8b e5                	mov    esp,ebp
10046216:	5d                   	pop    ebp
10046217:	c3                   	ret
