
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10105410 <.text+0x104410>:
10105410:	55                   	push   ebp
10105411:	8b ec                	mov    ebp,esp
10105413:	83 e4 f8             	and    esp,0xfffffff8
10105416:	51                   	push   ecx
10105417:	53                   	push   ebx
10105418:	56                   	push   esi
10105419:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1010541c:	57                   	push   edi
1010541d:	8b f9                	mov    edi,ecx
1010541f:	8b 06                	mov    eax,DWORD PTR [esi]
10105421:	83 c0 a4             	add    eax,0xffffffa4
10105424:	83 f8 0f             	cmp    eax,0xf
10105427:	0f 87 30 03 00 00    	ja     0x1010575d
1010542d:	0f b6 80 dc 57 10 10 	movzx  eax,BYTE PTR [eax+0x101057dc]
10105434:	ff 24 85 c4 57 10 10 	jmp    DWORD PTR [eax*4+0x101057c4]
1010543b:	83 bf 24 02 00 00 01 	cmp    DWORD PTR [edi+0x224],0x1
10105442:	0f 85 9e 01 00 00    	jne    0x101055e6
10105448:	8b 07                	mov    eax,DWORD PTR [edi]
1010544a:	ff 90 9c 00 00 00    	call   DWORD PTR [eax+0x9c]
10105450:	85 c0                	test   eax,eax
10105452:	0f 85 8e 01 00 00    	jne    0x101055e6
10105458:	8b cf                	mov    ecx,edi
1010545a:	e8 f1 fa ff ff       	call   0x10104f50
1010545f:	85 c0                	test   eax,eax
10105461:	0f 85 7f 01 00 00    	jne    0x101055e6
10105467:	6a 01                	push   0x1
10105469:	ff 15 68 30 22 10    	call   DWORD PTR ds:0x10223068
1010546f:	8b d8                	mov    ebx,eax
10105471:	83 c4 04             	add    esp,0x4
10105474:	85 db                	test   ebx,ebx
10105476:	74 0e                	je     0x10105486
10105478:	8d 8b 88 00 00 00    	lea    ecx,[ebx+0x88]
1010547e:	51                   	push   ecx
1010547f:	8b cf                	mov    ecx,edi
10105481:	e8 9a f9 ff ff       	call   0x10104e20
10105486:	83 3e 68             	cmp    DWORD PTR [esi],0x68
10105489:	0f 85 98 00 00 00    	jne    0x10105527
1010548f:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10105492:	8d b3 88 00 00 00    	lea    esi,[ebx+0x88]
10105498:	f3 0f 10 0e          	movss  xmm1,DWORD PTR [esi]
1010549c:	f3 0f 10 46 04       	movss  xmm0,DWORD PTR [esi+0x4]
101054a1:	f3 0f 5c 40 0c       	subss  xmm0,DWORD PTR [eax+0xc]
101054a6:	f3 0f 5c 48 08       	subss  xmm1,DWORD PTR [eax+0x8]
101054ab:	f3 0f 59 c0          	mulss  xmm0,xmm0
101054af:	f3 0f 59 c9          	mulss  xmm1,xmm1
101054b3:	f3 0f 58 c1          	addss  xmm0,xmm1
101054b7:	0f 57 c9             	xorps  xmm1,xmm1
101054ba:	0f 5a c0             	cvtps2pd xmm0,xmm0
101054bd:	66 0f 2e c8          	ucomisd xmm1,xmm0
101054c1:	77 06                	ja     0x101054c9
101054c3:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
101054c7:	eb 05                	jmp    0x101054ce
101054c9:	e8 c2 69 06 00       	call   0x1016be90
101054ce:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
101054d2:	0f 2f 05 c4 fe 1a 10 	comiss xmm0,DWORD PTR ds:0x101afec4
101054d9:	76 0a                	jbe    0x101054e5
101054db:	81 8f 80 01 00 00 00 	or     DWORD PTR [edi+0x180],0x40000000
101054e2:	00 00 40 
101054e5:	8d 83 d0 00 00 00    	lea    eax,[ebx+0xd0]
101054eb:	50                   	push   eax
101054ec:	e8 2f 3e 01 00       	call   0x10119320
101054f1:	a1 88 31 22 10       	mov    eax,ds:0x10223188
101054f6:	83 c0 28             	add    eax,0x28
101054f9:	50                   	push   eax
101054fa:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
101054fd:	83 c0 08             	add    eax,0x8
10105500:	50                   	push   eax
10105501:	56                   	push   esi
10105502:	e8 e9 2c 01 00       	call   0x101181f0
10105507:	f3 0f 10 87 08 02 00 	movss  xmm0,DWORD PTR [edi+0x208]
1010550e:	00 
1010550f:	83 c4 10             	add    esp,0x10
10105512:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
10105516:	0f 2f 44 24 0c       	comiss xmm0,DWORD PTR [esp+0xc]
1010551b:	76 0a                	jbe    0x10105527
1010551d:	81 8f 80 01 00 00 00 	or     DWORD PTR [edi+0x180],0x40000000
10105524:	00 00 40 
10105527:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1010552c:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10105530:	0f 2f 87 0c 02 00 00 	comiss xmm0,DWORD PTR [edi+0x20c]
10105537:	0f 86 7d 02 00 00    	jbe    0x101057ba
1010553d:	f7 87 80 01 00 00 00 	test   DWORD PTR [edi+0x180],0x40000000
10105544:	00 00 40 
10105547:	0f 85 6d 02 00 00    	jne    0x101057ba
1010554d:	c7 87 2c 02 00 00 04 	mov    DWORD PTR [edi+0x22c],0x4
10105554:	00 00 00 
10105557:	5f                   	pop    edi
10105558:	5e                   	pop    esi
10105559:	5b                   	pop    ebx
1010555a:	8b e5                	mov    esp,ebp
1010555c:	5d                   	pop    ebp
1010555d:	c2 04 00             	ret    0x4
10105560:	6a 01                	push   0x1
10105562:	ff 15 68 30 22 10    	call   DWORD PTR ds:0x10223068
10105568:	83 c4 04             	add    esp,0x4
1010556b:	85 c0                	test   eax,eax
1010556d:	74 77                	je     0x101055e6
1010556f:	8d b0 88 00 00 00    	lea    esi,[eax+0x88]
10105575:	83 ec 0c             	sub    esp,0xc
10105578:	8b 06                	mov    eax,DWORD PTR [esi]
1010557a:	8b cc                	mov    ecx,esp
1010557c:	89 01                	mov    DWORD PTR [ecx],eax
1010557e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10105581:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
10105584:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
10105587:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1010558a:	8b cf                	mov    ecx,edi
1010558c:	e8 5f ab fb ff       	call   0x100c00f0
10105591:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10105594:	8b cf                	mov    ecx,edi
10105596:	8b 17                	mov    edx,DWORD PTR [edi]
10105598:	f3 0f 2c 80 b0 00 00 	cvttss2si eax,DWORD PTR [eax+0xb0]
1010559f:	00 
101055a0:	50                   	push   eax
101055a1:	8b 82 30 01 00 00    	mov    eax,DWORD PTR [edx+0x130]
101055a7:	ff d0                	call   eax
101055a9:	56                   	push   esi
101055aa:	8b cf                	mov    ecx,edi
101055ac:	dd d8                	fstp   st(0)
101055ae:	e8 6d f8 ff ff       	call   0x10104e20
101055b3:	a1 88 31 22 10       	mov    eax,ds:0x10223188
101055b8:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
101055bc:	0f 2f 87 0c 02 00 00 	comiss xmm0,DWORD PTR [edi+0x20c]
101055c3:	0f 86 f1 01 00 00    	jbe    0x101057ba
101055c9:	8b cf                	mov    ecx,edi
101055cb:	e8 50 97 fb ff       	call   0x100bed20
101055d0:	f3 0f 10 05 e0 1e 1a 	movss  xmm0,DWORD PTR ds:0x101a1ee0
101055d7:	10 
101055d8:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
101055dc:	0f 2f 44 24 0c       	comiss xmm0,DWORD PTR [esp+0xc]
101055e1:	e9 51 ff ff ff       	jmp    0x10105537
101055e6:	81 8f 80 01 00 00 00 	or     DWORD PTR [edi+0x180],0x40000000
101055ed:	00 00 40 
101055f0:	5f                   	pop    edi
101055f1:	5e                   	pop    esi
101055f2:	5b                   	pop    ebx
101055f3:	8b e5                	mov    esp,ebp
101055f5:	5d                   	pop    ebp
101055f6:	c2 04 00             	ret    0x4
101055f9:	8b 07                	mov    eax,DWORD PTR [edi]
101055fb:	ff 90 9c 00 00 00    	call   DWORD PTR [eax+0x9c]
10105601:	85 c0                	test   eax,eax
10105603:	0f 85 34 ff ff ff    	jne    0x1010553d
10105609:	8b cf                	mov    ecx,edi
1010560b:	e8 40 f9 ff ff       	call   0x10104f50
10105610:	85 c0                	test   eax,eax
10105612:	0f 84 25 ff ff ff    	je     0x1010553d
10105618:	8d 8f e0 03 00 00    	lea    ecx,[edi+0x3e0]
1010561e:	e8 5d 21 f1 ff       	call   0x10017780
10105623:	85 c0                	test   eax,eax
10105625:	0f 84 12 ff ff ff    	je     0x1010553d
1010562b:	8d 8f e0 03 00 00    	lea    ecx,[edi+0x3e0]
10105631:	e8 6a 21 f1 ff       	call   0x100177a0
10105636:	8b cf                	mov    ecx,edi
10105638:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1010563b:	83 c0 08             	add    eax,0x8
1010563e:	50                   	push   eax
1010563f:	e8 dc f7 ff ff       	call   0x10104e20
10105644:	5f                   	pop    edi
10105645:	5e                   	pop    esi
10105646:	5b                   	pop    ebx
10105647:	8b e5                	mov    esp,ebp
10105649:	5d                   	pop    ebp
1010564a:	c2 04 00             	ret    0x4
1010564d:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10105650:	f3 0f 10 8f dc 02 00 	movss  xmm1,DWORD PTR [edi+0x2dc]
10105657:	00 
10105658:	f3 0f 10 87 e0 02 00 	movss  xmm0,DWORD PTR [edi+0x2e0]
1010565f:	00 
10105660:	f3 0f 5c 40 0c       	subss  xmm0,DWORD PTR [eax+0xc]
10105665:	f3 0f 5c 48 08       	subss  xmm1,DWORD PTR [eax+0x8]
1010566a:	f3 0f 59 c0          	mulss  xmm0,xmm0
1010566e:	f3 0f 59 c9          	mulss  xmm1,xmm1
10105672:	f3 0f 58 c1          	addss  xmm0,xmm1
10105676:	0f 57 c9             	xorps  xmm1,xmm1
10105679:	0f 5a c0             	cvtps2pd xmm0,xmm0
1010567c:	66 0f 2e c8          	ucomisd xmm1,xmm0
10105680:	77 06                	ja     0x10105688
10105682:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
10105686:	eb 05                	jmp    0x1010568d
10105688:	e8 03 68 06 00       	call   0x1016be90
1010568d:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
10105691:	0f 2f 46 04          	comiss xmm0,DWORD PTR [esi+0x4]
10105695:	77 0d                	ja     0x101056a4
10105697:	83 bf b8 02 00 00 00 	cmp    DWORD PTR [edi+0x2b8],0x0
1010569e:	0f 85 16 01 00 00    	jne    0x101057ba
101056a4:	f7 87 80 01 00 00 00 	test   DWORD PTR [edi+0x180],0x40000000
101056ab:	00 00 40 
101056ae:	75 0a                	jne    0x101056ba
101056b0:	c7 87 2c 02 00 00 04 	mov    DWORD PTR [edi+0x22c],0x4
101056b7:	00 00 00 
101056ba:	8b cf                	mov    ecx,edi
101056bc:	e8 af c3 fb ff       	call   0x100c1a70
101056c1:	5f                   	pop    edi
101056c2:	5e                   	pop    esi
101056c3:	5b                   	pop    ebx
101056c4:	8b e5                	mov    esp,ebp
101056c6:	5d                   	pop    ebp
101056c7:	c2 04 00             	ret    0x4
101056ca:	e8 81 f8 ff ff       	call   0x10104f50
101056cf:	85 c0                	test   eax,eax
101056d1:	74 2a                	je     0x101056fd
101056d3:	8d 8f e0 03 00 00    	lea    ecx,[edi+0x3e0]
101056d9:	e8 a2 20 f1 ff       	call   0x10017780
101056de:	85 c0                	test   eax,eax
101056e0:	74 1b                	je     0x101056fd
101056e2:	8d 8f e0 03 00 00    	lea    ecx,[edi+0x3e0]
101056e8:	e8 b3 20 f1 ff       	call   0x100177a0
101056ed:	8b cf                	mov    ecx,edi
101056ef:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
101056f2:	83 c0 08             	add    eax,0x8
101056f5:	50                   	push   eax
101056f6:	e8 25 f7 ff ff       	call   0x10104e20
101056fb:	eb 38                	jmp    0x10105735
101056fd:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10105700:	8b cf                	mov    ecx,edi
10105702:	83 c0 08             	add    eax,0x8
10105705:	50                   	push   eax
10105706:	e8 15 f7 ff ff       	call   0x10104e20
1010570b:	8b cf                	mov    ecx,edi
1010570d:	e8 fe e9 ff ff       	call   0x10104110
10105712:	8b 87 6c 03 00 00    	mov    eax,DWORD PTR [edi+0x36c]
10105718:	8d 04 80             	lea    eax,[eax+eax*4]
1010571b:	c1 e0 02             	shl    eax,0x2
1010571e:	50                   	push   eax
1010571f:	6a 00                	push   0x0
10105721:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
10105727:	83 c4 08             	add    esp,0x8
1010572a:	85 c0                	test   eax,eax
1010572c:	75 07                	jne    0x10105735
1010572e:	8b cf                	mov    ecx,edi
10105730:	e8 bb ea ff ff       	call   0x101041f0
10105735:	56                   	push   esi
10105736:	8b cf                	mov    ecx,edi
10105738:	e8 b3 5b f0 ff       	call   0x1000b2f0
1010573d:	83 bf 2c 02 00 00 04 	cmp    DWORD PTR [edi+0x22c],0x4
10105744:	75 74                	jne    0x101057ba
10105746:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10105749:	8b cf                	mov    ecx,edi
1010574b:	83 c0 08             	add    eax,0x8
1010574e:	50                   	push   eax
1010574f:	e8 cc f6 ff ff       	call   0x10104e20
10105754:	5f                   	pop    edi
10105755:	5e                   	pop    esi
10105756:	5b                   	pop    ebx
10105757:	8b e5                	mov    esp,ebp
10105759:	5d                   	pop    ebp
1010575a:	c2 04 00             	ret    0x4
1010575d:	e8 ee f7 ff ff       	call   0x10104f50
10105762:	85 c0                	test   eax,eax
10105764:	74 39                	je     0x1010579f
10105766:	8d 8f e0 03 00 00    	lea    ecx,[edi+0x3e0]
1010576c:	e8 0f 20 f1 ff       	call   0x10017780
10105771:	85 c0                	test   eax,eax
10105773:	74 2a                	je     0x1010579f
10105775:	8d 8f e0 03 00 00    	lea    ecx,[edi+0x3e0]
1010577b:	e8 20 20 f1 ff       	call   0x100177a0
10105780:	8b cf                	mov    ecx,edi
10105782:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10105785:	83 c0 08             	add    eax,0x8
10105788:	50                   	push   eax
10105789:	e8 92 f6 ff ff       	call   0x10104e20
1010578e:	56                   	push   esi
1010578f:	8b cf                	mov    ecx,edi
10105791:	e8 5a 5b f0 ff       	call   0x1000b2f0
10105796:	5f                   	pop    edi
10105797:	5e                   	pop    esi
10105798:	5b                   	pop    ebx
10105799:	8b e5                	mov    esp,ebp
1010579b:	5d                   	pop    ebp
1010579c:	c2 04 00             	ret    0x4
1010579f:	51                   	push   ecx
101057a0:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
101057a7:	8b cf                	mov    ecx,edi
101057a9:	6a 00                	push   0x0
101057ab:	e8 c0 93 f0 ff       	call   0x1000eb70
101057b0:	56                   	push   esi
101057b1:	8b cf                	mov    ecx,edi
101057b3:	dd d8                	fstp   st(0)
101057b5:	e8 36 5b f0 ff       	call   0x1000b2f0
101057ba:	5f                   	pop    edi
101057bb:	5e                   	pop    esi
101057bc:	5b                   	pop    ebx
101057bd:	8b e5                	mov    esp,ebp
101057bf:	5d                   	pop    ebp
101057c0:	c2 04 00             	ret    0x4
