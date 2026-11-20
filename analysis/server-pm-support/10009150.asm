
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10009150 <.text+0x8150>:
10009150:	55                   	push   ebp
10009151:	8b ec                	mov    ebp,esp
10009153:	83 ec 24             	sub    esp,0x24
10009156:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1000915b:	33 c5                	xor    eax,ebp
1000915d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10009160:	56                   	push   esi
10009161:	8b 35 50 0c 22 10    	mov    esi,DWORD PTR ds:0x10220c50
10009167:	83 be fc 01 00 00 03 	cmp    DWORD PTR [esi+0x1fc],0x3
1000916e:	0f 85 7f 02 00 00    	jne    0x100093f3
10009174:	8d 46 5c             	lea    eax,[esi+0x5c]
10009177:	50                   	push   eax
10009178:	e8 53 9e ff ff       	call   0x10002fd0
1000917d:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
10009184:	10 
10009185:	83 c4 04             	add    esp,0x4
10009188:	d9 5d e0             	fstp   DWORD PTR [ebp-0x20]
1000918b:	f3 0f 10 55 e0       	movss  xmm2,DWORD PTR [ebp-0x20]
10009190:	0f 2f c2             	comiss xmm0,xmm2
10009193:	76 38                	jbe    0x100091cd
10009195:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000919a:	f3 0f 10 05 40 0c 22 	movss  xmm0,DWORD PTR ds:0x10220c40
100091a1:	10 
100091a2:	f3 0f 11 40 5c       	movss  DWORD PTR [eax+0x5c],xmm0
100091a7:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100091ac:	f3 0f 10 05 44 0c 22 	movss  xmm0,DWORD PTR ds:0x10220c44
100091b3:	10 
100091b4:	f3 0f 11 40 60       	movss  DWORD PTR [eax+0x60],xmm0
100091b9:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100091be:	f3 0f 10 05 48 0c 22 	movss  xmm0,DWORD PTR ds:0x10220c48
100091c5:	10 
100091c6:	f3 0f 11 40 64       	movss  DWORD PTR [eax+0x64],xmm0
100091cb:	eb 62                	jmp    0x1000922f
100091cd:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
100091d3:	8b 81 f4 f4 04 00    	mov    eax,DWORD PTR [ecx+0x4f4f4]
100091d9:	f3 0f 10 40 1c       	movss  xmm0,DWORD PTR [eax+0x1c]
100091de:	f3 0f 10 48 04       	movss  xmm1,DWORD PTR [eax+0x4]
100091e3:	0f 2f ca             	comiss xmm1,xmm2
100091e6:	0f 5a c0             	cvtps2pd xmm0,xmm0
100091e9:	f2 0f 59 05 88 1e 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1e88
100091f0:	10 
100091f1:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100091f5:	77 03                	ja     0x100091fa
100091f7:	0f 28 ca             	movaps xmm1,xmm2
100091fa:	f3 0f 59 c8          	mulss  xmm1,xmm0
100091fe:	8d 41 5c             	lea    eax,[ecx+0x5c]
10009201:	50                   	push   eax
10009202:	0f 57 db             	xorps  xmm3,xmm3
10009205:	0f 28 c2             	movaps xmm0,xmm2
10009208:	51                   	push   ecx
10009209:	f3 0f 59 49 10       	mulss  xmm1,DWORD PTR [ecx+0x10]
1000920e:	f3 0f 58 cb          	addss  xmm1,xmm3
10009212:	f3 0f 5c c1          	subss  xmm0,xmm1
10009216:	0f 57 c9             	xorps  xmm1,xmm1
10009219:	f3 0f 5f c8          	maxss  xmm1,xmm0
1000921d:	f3 0f 5e ca          	divss  xmm1,xmm2
10009221:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
10009226:	50                   	push   eax
10009227:	e8 64 a2 ff ff       	call   0x10003490
1000922c:	83 c4 0c             	add    esp,0xc
1000922f:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10009234:	f3 0f 10 80 68 54 04 	movss  xmm0,DWORD PTR [eax+0x45468]
1000923b:	00 
1000923c:	f3 0f 11 45 dc       	movss  DWORD PTR [ebp-0x24],xmm0
10009241:	f3 0f 10 80 6c 54 04 	movss  xmm0,DWORD PTR [eax+0x4546c]
10009248:	00 
10009249:	83 c0 14             	add    eax,0x14
1000924c:	50                   	push   eax
1000924d:	f3 0f 11 45 e0       	movss  DWORD PTR [ebp-0x20],xmm0
10009252:	e8 79 a1 ff ff       	call   0x100033d0
10009257:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000925c:	dd d8                	fstp   st(0)
1000925e:	83 c0 20             	add    eax,0x20
10009261:	50                   	push   eax
10009262:	e8 69 a1 ff ff       	call   0x100033d0
10009267:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000926c:	dd d8                	fstp   st(0)
1000926e:	f3 0f 10 5d e0       	movss  xmm3,DWORD PTR [ebp-0x20]
10009273:	f3 0f 10 6d dc       	movss  xmm5,DWORD PTR [ebp-0x24]
10009278:	f3 0f 10 60 20       	movss  xmm4,DWORD PTR [eax+0x20]
1000927d:	f3 0f 10 40 14       	movss  xmm0,DWORD PTR [eax+0x14]
10009282:	f3 0f 59 c5          	mulss  xmm0,xmm5
10009286:	f3 0f 59 e3          	mulss  xmm4,xmm3
1000928a:	f3 0f 58 e0          	addss  xmm4,xmm0
1000928e:	f3 0f 11 65 f0       	movss  DWORD PTR [ebp-0x10],xmm4
10009293:	f3 0f 10 40 18       	movss  xmm0,DWORD PTR [eax+0x18]
10009298:	f3 0f 10 50 24       	movss  xmm2,DWORD PTR [eax+0x24]
1000929d:	f3 0f 59 c5          	mulss  xmm0,xmm5
100092a1:	f3 0f 59 d3          	mulss  xmm2,xmm3
100092a5:	f3 0f 58 d0          	addss  xmm2,xmm0
100092a9:	f3 0f 11 55 f4       	movss  DWORD PTR [ebp-0xc],xmm2
100092ae:	f3 0f 10 40 1c       	movss  xmm0,DWORD PTR [eax+0x1c]
100092b3:	f3 0f 10 48 28       	movss  xmm1,DWORD PTR [eax+0x28]
100092b8:	f3 0f 59 c5          	mulss  xmm0,xmm5
100092bc:	f3 0f 59 cb          	mulss  xmm1,xmm3
100092c0:	0f 14 e2             	unpcklps xmm4,xmm2
100092c3:	f3 0f 58 c8          	addss  xmm1,xmm0
100092c7:	f3 0f 11 4d f8       	movss  DWORD PTR [ebp-0x8],xmm1
100092cc:	f3 0f 10 80 70 54 04 	movss  xmm0,DWORD PTR [eax+0x45470]
100092d3:	00 
100092d4:	f3 0f 58 c1          	addss  xmm0,xmm1
100092d8:	66 0f d6 65 f0       	movq   QWORD PTR [ebp-0x10],xmm4
100092dd:	66 0f d6 65 e4       	movq   QWORD PTR [ebp-0x1c],xmm4
100092e2:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
100092e7:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
100092ea:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
100092ed:	8d 45 e4             	lea    eax,[ebp-0x1c]
100092f0:	50                   	push   eax
100092f1:	e8 da a0 ff ff       	call   0x100033d0
100092f6:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
100092fc:	83 c4 0c             	add    esp,0xc
100092ff:	d9 5d dc             	fstp   DWORD PTR [ebp-0x24]
10009302:	f3 0f 10 65 dc       	movss  xmm4,DWORD PTR [ebp-0x24]
10009307:	8b 81 f4 f4 04 00    	mov    eax,DWORD PTR [ecx+0x4f4f4]
1000930d:	f3 0f 10 40 0c       	movss  xmm0,DWORD PTR [eax+0xc]
10009312:	0f 2f e0             	comiss xmm4,xmm0
10009315:	76 28                	jbe    0x1000933f
10009317:	f3 0f 5e c4          	divss  xmm0,xmm4
1000931b:	8d 45 f0             	lea    eax,[ebp-0x10]
1000931e:	50                   	push   eax
1000931f:	51                   	push   ecx
10009320:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10009325:	50                   	push   eax
10009326:	e8 65 a1 ff ff       	call   0x10003490
1000932b:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10009331:	83 c4 0c             	add    esp,0xc
10009334:	8b 81 f4 f4 04 00    	mov    eax,DWORD PTR [ecx+0x4f4f4]
1000933a:	f3 0f 10 60 0c       	movss  xmm4,DWORD PTR [eax+0xc]
1000933f:	f3 0f 10 69 5c       	movss  xmm5,DWORD PTR [ecx+0x5c]
10009344:	8d 51 5c             	lea    edx,[ecx+0x5c]
10009347:	f3 0f 10 49 60       	movss  xmm1,DWORD PTR [ecx+0x60]
1000934c:	0f 28 c5             	movaps xmm0,xmm5
1000934f:	f3 0f 10 5d e4       	movss  xmm3,DWORD PTR [ebp-0x1c]
10009354:	0f 28 d4             	movaps xmm2,xmm4
10009357:	f3 0f 59 4d e8       	mulss  xmm1,DWORD PTR [ebp-0x18]
1000935c:	f3 0f 59 c3          	mulss  xmm0,xmm3
10009360:	f3 0f 58 c8          	addss  xmm1,xmm0
10009364:	f3 0f 10 41 64       	movss  xmm0,DWORD PTR [ecx+0x64]
10009369:	f3 0f 59 45 ec       	mulss  xmm0,DWORD PTR [ebp-0x14]
1000936e:	f3 0f 58 c8          	addss  xmm1,xmm0
10009372:	0f 57 c0             	xorps  xmm0,xmm0
10009375:	f3 0f 5c d1          	subss  xmm2,xmm1
10009379:	0f 2f c2             	comiss xmm0,xmm2
1000937c:	0f 83 3b 01 00 00    	jae    0x100094bd
10009382:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
10009387:	f3 0f 59 41 10       	mulss  xmm0,DWORD PTR [ecx+0x10]
1000938c:	f3 0f 59 c4          	mulss  xmm0,xmm4
10009390:	f3 0f 5d d0          	minss  xmm2,xmm0
10009394:	f3 0f 59 da          	mulss  xmm3,xmm2
10009398:	f3 0f 58 dd          	addss  xmm3,xmm5
1000939c:	f3 0f 11 1a          	movss  DWORD PTR [edx],xmm3
100093a0:	f3 0f 10 45 e8       	movss  xmm0,DWORD PTR [ebp-0x18]
100093a5:	f3 0f 59 c2          	mulss  xmm0,xmm2
100093a9:	f3 0f 58 41 60       	addss  xmm0,DWORD PTR [ecx+0x60]
100093ae:	f3 0f 11 41 60       	movss  DWORD PTR [ecx+0x60],xmm0
100093b3:	f3 0f 10 45 ec       	movss  xmm0,DWORD PTR [ebp-0x14]
100093b8:	f3 0f 59 c2          	mulss  xmm0,xmm2
100093bc:	f3 0f 58 41 64       	addss  xmm0,DWORD PTR [ecx+0x64]
100093c1:	f3 0f 11 41 64       	movss  DWORD PTR [ecx+0x64],xmm0
100093c6:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100093cb:	f3 0f 10 41 10       	movss  xmm0,DWORD PTR [ecx+0x10]
100093d0:	83 c0 38             	add    eax,0x38
100093d3:	50                   	push   eax
100093d4:	52                   	push   edx
100093d5:	51                   	push   ecx
100093d6:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100093db:	50                   	push   eax
100093dc:	e8 ef 9e ff ff       	call   0x100032d0
100093e1:	83 c4 10             	add    esp,0x10
100093e4:	5e                   	pop    esi
100093e5:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100093e8:	33 cd                	xor    ecx,ebp
100093ea:	e8 c4 47 13 00       	call   0x1013dbb3
100093ef:	8b e5                	mov    esp,ebp
100093f1:	5d                   	pop    ebp
100093f2:	c3                   	ret
100093f3:	57                   	push   edi
100093f4:	8b be 00 02 00 00    	mov    edi,DWORD PTR [esi+0x200]
100093fa:	85 ff                	test   edi,edi
100093fc:	0f 8e ba 00 00 00    	jle    0x100094bc
10009402:	8b 96 4c 02 00 00    	mov    edx,DWORD PTR [esi+0x24c]
10009408:	33 c0                	xor    eax,eax
1000940a:	85 d2                	test   edx,edx
1000940c:	7e 15                	jle    0x10009423
1000940e:	8d 8e a0 02 00 00    	lea    ecx,[esi+0x2a0]
10009414:	39 39                	cmp    DWORD PTR [ecx],edi
10009416:	74 13                	je     0x1000942b
10009418:	40                   	inc    eax
10009419:	81 c1 e0 00 00 00    	add    ecx,0xe0
1000941f:	3b c2                	cmp    eax,edx
10009421:	7c f1                	jl     0x10009414
10009423:	3b c2                	cmp    eax,edx
10009425:	0f 84 91 00 00 00    	je     0x100094bc
1000942b:	69 d0 e0 00 00 00    	imul   edx,eax,0xe0
10009431:	8b 84 32 a4 02 00 00 	mov    eax,DWORD PTR [edx+esi*1+0x2a4]
10009438:	89 46 44             	mov    DWORD PTR [esi+0x44],eax
1000943b:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10009440:	8b 8c 32 a8 02 00 00 	mov    ecx,DWORD PTR [edx+esi*1+0x2a8]
10009447:	89 48 48             	mov    DWORD PTR [eax+0x48],ecx
1000944a:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000944f:	8b 8c 32 ac 02 00 00 	mov    ecx,DWORD PTR [edx+esi*1+0x2ac]
10009456:	89 48 4c             	mov    DWORD PTR [eax+0x4c],ecx
10009459:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000945e:	8b 8c 32 74 02 00 00 	mov    ecx,DWORD PTR [edx+esi*1+0x274]
10009465:	89 48 38             	mov    DWORD PTR [eax+0x38],ecx
10009468:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000946d:	8b 8c 32 78 02 00 00 	mov    ecx,DWORD PTR [edx+esi*1+0x278]
10009474:	89 48 3c             	mov    DWORD PTR [eax+0x3c],ecx
10009477:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000947c:	8b 8c 32 7c 02 00 00 	mov    ecx,DWORD PTR [edx+esi*1+0x27c]
10009483:	89 48 40             	mov    DWORD PTR [eax+0x40],ecx
10009486:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000948b:	f3 0f 10 05 40 0c 22 	movss  xmm0,DWORD PTR ds:0x10220c40
10009492:	10 
10009493:	f3 0f 11 40 5c       	movss  DWORD PTR [eax+0x5c],xmm0
10009498:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000949d:	f3 0f 10 05 44 0c 22 	movss  xmm0,DWORD PTR ds:0x10220c44
100094a4:	10 
100094a5:	f3 0f 11 40 60       	movss  DWORD PTR [eax+0x60],xmm0
100094aa:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100094af:	f3 0f 10 05 48 0c 22 	movss  xmm0,DWORD PTR ds:0x10220c48
100094b6:	10 
100094b7:	f3 0f 11 40 64       	movss  DWORD PTR [eax+0x64],xmm0
100094bc:	5f                   	pop    edi
100094bd:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100094c0:	33 cd                	xor    ecx,ebp
100094c2:	5e                   	pop    esi
100094c3:	e8 eb 46 13 00       	call   0x1013dbb3
100094c8:	8b e5                	mov    esp,ebp
100094ca:	5d                   	pop    ebp
100094cb:	c3                   	ret
