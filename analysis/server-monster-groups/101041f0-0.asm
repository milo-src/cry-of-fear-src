
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101041f0 <.text+0x1031f0>:
101041f0:	55                   	push   ebp
101041f1:	8b ec                	mov    ebp,esp
101041f3:	83 ec 0c             	sub    esp,0xc
101041f6:	57                   	push   edi
101041f7:	8b f9                	mov    edi,ecx
101041f9:	8b 07                	mov    eax,DWORD PTR [edi]
101041fb:	ff 90 44 02 00 00    	call   DWORD PTR [eax+0x244]
10104201:	85 c0                	test   eax,eax
10104203:	75 05                	jne    0x1010420a
10104205:	5f                   	pop    edi
10104206:	8b e5                	mov    esp,ebp
10104208:	5d                   	pop    ebp
10104209:	c3                   	ret
1010420a:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1010420d:	83 ec 08             	sub    esp,0x8
10104210:	f7 80 a4 01 00 00 00 	test   DWORD PTR [eax+0x1a4],0x100
10104217:	01 00 00 
1010421a:	74 20                	je     0x1010423c
1010421c:	8b 87 a0 03 00 00    	mov    eax,DWORD PTR [edi+0x3a0]
10104222:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
10104225:	8b 87 a4 03 00 00    	mov    eax,DWORD PTR [edi+0x3a4]
1010422b:	c7 44 24 04 66 66 a6 	mov    DWORD PTR [esp+0x4],0x40a66666
10104232:	40 
10104233:	c7 04 24 9a 99 99 40 	mov    DWORD PTR [esp],0x4099999a
1010423a:	eb 1e                	jmp    0x1010425a
1010423c:	8b 87 7c 03 00 00    	mov    eax,DWORD PTR [edi+0x37c]
10104242:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
10104245:	8b 87 78 03 00 00    	mov    eax,DWORD PTR [edi+0x378]
1010424b:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x404ccccd
10104252:	40 
10104253:	c7 04 24 33 33 33 40 	mov    DWORD PTR [esp],0x40333333
1010425a:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
1010425d:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
10104263:	83 c4 08             	add    esp,0x8
10104266:	8b cf                	mov    ecx,edi
10104268:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
1010426b:	53                   	push   ebx
1010426c:	56                   	push   esi
1010426d:	e8 ce 0a 00 00       	call   0x10104d40
10104272:	8d 9f 8c 01 00 00    	lea    ebx,[edi+0x18c]
10104278:	8b cb                	mov    ecx,ebx
1010427a:	e8 11 35 f1 ff       	call   0x10017790
1010427f:	8b f0                	mov    esi,eax
10104281:	85 f6                	test   esi,esi
10104283:	0f 84 97 01 00 00    	je     0x10104420
10104289:	8b 16                	mov    edx,DWORD PTR [esi]
1010428b:	8b ce                	mov    ecx,esi
1010428d:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
10104293:	85 c0                	test   eax,eax
10104295:	0f 84 85 01 00 00    	je     0x10104420
1010429b:	8b 06                	mov    eax,DWORD PTR [esi]
1010429d:	8b ce                	mov    ecx,esi
1010429f:	ff 90 bc 00 00 00    	call   DWORD PTR [eax+0xbc]
101042a5:	85 c0                	test   eax,eax
101042a7:	0f 84 73 01 00 00    	je     0x10104420
101042ad:	f6 87 68 03 00 00 04 	test   BYTE PTR [edi+0x368],0x4
101042b4:	8b 03                	mov    eax,DWORD PTR [ebx]
101042b6:	89 87 e0 03 00 00    	mov    DWORD PTR [edi+0x3e0],eax
101042bc:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
101042bf:	89 87 e4 03 00 00    	mov    DWORD PTR [edi+0x3e4],eax
101042c5:	75 6d                	jne    0x10104334
101042c7:	8b cb                	mov    ecx,ebx
101042c9:	e8 d2 34 f1 ff       	call   0x100177a0
101042ce:	8b cb                	mov    ecx,ebx
101042d0:	8b 70 04             	mov    esi,DWORD PTR [eax+0x4]
101042d3:	e8 c8 34 f1 ff       	call   0x100177a0
101042d8:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
101042db:	f3 0f 10 80 b4 01 00 	movss  xmm0,DWORD PTR [eax+0x1b4]
101042e2:	00 
101042e3:	f3 0f 59 05 d0 1d 1a 	mulss  xmm0,DWORD PTR ds:0x101a1dd0
101042ea:	10 
101042eb:	0f 2f 86 64 01 00 00 	comiss xmm0,DWORD PTR [esi+0x164]
101042f2:	72 40                	jb     0x10104334
101042f4:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
101042f9:	83 ec 0c             	sub    esp,0xc
101042fc:	8b 07                	mov    eax,DWORD PTR [edi]
101042fe:	8b cf                	mov    ecx,edi
10104300:	c7 44 24 08 00 00 00 	mov    DWORD PTR [esp+0x8],0x40000000
10104307:	40 
10104308:	c7 44 24 04 00 00 80 	mov    DWORD PTR [esp+0x4],0x3f800000
1010430f:	3f 
10104310:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10104315:	ff b7 b0 03 00 00    	push   DWORD PTR [edi+0x3b0]
1010431b:	ff 90 a0 01 00 00    	call   DWORD PTR [eax+0x1a0]
10104321:	83 8f 68 03 00 00 04 	or     DWORD PTR [edi+0x368],0x4
10104328:	b8 01 00 00 00       	mov    eax,0x1
1010432d:	5e                   	pop    esi
1010432e:	5b                   	pop    ebx
1010432f:	5f                   	pop    edi
10104330:	8b e5                	mov    esp,ebp
10104332:	5d                   	pop    ebp
10104333:	c3                   	ret
10104334:	f6 87 68 03 00 00 02 	test   BYTE PTR [edi+0x368],0x2
1010433b:	75 6d                	jne    0x101043aa
1010433d:	8b cb                	mov    ecx,ebx
1010433f:	e8 5c 34 f1 ff       	call   0x100177a0
10104344:	8b cb                	mov    ecx,ebx
10104346:	8b 70 04             	mov    esi,DWORD PTR [eax+0x4]
10104349:	e8 52 34 f1 ff       	call   0x100177a0
1010434e:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10104351:	f3 0f 10 80 b4 01 00 	movss  xmm0,DWORD PTR [eax+0x1b4]
10104358:	00 
10104359:	f3 0f 59 05 74 e0 1a 	mulss  xmm0,DWORD PTR ds:0x101ae074
10104360:	10 
10104361:	0f 2f 86 64 01 00 00 	comiss xmm0,DWORD PTR [esi+0x164]
10104368:	72 40                	jb     0x101043aa
1010436a:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
1010436f:	83 ec 0c             	sub    esp,0xc
10104372:	8b 07                	mov    eax,DWORD PTR [edi]
10104374:	8b cf                	mov    ecx,edi
10104376:	c7 44 24 08 00 00 00 	mov    DWORD PTR [esp+0x8],0x40000000
1010437d:	40 
1010437e:	c7 44 24 04 00 00 80 	mov    DWORD PTR [esp+0x4],0x3f800000
10104385:	3f 
10104386:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1010438b:	ff b7 ac 03 00 00    	push   DWORD PTR [edi+0x3ac]
10104391:	ff 90 a0 01 00 00    	call   DWORD PTR [eax+0x1a0]
10104397:	83 8f 68 03 00 00 02 	or     DWORD PTR [edi+0x368],0x2
1010439e:	b8 01 00 00 00       	mov    eax,0x1
101043a3:	5e                   	pop    esi
101043a4:	5b                   	pop    ebx
101043a5:	5f                   	pop    edi
101043a6:	8b e5                	mov    esp,ebp
101043a8:	5d                   	pop    ebp
101043a9:	c3                   	ret
101043aa:	f6 87 68 03 00 00 01 	test   BYTE PTR [edi+0x368],0x1
101043b1:	75 6d                	jne    0x10104420
101043b3:	8b cb                	mov    ecx,ebx
101043b5:	e8 e6 33 f1 ff       	call   0x100177a0
101043ba:	8b cb                	mov    ecx,ebx
101043bc:	8b 70 04             	mov    esi,DWORD PTR [eax+0x4]
101043bf:	e8 dc 33 f1 ff       	call   0x100177a0
101043c4:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
101043c7:	f3 0f 10 80 b4 01 00 	movss  xmm0,DWORD PTR [eax+0x1b4]
101043ce:	00 
101043cf:	f3 0f 59 05 d8 1d 1a 	mulss  xmm0,DWORD PTR ds:0x101a1dd8
101043d6:	10 
101043d7:	0f 2f 86 64 01 00 00 	comiss xmm0,DWORD PTR [esi+0x164]
101043de:	72 40                	jb     0x10104420
101043e0:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
101043e5:	83 ec 0c             	sub    esp,0xc
101043e8:	8b 07                	mov    eax,DWORD PTR [edi]
101043ea:	8b cf                	mov    ecx,edi
101043ec:	c7 44 24 08 00 00 00 	mov    DWORD PTR [esp+0x8],0x40000000
101043f3:	40 
101043f4:	c7 44 24 04 00 00 80 	mov    DWORD PTR [esp+0x4],0x3f800000
101043fb:	3f 
101043fc:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10104401:	ff b7 a8 03 00 00    	push   DWORD PTR [edi+0x3a8]
10104407:	ff 90 a0 01 00 00    	call   DWORD PTR [eax+0x1a0]
1010440d:	83 8f 68 03 00 00 01 	or     DWORD PTR [edi+0x368],0x1
10104414:	b8 01 00 00 00       	mov    eax,0x1
10104419:	5e                   	pop    esi
1010441a:	5b                   	pop    ebx
1010441b:	5f                   	pop    edi
1010441c:	8b e5                	mov    esp,ebp
1010441e:	5d                   	pop    ebp
1010441f:	c3                   	ret
10104420:	6a 00                	push   0x0
10104422:	8b cf                	mov    ecx,edi
10104424:	e8 47 02 00 00       	call   0x10104670
10104429:	8b f0                	mov    esi,eax
1010442b:	85 f6                	test   esi,esi
1010442d:	74 7e                	je     0x101044ad
1010442f:	8b 16                	mov    edx,DWORD PTR [esi]
10104431:	8b ce                	mov    ecx,esi
10104433:	ff 92 9c 00 00 00    	call   DWORD PTR [edx+0x9c]
10104439:	85 c0                	test   eax,eax
1010443b:	75 70                	jne    0x101044ad
1010443d:	6a 63                	push   0x63
1010443f:	50                   	push   eax
10104440:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
10104446:	83 c4 08             	add    esp,0x8
10104449:	83 f8 4b             	cmp    eax,0x4b
1010444c:	7d 5f                	jge    0x101044ad
1010444e:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
10104453:	83 ec 0c             	sub    esp,0xc
10104456:	8b 07                	mov    eax,DWORD PTR [edi]
10104458:	8b cf                	mov    ecx,edi
1010445a:	c7 44 24 08 00 00 00 	mov    DWORD PTR [esp+0x8],0x40000000
10104461:	40 
10104462:	c7 44 24 04 00 00 80 	mov    DWORD PTR [esp+0x4],0x3f800000
10104469:	3f 
1010446a:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1010446f:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
10104472:	ff 90 a0 01 00 00    	call   DWORD PTR [eax+0x1a0]
10104478:	56                   	push   esi
10104479:	8d 8f e0 03 00 00    	lea    ecx,[edi+0x3e0]
1010447f:	e8 bc 32 f1 ff       	call   0x10017740
10104484:	8b 06                	mov    eax,DWORD PTR [esi]
10104486:	8b ce                	mov    ecx,esi
10104488:	57                   	push   edi
10104489:	ff 90 4c 02 00 00    	call   DWORD PTR [eax+0x24c]
1010448f:	8b 87 dc 03 00 00    	mov    eax,DWORD PTR [edi+0x3dc]
10104495:	89 86 dc 03 00 00    	mov    DWORD PTR [esi+0x3dc],eax
1010449b:	b8 01 00 00 00       	mov    eax,0x1
101044a0:	ff 87 6c 03 00 00    	inc    DWORD PTR [edi+0x36c]
101044a6:	5e                   	pop    esi
101044a7:	5b                   	pop    ebx
101044a8:	5f                   	pop    edi
101044a9:	8b e5                	mov    esp,ebp
101044ab:	5d                   	pop    ebp
101044ac:	c3                   	ret
101044ad:	6a 01                	push   0x1
101044af:	6a 00                	push   0x0
101044b1:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
101044b7:	83 c4 08             	add    esp,0x8
101044ba:	85 c0                	test   eax,eax
101044bc:	74 55                	je     0x10104513
101044be:	6a 01                	push   0x1
101044c0:	8b cf                	mov    ecx,edi
101044c2:	e8 a9 01 00 00       	call   0x10104670
101044c7:	85 c0                	test   eax,eax
101044c9:	74 48                	je     0x10104513
101044cb:	50                   	push   eax
101044cc:	8d 8f e0 03 00 00    	lea    ecx,[edi+0x3e0]
101044d2:	e8 69 32 f1 ff       	call   0x10017740
101044d7:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
101044dc:	83 ec 0c             	sub    esp,0xc
101044df:	8b 07                	mov    eax,DWORD PTR [edi]
101044e1:	8b cf                	mov    ecx,edi
101044e3:	c7 44 24 08 00 00 00 	mov    DWORD PTR [esp+0x8],0x40000000
101044ea:	40 
101044eb:	c7 44 24 04 00 00 80 	mov    DWORD PTR [esp+0x4],0x3f800000
101044f2:	3f 
101044f3:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
101044f8:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
101044fb:	ff 90 a0 01 00 00    	call   DWORD PTR [eax+0x1a0]
10104501:	ff 87 6c 03 00 00    	inc    DWORD PTR [edi+0x36c]
10104507:	b8 01 00 00 00       	mov    eax,0x1
1010450c:	5e                   	pop    esi
1010450d:	5b                   	pop    ebx
1010450e:	5f                   	pop    edi
1010450f:	8b e5                	mov    esp,ebp
10104511:	5d                   	pop    ebp
10104512:	c3                   	ret
10104513:	51                   	push   ecx
10104514:	8b cf                	mov    ecx,edi
10104516:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1010451d:	e8 0e 1a 00 00       	call   0x10105f30
10104522:	5e                   	pop    esi
10104523:	5b                   	pop    ebx
10104524:	c7 05 78 0d 23 10 00 	mov    DWORD PTR ds:0x10230d78,0x0
1010452b:	00 00 00 
1010452e:	33 c0                	xor    eax,eax
10104530:	5f                   	pop    edi
10104531:	8b e5                	mov    esp,ebp
10104533:	5d                   	pop    ebp
10104534:	c3                   	ret
