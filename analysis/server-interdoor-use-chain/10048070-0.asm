
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10048070 <.text+0x47070>:
10048070:	55                   	push   ebp
10048071:	8b ec                	mov    ebp,esp
10048073:	83 ec 40             	sub    esp,0x40
10048076:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1004807b:	33 c5                	xor    eax,ebp
1004807d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10048080:	57                   	push   edi
10048081:	8b f9                	mov    edi,ecx
10048083:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10048086:	8b 88 9c 01 00 00    	mov    ecx,DWORD PTR [eax+0x19c]
1004808c:	85 c9                	test   ecx,ecx
1004808e:	0f 84 93 04 00 00    	je     0x10048527
10048094:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
10048097:	85 c0                	test   eax,eax
10048099:	0f 84 75 04 00 00    	je     0x10048514
1004809f:	56                   	push   esi
100480a0:	ff 70 04             	push   DWORD PTR [eax+0x4]
100480a3:	e8 38 a5 fc ff       	call   0x100125e0
100480a8:	8b f0                	mov    esi,eax
100480aa:	83 c4 04             	add    esp,0x4
100480ad:	85 f6                	test   esi,esi
100480af:	75 20                	jne    0x100480d1
100480b1:	68 cc 0c 1b 10       	push   0x101b0ccc
100480b6:	6a 01                	push   0x1
100480b8:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100480be:	83 c4 08             	add    esp,0x8
100480c1:	5e                   	pop    esi
100480c2:	5f                   	pop    edi
100480c3:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100480c6:	33 cd                	xor    ecx,ebp
100480c8:	e8 e6 5a 0f 00       	call   0x1013dbb3
100480cd:	8b e5                	mov    esp,ebp
100480cf:	5d                   	pop    ebp
100480d0:	c3                   	ret
100480d1:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100480d4:	53                   	push   ebx
100480d5:	8b 88 cc 01 00 00    	mov    ecx,DWORD PTR [eax+0x1cc]
100480db:	89 4d d8             	mov    DWORD PTR [ebp-0x28],ecx
100480de:	85 c9                	test   ecx,ecx
100480e0:	0f 84 c3 00 00 00    	je     0x100481a9
100480e6:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100480eb:	68 d8 0c 1b 10       	push   0x101b0cd8
100480f0:	8b 98 98 00 00 00    	mov    ebx,DWORD PTR [eax+0x98]
100480f6:	03 d9                	add    ebx,ecx
100480f8:	53                   	push   ebx
100480f9:	e8 a2 2a fc ff       	call   0x1000aba0
100480fe:	83 c4 08             	add    esp,0x8
10048101:	85 c0                	test   eax,eax
10048103:	74 47                	je     0x1004814c
10048105:	6a 00                	push   0x0
10048107:	6a 02                	push   0x2
10048109:	68 e4 0c 1b 10       	push   0x101b0ce4
1004810e:	56                   	push   esi
1004810f:	e8 fc 16 0d 00       	call   0x10119810
10048114:	8b 07                	mov    eax,DWORD PTR [edi]
10048116:	83 c4 0c             	add    esp,0xc
10048119:	8b cf                	mov    ecx,edi
1004811b:	c7 04 24 00 00 00 40 	mov    DWORD PTR [esp],0x40000000
10048122:	ff 50 08             	call   DWORD PTR [eax+0x8]
10048125:	51                   	push   ecx
10048126:	8b ce                	mov    ecx,esi
10048128:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1004812f:	c7 47 78 40 80 04 10 	mov    DWORD PTR [edi+0x78],0x10048040
10048136:	e8 c5 24 0a 00       	call   0x100ea600
1004813b:	5b                   	pop    ebx
1004813c:	5e                   	pop    esi
1004813d:	5f                   	pop    edi
1004813e:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10048141:	33 cd                	xor    ecx,ebp
10048143:	e8 6b 5a 0f 00       	call   0x1013dbb3
10048148:	8b e5                	mov    esp,ebp
1004814a:	5d                   	pop    ebp
1004814b:	c3                   	ret
1004814c:	68 04 0d 1b 10       	push   0x101b0d04
10048151:	53                   	push   ebx
10048152:	e8 49 2a fc ff       	call   0x1000aba0
10048157:	83 c4 08             	add    esp,0x8
1004815a:	85 c0                	test   eax,eax
1004815c:	74 0b                	je     0x10048169
1004815e:	6a 00                	push   0x0
10048160:	6a 02                	push   0x2
10048162:	68 10 0d 1b 10       	push   0x101b0d10
10048167:	eb a5                	jmp    0x1004810e
10048169:	68 2c 0d 1b 10       	push   0x101b0d2c
1004816e:	53                   	push   ebx
1004816f:	e8 2c 2a fc ff       	call   0x1000aba0
10048174:	83 c4 08             	add    esp,0x8
10048177:	85 c0                	test   eax,eax
10048179:	74 0b                	je     0x10048186
1004817b:	6a 00                	push   0x0
1004817d:	6a 02                	push   0x2
1004817f:	68 38 0d 1b 10       	push   0x101b0d38
10048184:	eb 88                	jmp    0x1004810e
10048186:	68 54 0d 1b 10       	push   0x101b0d54
1004818b:	53                   	push   ebx
1004818c:	e8 0f 2a fc ff       	call   0x1000aba0
10048191:	83 c4 08             	add    esp,0x8
10048194:	85 c0                	test   eax,eax
10048196:	74 0e                	je     0x100481a6
10048198:	6a 00                	push   0x0
1004819a:	6a 02                	push   0x2
1004819c:	68 60 0d 1b 10       	push   0x101b0d60
100481a1:	e9 68 ff ff ff       	jmp    0x1004810e
100481a6:	8b 4d d8             	mov    ecx,DWORD PTR [ebp-0x28]
100481a9:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100481ae:	ba 7c 0d 1b 10       	mov    edx,0x101b0d7c
100481b3:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100481b9:	03 c8                	add    ecx,eax
100481bb:	8b c1                	mov    eax,ecx
100481bd:	0f 1f 00             	nop    DWORD PTR [eax]
100481c0:	8a 18                	mov    bl,BYTE PTR [eax]
100481c2:	3a 1a                	cmp    bl,BYTE PTR [edx]
100481c4:	75 1a                	jne    0x100481e0
100481c6:	84 db                	test   bl,bl
100481c8:	74 12                	je     0x100481dc
100481ca:	8a 58 01             	mov    bl,BYTE PTR [eax+0x1]
100481cd:	3a 5a 01             	cmp    bl,BYTE PTR [edx+0x1]
100481d0:	75 0e                	jne    0x100481e0
100481d2:	83 c0 02             	add    eax,0x2
100481d5:	83 c2 02             	add    edx,0x2
100481d8:	84 db                	test   bl,bl
100481da:	75 e4                	jne    0x100481c0
100481dc:	33 c0                	xor    eax,eax
100481de:	eb 05                	jmp    0x100481e5
100481e0:	1b c0                	sbb    eax,eax
100481e2:	83 c8 01             	or     eax,0x1
100481e5:	85 c0                	test   eax,eax
100481e7:	0f 85 ca 00 00 00    	jne    0x100482b7
100481ed:	8d 55 dc             	lea    edx,[ebp-0x24]
100481f0:	2b d1                	sub    edx,ecx
100481f2:	8a 01                	mov    al,BYTE PTR [ecx]
100481f4:	8d 49 01             	lea    ecx,[ecx+0x1]
100481f7:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100481fb:	84 c0                	test   al,al
100481fd:	75 f3                	jne    0x100481f2
100481ff:	8a 86 cd 04 00 00    	mov    al,BYTE PTR [esi+0x4cd]
10048205:	84 c0                	test   al,al
10048207:	75 3c                	jne    0x10048245
10048209:	8a 86 ce 04 00 00    	mov    al,BYTE PTR [esi+0x4ce]
1004820f:	84 c0                	test   al,al
10048211:	75 17                	jne    0x1004822a
10048213:	a1 90 0d 1b 10       	mov    eax,ds:0x101b0d90
10048218:	f3 0f 7e 05 88 0d 1b 	movq   xmm0,QWORD PTR ds:0x101b0d88
1004821f:	10 
10048220:	89 45 e4             	mov    DWORD PTR [ebp-0x1c],eax
10048223:	a0 94 0d 1b 10       	mov    al,ds:0x101b0d94
10048228:	eb 59                	jmp    0x10048283
1004822a:	3c 01                	cmp    al,0x1
1004822c:	75 5d                	jne    0x1004828b
1004822e:	a1 a0 0d 1b 10       	mov    eax,ds:0x101b0da0
10048233:	f3 0f 7e 05 98 0d 1b 	movq   xmm0,QWORD PTR ds:0x101b0d98
1004823a:	10 
1004823b:	89 45 e4             	mov    DWORD PTR [ebp-0x1c],eax
1004823e:	a0 a4 0d 1b 10       	mov    al,ds:0x101b0da4
10048243:	eb 3e                	jmp    0x10048283
10048245:	3c 01                	cmp    al,0x1
10048247:	75 42                	jne    0x1004828b
10048249:	8a 86 ce 04 00 00    	mov    al,BYTE PTR [esi+0x4ce]
1004824f:	84 c0                	test   al,al
10048251:	75 17                	jne    0x1004826a
10048253:	a1 b0 0d 1b 10       	mov    eax,ds:0x101b0db0
10048258:	f3 0f 7e 05 a8 0d 1b 	movq   xmm0,QWORD PTR ds:0x101b0da8
1004825f:	10 
10048260:	89 45 e4             	mov    DWORD PTR [ebp-0x1c],eax
10048263:	a0 b4 0d 1b 10       	mov    al,ds:0x101b0db4
10048268:	eb 19                	jmp    0x10048283
1004826a:	3c 01                	cmp    al,0x1
1004826c:	75 1d                	jne    0x1004828b
1004826e:	a1 c0 0d 1b 10       	mov    eax,ds:0x101b0dc0
10048273:	f3 0f 7e 05 b8 0d 1b 	movq   xmm0,QWORD PTR ds:0x101b0db8
1004827a:	10 
1004827b:	89 45 e4             	mov    DWORD PTR [ebp-0x1c],eax
1004827e:	a0 c4 0d 1b 10       	mov    al,ds:0x101b0dc4
10048283:	88 45 e8             	mov    BYTE PTR [ebp-0x18],al
10048286:	66 0f d6 45 dc       	movq   QWORD PTR [ebp-0x24],xmm0
1004828b:	80 be cf 04 00 00 01 	cmp    BYTE PTR [esi+0x4cf],0x1
10048292:	75 1d                	jne    0x100482b1
10048294:	a1 d0 0d 1b 10       	mov    eax,ds:0x101b0dd0
10048299:	f3 0f 7e 05 c8 0d 1b 	movq   xmm0,QWORD PTR ds:0x101b0dc8
100482a0:	10 
100482a1:	89 45 e4             	mov    DWORD PTR [ebp-0x1c],eax
100482a4:	a0 d4 0d 1b 10       	mov    al,ds:0x101b0dd4
100482a9:	66 0f d6 45 dc       	movq   QWORD PTR [ebp-0x24],xmm0
100482ae:	88 45 e8             	mov    BYTE PTR [ebp-0x18],al
100482b1:	8d 45 dc             	lea    eax,[ebp-0x24]
100482b4:	50                   	push   eax
100482b5:	eb 01                	jmp    0x100482b8
100482b7:	51                   	push   ecx
100482b8:	6a 00                	push   0x0
100482ba:	e8 d1 02 0d 00       	call   0x10118590
100482bf:	8b d8                	mov    ebx,eax
100482c1:	83 c4 08             	add    esp,0x8
100482c4:	85 db                	test   ebx,ebx
100482c6:	75 21                	jne    0x100482e9
100482c8:	68 d8 0d 1b 10       	push   0x101b0dd8
100482cd:	6a 01                	push   0x1
100482cf:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100482d5:	83 c4 08             	add    esp,0x8
100482d8:	5b                   	pop    ebx
100482d9:	5e                   	pop    esi
100482da:	5f                   	pop    edi
100482db:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100482de:	33 cd                	xor    ecx,ebp
100482e0:	e8 ce 58 0f 00       	call   0x1013dbb3
100482e5:	8b e5                	mov    esp,ebp
100482e7:	5d                   	pop    ebp
100482e8:	c3                   	ret
100482e9:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100482ec:	8b ce                	mov    ecx,esi
100482ee:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
100482f3:	f3 0f 11 45 cc       	movss  DWORD PTR [ebp-0x34],xmm0
100482f8:	f3 0f 10 40 0c       	movss  xmm0,DWORD PTR [eax+0xc]
100482fd:	f3 0f 11 45 d0       	movss  DWORD PTR [ebp-0x30],xmm0
10048302:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
10048307:	f3 0f 11 45 d4       	movss  DWORD PTR [ebp-0x2c],xmm0
1004830c:	8b 06                	mov    eax,DWORD PTR [esi]
1004830e:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
10048314:	f3 0f 10 45 d4       	movss  xmm0,DWORD PTR [ebp-0x2c]
10048319:	85 c0                	test   eax,eax
1004831b:	74 0b                	je     0x10048328
1004831d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10048320:	f3 0f 5c 80 e4 00 00 	subss  xmm0,DWORD PTR [eax+0xe4]
10048327:	00 
10048328:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
1004832f:	10 
10048330:	8d 45 cc             	lea    eax,[ebp-0x34]
10048333:	50                   	push   eax
10048334:	56                   	push   esi
10048335:	f3 0f 11 45 d4       	movss  DWORD PTR [ebp-0x2c],xmm0
1004833a:	e8 a1 1c 0d 00       	call   0x10119fe0
1004833f:	f3 0f 7e 45 cc       	movq   xmm0,QWORD PTR [ebp-0x34]
10048344:	83 c4 08             	add    esp,0x8
10048347:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1004834a:	66 0f d6 86 18 06 00 	movq   QWORD PTR [esi+0x618],xmm0
10048351:	00 
10048352:	8b 45 d4             	mov    eax,DWORD PTR [ebp-0x2c]
10048355:	89 86 20 06 00 00    	mov    DWORD PTR [esi+0x620],eax
1004835b:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1004835e:	f3 0f 7e 40 50       	movq   xmm0,QWORD PTR [eax+0x50]
10048363:	66 0f d6 41 50       	movq   QWORD PTR [ecx+0x50],xmm0
10048368:	8b 40 58             	mov    eax,DWORD PTR [eax+0x58]
1004836b:	89 41 58             	mov    DWORD PTR [ecx+0x58],eax
1004836e:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10048371:	f3 0f 7e 05 34 2f 22 	movq   xmm0,QWORD PTR ds:0x10222f34
10048378:	10 
10048379:	66 0f d6 41 2c       	movq   QWORD PTR [ecx+0x2c],xmm0
1004837e:	a1 3c 2f 22 10       	mov    eax,ds:0x10222f3c
10048383:	89 41 34             	mov    DWORD PTR [ecx+0x34],eax
10048386:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10048389:	f3 0f 7e 41 2c       	movq   xmm0,QWORD PTR [ecx+0x2c]
1004838e:	66 0f d6 41 20       	movq   QWORD PTR [ecx+0x20],xmm0
10048393:	8b 41 34             	mov    eax,DWORD PTR [ecx+0x34]
10048396:	89 41 28             	mov    DWORD PTR [ecx+0x28],eax
10048399:	8b ce                	mov    ecx,esi
1004839b:	8b 06                	mov    eax,DWORD PTR [esi]
1004839d:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
100483a3:	85 c0                	test   eax,eax
100483a5:	74 23                	je     0x100483ca
100483a7:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100483aa:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100483ad:	f3 0f 7e 40 50       	movq   xmm0,QWORD PTR [eax+0x50]
100483b2:	66 0f d6 41 74       	movq   QWORD PTR [ecx+0x74],xmm0
100483b7:	8b 40 58             	mov    eax,DWORD PTR [eax+0x58]
100483ba:	89 41 7c             	mov    DWORD PTR [ecx+0x7c],eax
100483bd:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100483c0:	c7 80 a0 00 00 00 01 	mov    DWORD PTR [eax+0xa0],0x1
100483c7:	00 00 00 
100483ca:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100483cd:	81 a0 a8 01 00 00 ff 	and    DWORD PTR [eax+0x1a8],0xfffffdff
100483d4:	fd ff ff 
100483d7:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100483da:	c7 80 a0 00 00 00 01 	mov    DWORD PTR [eax+0xa0],0x1
100483e1:	00 00 00 
100483e4:	c6 86 a4 1e 00 00 00 	mov    BYTE PTR [esi+0x1ea4],0x0
100483eb:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100483ee:	8b 88 f0 01 00 00    	mov    ecx,DWORD PTR [eax+0x1f0]
100483f4:	85 c9                	test   ecx,ecx
100483f6:	74 37                	je     0x1004842f
100483f8:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100483fd:	6a 64                	push   0x64
100483ff:	6a 00                	push   0x0
10048401:	83 ec 08             	sub    esp,0x8
10048404:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1004840a:	03 c1                	add    eax,ecx
1004840c:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
10048413:	3f 
10048414:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1004841b:	50                   	push   eax
1004841c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004841f:	6a 00                	push   0x0
10048421:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10048427:	e8 c4 45 0b 00       	call   0x100fc9f0
1004842c:	83 c4 1c             	add    esp,0x1c
1004842f:	6a 00                	push   0x0
10048431:	68 ff 00 00 00       	push   0xff
10048436:	83 ec 08             	sub    esp,0x8
10048439:	c7 45 c0 00 00 00 00 	mov    DWORD PTR [ebp-0x40],0x0
10048440:	8d 45 c0             	lea    eax,[ebp-0x40]
10048443:	c7 45 c4 00 00 00 00 	mov    DWORD PTR [ebp-0x3c],0x0
1004844a:	c7 45 c8 00 00 00 00 	mov    DWORD PTR [ebp-0x38],0x0
10048451:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x0
10048458:	00 
10048459:	c7 04 24 00 00 00 3f 	mov    DWORD PTR [esp],0x3f000000
10048460:	50                   	push   eax
10048461:	56                   	push   esi
10048462:	e8 99 17 0d 00       	call   0x10119c00
10048467:	83 c4 18             	add    esp,0x18
1004846a:	8b ce                	mov    ecx,esi
1004846c:	6a 01                	push   0x1
1004846e:	e8 7d 6b 09 00       	call   0x100deff0
10048473:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10048476:	83 a6 00 25 00 00 f6 	and    DWORD PTR [esi+0x2500],0xfffffff6
1004847d:	81 a0 a8 01 00 00 7f 	and    DWORD PTR [eax+0x1a8],0xffffff7f
10048484:	ff ff ff 
10048487:	8b 8f 9c 01 00 00    	mov    ecx,DWORD PTR [edi+0x19c]
1004848d:	85 c9                	test   ecx,ecx
1004848f:	74 22                	je     0x100484b3
10048491:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10048496:	51                   	push   ecx
10048497:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1004849e:	6a 03                	push   0x3
100484a0:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100484a6:	57                   	push   edi
100484a7:	03 c1                	add    eax,ecx
100484a9:	57                   	push   edi
100484aa:	50                   	push   eax
100484ab:	e8 40 9b 0b 00       	call   0x10101ff0
100484b0:	83 c4 14             	add    esp,0x14
100484b3:	8b 8f 8c 01 00 00    	mov    ecx,DWORD PTR [edi+0x18c]
100484b9:	85 c9                	test   ecx,ecx
100484bb:	74 2f                	je     0x100484ec
100484bd:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100484c0:	f3 0f 10 87 ac 01 00 	movss  xmm0,DWORD PTR [edi+0x1ac]
100484c7:	00 
100484c8:	51                   	push   ecx
100484c9:	f3 0f 11 45 d8       	movss  DWORD PTR [ebp-0x28],xmm0
100484ce:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100484d5:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100484dc:	74 04                	je     0x100484e2
100484de:	6a 01                	push   0x1
100484e0:	eb 02                	jmp    0x100484e4
100484e2:	6a 00                	push   0x0
100484e4:	51                   	push   ecx
100484e5:	8b ce                	mov    ecx,esi
100484e7:	e8 d4 20 0a 00       	call   0x100ea5c0
100484ec:	c7 86 94 22 00 00 e8 	mov    DWORD PTR [esi+0x2294],0x3e8
100484f3:	03 00 00 
100484f6:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100484f9:	5b                   	pop    ebx
100484fa:	5e                   	pop    esi
100484fb:	5f                   	pop    edi
100484fc:	c7 80 9c 01 00 00 00 	mov    DWORD PTR [eax+0x19c],0x0
10048503:	00 00 00 
10048506:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10048509:	33 cd                	xor    ecx,ebp
1004850b:	e8 a3 56 0f 00       	call   0x1013dbb3
10048510:	8b e5                	mov    esp,ebp
10048512:	5d                   	pop    ebp
10048513:	c3                   	ret
10048514:	68 e4 0d 1b 10       	push   0x101b0de4
10048519:	6a 01                	push   0x1
1004851b:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10048521:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10048524:	83 c4 08             	add    esp,0x8
10048527:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1004852a:	33 cd                	xor    ecx,ebp
1004852c:	c7 80 9c 01 00 00 00 	mov    DWORD PTR [eax+0x19c],0x0
10048533:	00 00 00 
10048536:	5f                   	pop    edi
10048537:	e8 77 56 0f 00       	call   0x1013dbb3
1004853c:	8b e5                	mov    esp,ebp
1004853e:	5d                   	pop    ebp
1004853f:	c3                   	ret
