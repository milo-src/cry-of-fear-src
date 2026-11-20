
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10004fa0 <.text+0x3fa0>:
10004fa0:	55                   	push   ebp
10004fa1:	8b ec                	mov    ebp,esp
10004fa3:	83 ec 10             	sub    esp,0x10
10004fa6:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
10004fab:	33 c5                	xor    eax,ebp
10004fad:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10004fb0:	68 88 02 00 00       	push   0x288
10004fb5:	6a 00                	push   0x0
10004fb7:	68 60 0c 22 10       	push   0x10220c60
10004fbc:	e8 cf a4 13 00       	call   0x1013f490
10004fc1:	f3 0f 10 2d 48 1f 1a 	movss  xmm5,DWORD PTR ds:0x101a1f48
10004fc8:	10 
10004fc9:	83 c4 0c             	add    esp,0xc
10004fcc:	f2 0f 10 1d 08 1e 1a 	movsd  xmm3,QWORD PTR ds:0x101a1e08
10004fd3:	10 
10004fd4:	33 c9                	xor    ecx,ecx
10004fd6:	f3 0f 10 15 d0 1d 1a 	movss  xmm2,DWORD PTR ds:0x101a1dd0
10004fdd:	10 
10004fde:	0f 28 cd             	movaps xmm1,xmm5
10004fe1:	b8 64 0c 22 10       	mov    eax,0x10220c64
10004fe6:	66 66 0f 1f 84 00 00 	data16 nop WORD PTR [eax+eax*1+0x0]
10004fed:	00 00 00 
10004ff0:	0f 5a c1             	cvtps2pd xmm0,xmm1
10004ff3:	41                   	inc    ecx
10004ff4:	c7 40 fc 00 00 00 00 	mov    DWORD PTR [eax-0x4],0x0
10004ffb:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
10005001:	f3 0f 11 48 04       	movss  DWORD PTR [eax+0x4],xmm1
10005006:	83 c0 0c             	add    eax,0xc
10005009:	f2 0f 58 c3          	addsd  xmm0,xmm3
1000500d:	66 0f 5a c8          	cvtpd2ps xmm1,xmm0
10005011:	0f 2f d1             	comiss xmm2,xmm1
10005014:	73 da                	jae    0x10004ff0
10005016:	8d 04 49             	lea    eax,[ecx+ecx*2]
10005019:	0f 28 c5             	movaps xmm0,xmm5
1000501c:	8d 04 85 64 0c 22 10 	lea    eax,[eax*4+0x10220c64]
10005023:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
10005027:	41                   	inc    ecx
10005028:	f3 0f 5a c0          	cvtss2sd xmm0,xmm0
1000502c:	c7 40 fc 00 00 00 00 	mov    DWORD PTR [eax-0x4],0x0
10005033:	c7 40 04 00 00 00 00 	mov    DWORD PTR [eax+0x4],0x0
1000503a:	83 c0 0c             	add    eax,0xc
1000503d:	f2 0f 58 c3          	addsd  xmm0,xmm3
10005041:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
10005045:	0f 2f d0             	comiss xmm2,xmm0
10005048:	73 d9                	jae    0x10005023
1000504a:	8d 04 49             	lea    eax,[ecx+ecx*2]
1000504d:	0f 28 c5             	movaps xmm0,xmm5
10005050:	8d 04 85 64 0c 22 10 	lea    eax,[eax*4+0x10220c64]
10005057:	66 0f 1f 84 00 00 00 	nop    WORD PTR [eax+eax*1+0x0]
1000505e:	00 00 
10005060:	f3 0f 11 40 fc       	movss  DWORD PTR [eax-0x4],xmm0
10005065:	41                   	inc    ecx
10005066:	f3 0f 5a c0          	cvtss2sd xmm0,xmm0
1000506a:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
10005070:	c7 40 04 00 00 00 00 	mov    DWORD PTR [eax+0x4],0x0
10005077:	83 c0 0c             	add    eax,0xc
1000507a:	f2 0f 58 c3          	addsd  xmm0,xmm3
1000507e:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
10005082:	0f 2f d0             	comiss xmm2,xmm0
10005085:	73 d9                	jae    0x10005060
10005087:	f2 0f 10 1d 18 1e 1a 	movsd  xmm3,QWORD PTR ds:0x101a1e18
1000508e:	10 
1000508f:	0f 28 e5             	movaps xmm4,xmm5
10005092:	0f 28 cd             	movaps xmm1,xmm5
10005095:	66 66 66 0f 1f 84 00 	data16 data16 nop WORD PTR [eax+eax*1+0x0]
1000509c:	00 00 00 00 
100050a0:	8d 04 49             	lea    eax,[ecx+ecx*2]
100050a3:	0f 28 c5             	movaps xmm0,xmm5
100050a6:	8d 04 85 64 0c 22 10 	lea    eax,[eax*4+0x10220c64]
100050ad:	0f 1f 00             	nop    DWORD PTR [eax]
100050b0:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
100050b5:	41                   	inc    ecx
100050b6:	f3 0f 5a c0          	cvtss2sd xmm0,xmm0
100050ba:	f3 0f 11 60 fc       	movss  DWORD PTR [eax-0x4],xmm4
100050bf:	f2 0f 58 c3          	addsd  xmm0,xmm3
100050c3:	f3 0f 11 08          	movss  DWORD PTR [eax],xmm1
100050c7:	83 c0 0c             	add    eax,0xc
100050ca:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100050ce:	0f 2f d0             	comiss xmm2,xmm0
100050d1:	73 dd                	jae    0x100050b0
100050d3:	0f 57 c0             	xorps  xmm0,xmm0
100050d6:	f3 0f 5a c1          	cvtss2sd xmm0,xmm1
100050da:	f2 0f 58 c3          	addsd  xmm0,xmm3
100050de:	66 0f 5a c8          	cvtpd2ps xmm1,xmm0
100050e2:	0f 2f d1             	comiss xmm2,xmm1
100050e5:	73 b9                	jae    0x100050a0
100050e7:	0f 57 c0             	xorps  xmm0,xmm0
100050ea:	f3 0f 5a c4          	cvtss2sd xmm0,xmm4
100050ee:	f2 0f 58 c3          	addsd  xmm0,xmm3
100050f2:	66 0f 5a e0          	cvtpd2ps xmm4,xmm0
100050f6:	0f 2f d4             	comiss xmm2,xmm4
100050f9:	73 97                	jae    0x10005092
100050fb:	f3 0f 10 2d 60 1f 1a 	movss  xmm5,DWORD PTR ds:0x101a1f60
10005102:	10 
10005103:	8d 04 49             	lea    eax,[ecx+ecx*2]
10005106:	f2 0f 10 25 98 1e 1a 	movsd  xmm4,QWORD PTR ds:0x101a1e98
1000510d:	10 
1000510e:	83 c1 03             	add    ecx,0x3
10005111:	f3 0f 10 15 80 13 1a 	movss  xmm2,DWORD PTR ds:0x101a1380
10005118:	10 
10005119:	0f 28 c5             	movaps xmm0,xmm5
1000511c:	c7 04 85 60 0c 22 10 	mov    DWORD PTR [eax*4+0x10220c60],0x0
10005123:	00 00 00 00 
10005127:	c7 04 85 64 0c 22 10 	mov    DWORD PTR [eax*4+0x10220c64],0x0
1000512e:	00 00 00 00 
10005132:	c7 04 85 68 0c 22 10 	mov    DWORD PTR [eax*4+0x10220c68],0x0
10005139:	00 00 00 00 
1000513d:	c7 04 85 6c 0c 22 10 	mov    DWORD PTR [eax*4+0x10220c6c],0x0
10005144:	00 00 00 00 
10005148:	c7 04 85 70 0c 22 10 	mov    DWORD PTR [eax*4+0x10220c70],0x0
1000514f:	00 00 00 00 
10005153:	c7 04 85 74 0c 22 10 	mov    DWORD PTR [eax*4+0x10220c74],0x3f800000
1000515a:	00 00 80 3f 
1000515e:	c7 04 85 78 0c 22 10 	mov    DWORD PTR [eax*4+0x10220c78],0x0
10005165:	00 00 00 00 
10005169:	c7 04 85 7c 0c 22 10 	mov    DWORD PTR [eax*4+0x10220c7c],0x0
10005170:	00 00 00 00 
10005174:	c7 04 85 80 0c 22 10 	mov    DWORD PTR [eax*4+0x10220c80],0x40c00000
1000517b:	00 00 c0 40 
1000517f:	8d 04 49             	lea    eax,[ecx+ecx*2]
10005182:	c7 45 f0 00 00 00 00 	mov    DWORD PTR [ebp-0x10],0x0
10005189:	8d 04 85 64 0c 22 10 	lea    eax,[eax*4+0x10220c64]
10005190:	c7 45 f4 00 00 80 3f 	mov    DWORD PTR [ebp-0xc],0x3f800000
10005197:	c7 45 f8 00 00 c0 40 	mov    DWORD PTR [ebp-0x8],0x40c00000
1000519e:	66 90                	xchg   ax,ax
100051a0:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
100051a4:	41                   	inc    ecx
100051a5:	f3 0f 5a c0          	cvtss2sd xmm0,xmm0
100051a9:	c7 40 fc 00 00 00 00 	mov    DWORD PTR [eax-0x4],0x0
100051b0:	c7 40 04 00 00 00 00 	mov    DWORD PTR [eax+0x4],0x0
100051b7:	83 c0 0c             	add    eax,0xc
100051ba:	f2 0f 58 c4          	addsd  xmm0,xmm4
100051be:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100051c2:	0f 2f d0             	comiss xmm2,xmm0
100051c5:	73 d9                	jae    0x100051a0
100051c7:	8d 04 49             	lea    eax,[ecx+ecx*2]
100051ca:	0f 28 c5             	movaps xmm0,xmm5
100051cd:	8d 04 85 64 0c 22 10 	lea    eax,[eax*4+0x10220c64]
100051d4:	f3 0f 11 40 fc       	movss  DWORD PTR [eax-0x4],xmm0
100051d9:	41                   	inc    ecx
100051da:	f3 0f 58 c2          	addss  xmm0,xmm2
100051de:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
100051e4:	c7 40 04 00 00 00 00 	mov    DWORD PTR [eax+0x4],0x0
100051eb:	83 c0 0c             	add    eax,0xc
100051ee:	0f 2f d0             	comiss xmm2,xmm0
100051f1:	73 e1                	jae    0x100051d4
100051f3:	33 d2                	xor    edx,edx
100051f5:	66 66 66 0f 1f 84 00 	data16 data16 nop WORD PTR [eax+eax*1+0x0]
100051fc:	00 00 00 00 
10005200:	f3 0f 10 5c 95 f0    	movss  xmm3,DWORD PTR [ebp+edx*4-0x10]
10005206:	0f 28 cd             	movaps xmm1,xmm5
10005209:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
10005210:	8d 04 49             	lea    eax,[ecx+ecx*2]
10005213:	0f 28 c5             	movaps xmm0,xmm5
10005216:	8d 04 85 64 0c 22 10 	lea    eax,[eax*4+0x10220c64]
1000521d:	0f 1f 00             	nop    DWORD PTR [eax]
10005220:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
10005224:	41                   	inc    ecx
10005225:	f3 0f 5a c0          	cvtss2sd xmm0,xmm0
10005229:	f3 0f 11 48 fc       	movss  DWORD PTR [eax-0x4],xmm1
1000522e:	f2 0f 58 c4          	addsd  xmm0,xmm4
10005232:	f3 0f 11 58 04       	movss  DWORD PTR [eax+0x4],xmm3
10005237:	83 c0 0c             	add    eax,0xc
1000523a:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
1000523e:	0f 2f d0             	comiss xmm2,xmm0
10005241:	73 dd                	jae    0x10005220
10005243:	f3 0f 58 ca          	addss  xmm1,xmm2
10005247:	0f 2f d1             	comiss xmm2,xmm1
1000524a:	73 c4                	jae    0x10005210
1000524c:	42                   	inc    edx
1000524d:	83 fa 03             	cmp    edx,0x3
10005250:	7c ae                	jl     0x10005200
10005252:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10005255:	33 cd                	xor    ecx,ebp
10005257:	e8 57 89 13 00       	call   0x1013dbb3
1000525c:	8b e5                	mov    esp,ebp
1000525e:	5d                   	pop    ebp
1000525f:	c3                   	ret
