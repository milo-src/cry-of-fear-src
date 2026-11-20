
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100e4410 <.text+0xe3410>:
100e4410:	55                   	push   ebp
100e4411:	8b ec                	mov    ebp,esp
100e4413:	81 ec dc 00 00 00    	sub    esp,0xdc
100e4419:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100e441e:	33 c5                	xor    eax,ebp
100e4420:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100e4423:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e4428:	53                   	push   ebx
100e4429:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
100e442c:	56                   	push   esi
100e442d:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e4433:	8b f1                	mov    esi,ecx
100e4435:	89 9d 78 ff ff ff    	mov    DWORD PTR [ebp-0x88],ebx
100e443b:	03 84 9e fc 21 00 00 	add    eax,DWORD PTR [esi+ebx*4+0x21fc]
100e4442:	50                   	push   eax
100e4443:	68 98 c7 1d 10       	push   0x101dc798
100e4448:	e8 23 bb ff ff       	call   0x100dff70
100e444d:	8d 50 01             	lea    edx,[eax+0x1]
100e4450:	8a 08                	mov    cl,BYTE PTR [eax]
100e4452:	40                   	inc    eax
100e4453:	84 c9                	test   cl,cl
100e4455:	75 f9                	jne    0x100e4450
100e4457:	2b c2                	sub    eax,edx
100e4459:	83 f8 01             	cmp    eax,0x1
100e445c:	77 24                	ja     0x100e4482
100e445e:	6a 00                	push   0x0
100e4460:	6a 02                	push   0x2
100e4462:	68 a4 c7 1d 10       	push   0x101dc7a4
100e4467:	56                   	push   esi
100e4468:	e8 a3 53 03 00       	call   0x10119810
100e446d:	83 c4 10             	add    esp,0x10
100e4470:	5e                   	pop    esi
100e4471:	5b                   	pop    ebx
100e4472:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100e4475:	33 cd                	xor    ecx,ebp
100e4477:	e8 37 97 05 00       	call   0x1013dbb3
100e447c:	8b e5                	mov    esp,ebp
100e447e:	5d                   	pop    ebp
100e447f:	c2 04 00             	ret    0x4
100e4482:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e4487:	8b ce                	mov    ecx,esi
100e4489:	57                   	push   edi
100e448a:	68 80 00 00 00       	push   0x80
100e448f:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e4495:	03 84 9e fc 21 00 00 	add    eax,DWORD PTR [esi+ebx*4+0x21fc]
100e449c:	50                   	push   eax
100e449d:	68 98 c7 1d 10       	push   0x101dc798
100e44a2:	e8 c9 ba ff ff       	call   0x100dff70
100e44a7:	50                   	push   eax
100e44a8:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
100e44ae:	50                   	push   eax
100e44af:	e8 4c b2 08 00       	call   0x1016f700
100e44b4:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e44b7:	83 c0 74             	add    eax,0x74
100e44ba:	50                   	push   eax
100e44bb:	e8 60 4e 03 00       	call   0x10119320
100e44c0:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100e44c3:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e44c8:	f3 0f 10 15 14 1f 1a 	movss  xmm2,DWORD PTR ds:0x101a1f14
100e44cf:	10 
100e44d0:	f3 0f 10 89 78 01 00 	movss  xmm1,DWORD PTR [ecx+0x178]
100e44d7:	00 
100e44d8:	f3 0f 10 40 30       	movss  xmm0,DWORD PTR [eax+0x30]
100e44dd:	f3 0f 58 49 08       	addss  xmm1,DWORD PTR [ecx+0x8]
100e44e2:	f3 0f 10 78 2c       	movss  xmm7,DWORD PTR [eax+0x2c]
100e44e7:	f3 0f 10 a9 7c 01 00 	movss  xmm5,DWORD PTR [ecx+0x17c]
100e44ee:	00 
100e44ef:	f3 0f 10 59 0c       	movss  xmm3,DWORD PTR [ecx+0xc]
100e44f4:	f3 0f 10 a1 80 01 00 	movss  xmm4,DWORD PTR [ecx+0x180]
100e44fb:	00 
100e44fc:	f3 0f 58 eb          	addss  xmm5,xmm3
100e4500:	f3 0f 10 71 10       	movss  xmm6,DWORD PTR [ecx+0x10]
100e4505:	f3 0f 11 85 74 ff ff 	movss  DWORD PTR [ebp-0x8c],xmm0
100e450c:	ff 
100e450d:	f3 0f 58 f4          	addss  xmm6,xmm4
100e4511:	f3 0f 10 40 28       	movss  xmm0,DWORD PTR [eax+0x28]
100e4516:	8d 85 24 ff ff ff    	lea    eax,[ebp-0xdc]
100e451c:	f3 0f 59 c2          	mulss  xmm0,xmm2
100e4520:	50                   	push   eax
100e4521:	f3 0f 59 fa          	mulss  xmm7,xmm2
100e4525:	8d 85 68 ff ff ff    	lea    eax,[ebp-0x98]
100e452b:	f3 0f 58 c8          	addss  xmm1,xmm0
100e452f:	f3 0f 10 85 74 ff ff 	movss  xmm0,DWORD PTR [ebp-0x8c]
100e4536:	ff 
100e4537:	f3 0f 59 c2          	mulss  xmm0,xmm2
100e453b:	f3 0f 58 ef          	addss  xmm5,xmm7
100e453f:	f3 0f 58 f0          	addss  xmm6,xmm0
100e4543:	f3 0f 11 8d 68 ff ff 	movss  DWORD PTR [ebp-0x98],xmm1
100e454a:	ff 
100e454b:	f3 0f 11 ad 6c ff ff 	movss  DWORD PTR [ebp-0x94],xmm5
100e4552:	ff 
100e4553:	f3 0f 11 b5 70 ff ff 	movss  DWORD PTR [ebp-0x90],xmm6
100e455a:	ff 
100e455b:	f3 0f 10 91 7c 01 00 	movss  xmm2,DWORD PTR [ecx+0x17c]
100e4562:	00 
100e4563:	f3 0f 10 89 80 01 00 	movss  xmm1,DWORD PTR [ecx+0x180]
100e456a:	00 
100e456b:	f3 0f 10 41 08       	movss  xmm0,DWORD PTR [ecx+0x8]
100e4570:	f3 0f 58 51 0c       	addss  xmm2,DWORD PTR [ecx+0xc]
100e4575:	f3 0f 58 49 10       	addss  xmm1,DWORD PTR [ecx+0x10]
100e457a:	f3 0f 58 81 78 01 00 	addss  xmm0,DWORD PTR [ecx+0x178]
100e4581:	00 
100e4582:	f3 0f 11 95 60 ff ff 	movss  DWORD PTR [ebp-0xa0],xmm2
100e4589:	ff 
100e458a:	f3 0f 11 8d 64 ff ff 	movss  DWORD PTR [ebp-0x9c],xmm1
100e4591:	ff 
100e4592:	f3 0f 11 85 5c ff ff 	movss  DWORD PTR [ebp-0xa4],xmm0
100e4599:	ff 
100e459a:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
100e45a0:	6a 00                	push   0x0
100e45a2:	50                   	push   eax
100e45a3:	8d 85 5c ff ff ff    	lea    eax,[ebp-0xa4]
100e45a9:	50                   	push   eax
100e45aa:	e8 51 62 03 00       	call   0x1011a800
100e45af:	8b bd 54 ff ff ff    	mov    edi,DWORD PTR [ebp-0xac]
100e45b5:	83 c4 24             	add    esp,0x24
100e45b8:	85 ff                	test   edi,edi
100e45ba:	0f 84 73 02 00 00    	je     0x100e4833
100e45c0:	8b 7f 7c             	mov    edi,DWORD PTR [edi+0x7c]
100e45c3:	85 ff                	test   edi,edi
100e45c5:	0f 84 68 02 00 00    	je     0x100e4833
100e45cb:	8b 07                	mov    eax,DWORD PTR [edi]
100e45cd:	8b cf                	mov    ecx,edi
100e45cf:	ff 50 40             	call   DWORD PTR [eax+0x40]
100e45d2:	a8 38                	test   al,0x38
100e45d4:	0f 84 59 02 00 00    	je     0x100e4833
100e45da:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e45df:	b9 84 0c 1b 10       	mov    ecx,0x101b0c84
100e45e4:	8b 5f 04             	mov    ebx,DWORD PTR [edi+0x4]
100e45e7:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e45ed:	03 03                	add    eax,DWORD PTR [ebx]
100e45ef:	90                   	nop
100e45f0:	8a 10                	mov    dl,BYTE PTR [eax]
100e45f2:	3a 11                	cmp    dl,BYTE PTR [ecx]
100e45f4:	75 1a                	jne    0x100e4610
100e45f6:	84 d2                	test   dl,dl
100e45f8:	74 12                	je     0x100e460c
100e45fa:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100e45fd:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100e4600:	75 0e                	jne    0x100e4610
100e4602:	83 c0 02             	add    eax,0x2
100e4605:	83 c1 02             	add    ecx,0x2
100e4608:	84 d2                	test   dl,dl
100e460a:	75 e4                	jne    0x100e45f0
100e460c:	33 c0                	xor    eax,eax
100e460e:	eb 05                	jmp    0x100e4615
100e4610:	1b c0                	sbb    eax,eax
100e4612:	83 c8 01             	or     eax,0x1
100e4615:	85 c0                	test   eax,eax
100e4617:	0f 85 aa 00 00 00    	jne    0x100e46c7
100e461d:	53                   	push   ebx
100e461e:	e8 ed 38 f6 ff       	call   0x10047f10
100e4623:	8b d8                	mov    ebx,eax
100e4625:	83 c4 04             	add    esp,0x4
100e4628:	85 db                	test   ebx,ebx
100e462a:	0f 84 97 00 00 00    	je     0x100e46c7
100e4630:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100e4636:	8d 95 7c ff ff ff    	lea    edx,[ebp-0x84]
100e463c:	8b 89 98 00 00 00    	mov    ecx,DWORD PTR [ecx+0x98]
100e4642:	03 8b 90 01 00 00    	add    ecx,DWORD PTR [ebx+0x190]
100e4648:	8a 02                	mov    al,BYTE PTR [edx]
100e464a:	3a 01                	cmp    al,BYTE PTR [ecx]
100e464c:	75 1a                	jne    0x100e4668
100e464e:	84 c0                	test   al,al
100e4650:	74 12                	je     0x100e4664
100e4652:	8a 42 01             	mov    al,BYTE PTR [edx+0x1]
100e4655:	3a 41 01             	cmp    al,BYTE PTR [ecx+0x1]
100e4658:	75 0e                	jne    0x100e4668
100e465a:	83 c2 02             	add    edx,0x2
100e465d:	83 c1 02             	add    ecx,0x2
100e4660:	84 c0                	test   al,al
100e4662:	75 e4                	jne    0x100e4648
100e4664:	33 c0                	xor    eax,eax
100e4666:	eb 05                	jmp    0x100e466d
100e4668:	1b c0                	sbb    eax,eax
100e466a:	83 c8 01             	or     eax,0x1
100e466d:	85 c0                	test   eax,eax
100e466f:	75 28                	jne    0x100e4699
100e4671:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100e4674:	f6 80 a4 01 00 00 01 	test   BYTE PTR [eax+0x1a4],0x1
100e467b:	75 0f                	jne    0x100e468c
100e467d:	6a 00                	push   0x0
100e467f:	ff b5 78 ff ff ff    	push   DWORD PTR [ebp-0x88]
100e4685:	8b ce                	mov    ecx,esi
100e4687:	e8 04 93 ff ff       	call   0x100dd990
100e468c:	56                   	push   esi
100e468d:	8b cb                	mov    ecx,ebx
100e468f:	e8 ac 47 f6 ff       	call   0x10048e40
100e4694:	e9 0a 05 00 00       	jmp    0x100e4ba3
100e4699:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e469c:	6a 64                	push   0x64
100e469e:	6a 00                	push   0x0
100e46a0:	83 ec 08             	sub    esp,0x8
100e46a3:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100e46aa:	3f 
100e46ab:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100e46b2:	68 98 87 1a 10       	push   0x101a8798
100e46b7:	6a 02                	push   0x2
100e46b9:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e46bf:	e8 2c 83 01 00       	call   0x100fc9f0
100e46c4:	83 c4 1c             	add    esp,0x1c
100e46c7:	8b 5f 04             	mov    ebx,DWORD PTR [edi+0x4]
100e46ca:	68 d4 c7 1d 10       	push   0x101dc7d4
100e46cf:	53                   	push   ebx
100e46d0:	e8 1b 64 f2 ff       	call   0x1000aaf0
100e46d5:	83 c4 08             	add    esp,0x8
100e46d8:	85 c0                	test   eax,eax
100e46da:	0f 84 af 00 00 00    	je     0x100e478f
100e46e0:	53                   	push   ebx
100e46e1:	e8 7a de f5 ff       	call   0x10042560
100e46e6:	8b d8                	mov    ebx,eax
100e46e8:	83 c4 04             	add    esp,0x4
100e46eb:	85 db                	test   ebx,ebx
100e46ed:	0f 84 9c 00 00 00    	je     0x100e478f
100e46f3:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100e46f9:	8d 95 7c ff ff ff    	lea    edx,[ebp-0x84]
100e46ff:	8b 89 98 00 00 00    	mov    ecx,DWORD PTR [ecx+0x98]
100e4705:	03 8b 80 01 00 00    	add    ecx,DWORD PTR [ebx+0x180]
100e470b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100e4710:	8a 02                	mov    al,BYTE PTR [edx]
100e4712:	3a 01                	cmp    al,BYTE PTR [ecx]
100e4714:	75 1a                	jne    0x100e4730
100e4716:	84 c0                	test   al,al
100e4718:	74 12                	je     0x100e472c
100e471a:	8a 42 01             	mov    al,BYTE PTR [edx+0x1]
100e471d:	3a 41 01             	cmp    al,BYTE PTR [ecx+0x1]
100e4720:	75 0e                	jne    0x100e4730
100e4722:	83 c2 02             	add    edx,0x2
100e4725:	83 c1 02             	add    ecx,0x2
100e4728:	84 c0                	test   al,al
100e472a:	75 e4                	jne    0x100e4710
100e472c:	33 c0                	xor    eax,eax
100e472e:	eb 05                	jmp    0x100e4735
100e4730:	1b c0                	sbb    eax,eax
100e4732:	83 c8 01             	or     eax,0x1
100e4735:	85 c0                	test   eax,eax
100e4737:	75 28                	jne    0x100e4761
100e4739:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100e473c:	f6 80 a4 01 00 00 01 	test   BYTE PTR [eax+0x1a4],0x1
100e4743:	75 0f                	jne    0x100e4754
100e4745:	6a 00                	push   0x0
100e4747:	ff b5 78 ff ff ff    	push   DWORD PTR [ebp-0x88]
100e474d:	8b ce                	mov    ecx,esi
100e474f:	e8 3c 92 ff ff       	call   0x100dd990
100e4754:	56                   	push   esi
100e4755:	8b cb                	mov    ecx,ebx
100e4757:	e8 94 e5 f5 ff       	call   0x10042cf0
100e475c:	e9 42 04 00 00       	jmp    0x100e4ba3
100e4761:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e4764:	6a 64                	push   0x64
100e4766:	6a 00                	push   0x0
100e4768:	83 ec 08             	sub    esp,0x8
100e476b:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100e4772:	3f 
100e4773:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100e477a:	68 98 87 1a 10       	push   0x101a8798
100e477f:	6a 02                	push   0x2
100e4781:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e4787:	e8 64 82 01 00       	call   0x100fc9f0
100e478c:	83 c4 1c             	add    esp,0x1c
100e478f:	8b 7f 04             	mov    edi,DWORD PTR [edi+0x4]
100e4792:	68 58 4d 1c 10       	push   0x101c4d58
100e4797:	57                   	push   edi
100e4798:	e8 53 63 f2 ff       	call   0x1000aaf0
100e479d:	83 c4 08             	add    esp,0x8
100e47a0:	85 c0                	test   eax,eax
100e47a2:	0f 84 8b 00 00 00    	je     0x100e4833
100e47a8:	57                   	push   edi
100e47a9:	e8 d2 dd f2 ff       	call   0x10012580
100e47ae:	8b f8                	mov    edi,eax
100e47b0:	83 c4 04             	add    esp,0x4
100e47b3:	85 ff                	test   edi,edi
100e47b5:	74 7c                	je     0x100e4833
100e47b7:	80 bf 80 01 00 00 00 	cmp    BYTE PTR [edi+0x180],0x0
100e47be:	74 73                	je     0x100e4833
100e47c0:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100e47c6:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
100e47cc:	8b 89 98 00 00 00    	mov    ecx,DWORD PTR [ecx+0x98]
100e47d2:	03 8f 8c 01 00 00    	add    ecx,DWORD PTR [edi+0x18c]
100e47d8:	8a 10                	mov    dl,BYTE PTR [eax]
100e47da:	3a 11                	cmp    dl,BYTE PTR [ecx]
100e47dc:	75 1a                	jne    0x100e47f8
100e47de:	84 d2                	test   dl,dl
100e47e0:	74 12                	je     0x100e47f4
100e47e2:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100e47e5:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100e47e8:	75 0e                	jne    0x100e47f8
100e47ea:	83 c0 02             	add    eax,0x2
100e47ed:	83 c1 02             	add    ecx,0x2
100e47f0:	84 d2                	test   dl,dl
100e47f2:	75 e4                	jne    0x100e47d8
100e47f4:	33 c0                	xor    eax,eax
100e47f6:	eb 05                	jmp    0x100e47fd
100e47f8:	1b c0                	sbb    eax,eax
100e47fa:	83 c8 01             	or     eax,0x1
100e47fd:	85 c0                	test   eax,eax
100e47ff:	0f 84 79 03 00 00    	je     0x100e4b7e
100e4805:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e4808:	6a 64                	push   0x64
100e480a:	6a 00                	push   0x0
100e480c:	83 ec 08             	sub    esp,0x8
100e480f:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100e4816:	3f 
100e4817:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100e481e:	68 98 87 1a 10       	push   0x101a8798
100e4823:	6a 02                	push   0x2
100e4825:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e482b:	e8 c0 81 01 00       	call   0x100fc9f0
100e4830:	83 c4 1c             	add    esp,0x1c
100e4833:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e4836:	51                   	push   ecx
100e4837:	83 c0 08             	add    eax,0x8
100e483a:	c7 04 24 00 00 80 42 	mov    DWORD PTR [esp],0x42800000
100e4841:	50                   	push   eax
100e4842:	6a 00                	push   0x0
100e4844:	e8 67 3e 03 00       	call   0x101186b0
100e4849:	8b d8                	mov    ebx,eax
100e484b:	83 c4 0c             	add    esp,0xc
100e484e:	85 db                	test   ebx,ebx
100e4850:	0f 84 9d 02 00 00    	je     0x100e4af3
100e4856:	66 66 0f 1f 84 00 00 	data16 nop WORD PTR [eax+eax*1+0x0]
100e485d:	00 00 00 
100e4860:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100e4866:	ba 84 0c 1b 10       	mov    edx,0x101b0c84
100e486b:	8b 7b 04             	mov    edi,DWORD PTR [ebx+0x4]
100e486e:	8b 81 98 00 00 00    	mov    eax,DWORD PTR [ecx+0x98]
100e4874:	03 07                	add    eax,DWORD PTR [edi]
100e4876:	8a 08                	mov    cl,BYTE PTR [eax]
100e4878:	3a 0a                	cmp    cl,BYTE PTR [edx]
100e487a:	75 1a                	jne    0x100e4896
100e487c:	84 c9                	test   cl,cl
100e487e:	74 12                	je     0x100e4892
100e4880:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
100e4883:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
100e4886:	75 0e                	jne    0x100e4896
100e4888:	83 c0 02             	add    eax,0x2
100e488b:	83 c2 02             	add    edx,0x2
100e488e:	84 c9                	test   cl,cl
100e4890:	75 e4                	jne    0x100e4876
100e4892:	33 c0                	xor    eax,eax
100e4894:	eb 05                	jmp    0x100e489b
100e4896:	1b c0                	sbb    eax,eax
100e4898:	83 c8 01             	or     eax,0x1
100e489b:	85 c0                	test   eax,eax
100e489d:	0f 85 8c 00 00 00    	jne    0x100e492f
100e48a3:	57                   	push   edi
100e48a4:	e8 67 36 f6 ff       	call   0x10047f10
100e48a9:	8b f8                	mov    edi,eax
100e48ab:	83 c4 04             	add    esp,0x4
100e48ae:	85 ff                	test   edi,edi
100e48b0:	74 7d                	je     0x100e492f
100e48b2:	8b cf                	mov    ecx,edi
100e48b4:	e8 87 3c f6 ff       	call   0x10048540
100e48b9:	85 c0                	test   eax,eax
100e48bb:	74 72                	je     0x100e492f
100e48bd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e48c2:	8b 8f 90 01 00 00    	mov    ecx,DWORD PTR [edi+0x190]
100e48c8:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100e48ce:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
100e48d4:	8a 10                	mov    dl,BYTE PTR [eax]
100e48d6:	3a 11                	cmp    dl,BYTE PTR [ecx]
100e48d8:	75 1a                	jne    0x100e48f4
100e48da:	84 d2                	test   dl,dl
100e48dc:	74 12                	je     0x100e48f0
100e48de:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100e48e1:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100e48e4:	75 0e                	jne    0x100e48f4
100e48e6:	83 c0 02             	add    eax,0x2
100e48e9:	83 c1 02             	add    ecx,0x2
100e48ec:	84 d2                	test   dl,dl
100e48ee:	75 e4                	jne    0x100e48d4
100e48f0:	33 c0                	xor    eax,eax
100e48f2:	eb 05                	jmp    0x100e48f9
100e48f4:	1b c0                	sbb    eax,eax
100e48f6:	83 c8 01             	or     eax,0x1
100e48f9:	85 c0                	test   eax,eax
100e48fb:	0f 84 33 02 00 00    	je     0x100e4b34
100e4901:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e4904:	6a 64                	push   0x64
100e4906:	6a 00                	push   0x0
100e4908:	83 ec 08             	sub    esp,0x8
100e490b:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100e4912:	3f 
100e4913:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100e491a:	68 98 87 1a 10       	push   0x101a8798
100e491f:	6a 02                	push   0x2
100e4921:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e4927:	e8 c4 80 01 00       	call   0x100fc9f0
100e492c:	83 c4 1c             	add    esp,0x1c
100e492f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e4934:	b9 d4 c7 1d 10       	mov    ecx,0x101dc7d4
100e4939:	8b 7b 04             	mov    edi,DWORD PTR [ebx+0x4]
100e493c:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e4942:	03 07                	add    eax,DWORD PTR [edi]
100e4944:	8a 10                	mov    dl,BYTE PTR [eax]
100e4946:	3a 11                	cmp    dl,BYTE PTR [ecx]
100e4948:	75 1a                	jne    0x100e4964
100e494a:	84 d2                	test   dl,dl
100e494c:	74 12                	je     0x100e4960
100e494e:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100e4951:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100e4954:	75 0e                	jne    0x100e4964
100e4956:	83 c0 02             	add    eax,0x2
100e4959:	83 c1 02             	add    ecx,0x2
100e495c:	84 d2                	test   dl,dl
100e495e:	75 e4                	jne    0x100e4944
100e4960:	33 c0                	xor    eax,eax
100e4962:	eb 05                	jmp    0x100e4969
100e4964:	1b c0                	sbb    eax,eax
100e4966:	83 c8 01             	or     eax,0x1
100e4969:	85 c0                	test   eax,eax
100e496b:	0f 85 8a 00 00 00    	jne    0x100e49fb
100e4971:	57                   	push   edi
100e4972:	e8 e9 db f5 ff       	call   0x10042560
100e4977:	8b f8                	mov    edi,eax
100e4979:	83 c4 04             	add    esp,0x4
100e497c:	85 ff                	test   edi,edi
100e497e:	74 7b                	je     0x100e49fb
100e4980:	8b 87 80 01 00 00    	mov    eax,DWORD PTR [edi+0x180]
100e4986:	85 c0                	test   eax,eax
100e4988:	74 43                	je     0x100e49cd
100e498a:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100e4990:	8b 89 98 00 00 00    	mov    ecx,DWORD PTR [ecx+0x98]
100e4996:	03 c8                	add    ecx,eax
100e4998:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
100e499e:	66 90                	xchg   ax,ax
100e49a0:	8a 10                	mov    dl,BYTE PTR [eax]
100e49a2:	3a 11                	cmp    dl,BYTE PTR [ecx]
100e49a4:	75 1a                	jne    0x100e49c0
100e49a6:	84 d2                	test   dl,dl
100e49a8:	74 12                	je     0x100e49bc
100e49aa:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100e49ad:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100e49b0:	75 0e                	jne    0x100e49c0
100e49b2:	83 c0 02             	add    eax,0x2
100e49b5:	83 c1 02             	add    ecx,0x2
100e49b8:	84 d2                	test   dl,dl
100e49ba:	75 e4                	jne    0x100e49a0
100e49bc:	33 c0                	xor    eax,eax
100e49be:	eb 05                	jmp    0x100e49c5
100e49c0:	1b c0                	sbb    eax,eax
100e49c2:	83 c8 01             	or     eax,0x1
100e49c5:	85 c0                	test   eax,eax
100e49c7:	0f 84 8c 01 00 00    	je     0x100e4b59
100e49cd:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e49d0:	6a 64                	push   0x64
100e49d2:	6a 00                	push   0x0
100e49d4:	83 ec 08             	sub    esp,0x8
100e49d7:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100e49de:	3f 
100e49df:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100e49e6:	68 98 87 1a 10       	push   0x101a8798
100e49eb:	6a 02                	push   0x2
100e49ed:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e49f3:	e8 f8 7f 01 00       	call   0x100fc9f0
100e49f8:	83 c4 1c             	add    esp,0x1c
100e49fb:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e4a00:	b9 58 4d 1c 10       	mov    ecx,0x101c4d58
100e4a05:	8b 7b 04             	mov    edi,DWORD PTR [ebx+0x4]
100e4a08:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e4a0e:	03 07                	add    eax,DWORD PTR [edi]
100e4a10:	8a 10                	mov    dl,BYTE PTR [eax]
100e4a12:	3a 11                	cmp    dl,BYTE PTR [ecx]
100e4a14:	75 1a                	jne    0x100e4a30
100e4a16:	84 d2                	test   dl,dl
100e4a18:	74 12                	je     0x100e4a2c
100e4a1a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100e4a1d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100e4a20:	75 0e                	jne    0x100e4a30
100e4a22:	83 c0 02             	add    eax,0x2
100e4a25:	83 c1 02             	add    ecx,0x2
100e4a28:	84 d2                	test   dl,dl
100e4a2a:	75 e4                	jne    0x100e4a10
100e4a2c:	33 c0                	xor    eax,eax
100e4a2e:	eb 05                	jmp    0x100e4a35
100e4a30:	1b c0                	sbb    eax,eax
100e4a32:	83 c8 01             	or     eax,0x1
100e4a35:	85 c0                	test   eax,eax
100e4a37:	0f 85 94 00 00 00    	jne    0x100e4ad1
100e4a3d:	57                   	push   edi
100e4a3e:	e8 3d db f2 ff       	call   0x10012580
100e4a43:	8b f8                	mov    edi,eax
100e4a45:	83 c4 04             	add    esp,0x4
100e4a48:	85 ff                	test   edi,edi
100e4a4a:	0f 84 81 00 00 00    	je     0x100e4ad1
100e4a50:	8b 8f 8c 01 00 00    	mov    ecx,DWORD PTR [edi+0x18c]
100e4a56:	85 c9                	test   ecx,ecx
100e4a58:	74 77                	je     0x100e4ad1
100e4a5a:	80 bf 80 01 00 00 00 	cmp    BYTE PTR [edi+0x180],0x0
100e4a61:	74 6e                	je     0x100e4ad1
100e4a63:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e4a68:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e4a6e:	03 c1                	add    eax,ecx
100e4a70:	8d 8d 7c ff ff ff    	lea    ecx,[ebp-0x84]
100e4a76:	8a 11                	mov    dl,BYTE PTR [ecx]
100e4a78:	3a 10                	cmp    dl,BYTE PTR [eax]
100e4a7a:	75 1a                	jne    0x100e4a96
100e4a7c:	84 d2                	test   dl,dl
100e4a7e:	74 12                	je     0x100e4a92
100e4a80:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
100e4a83:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
100e4a86:	75 0e                	jne    0x100e4a96
100e4a88:	83 c1 02             	add    ecx,0x2
100e4a8b:	83 c0 02             	add    eax,0x2
100e4a8e:	84 d2                	test   dl,dl
100e4a90:	75 e4                	jne    0x100e4a76
100e4a92:	33 c0                	xor    eax,eax
100e4a94:	eb 05                	jmp    0x100e4a9b
100e4a96:	1b c0                	sbb    eax,eax
100e4a98:	83 c8 01             	or     eax,0x1
100e4a9b:	85 c0                	test   eax,eax
100e4a9d:	0f 84 db 00 00 00    	je     0x100e4b7e
100e4aa3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e4aa6:	6a 64                	push   0x64
100e4aa8:	6a 00                	push   0x0
100e4aaa:	83 ec 08             	sub    esp,0x8
100e4aad:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100e4ab4:	3f 
100e4ab5:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100e4abc:	68 98 87 1a 10       	push   0x101a8798
100e4ac1:	6a 02                	push   0x2
100e4ac3:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e4ac9:	e8 22 7f 01 00       	call   0x100fc9f0
100e4ace:	83 c4 1c             	add    esp,0x1c
100e4ad1:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e4ad4:	51                   	push   ecx
100e4ad5:	83 c0 08             	add    eax,0x8
100e4ad8:	c7 04 24 00 00 80 42 	mov    DWORD PTR [esp],0x42800000
100e4adf:	50                   	push   eax
100e4ae0:	53                   	push   ebx
100e4ae1:	e8 ca 3b 03 00       	call   0x101186b0
100e4ae6:	8b d8                	mov    ebx,eax
100e4ae8:	83 c4 0c             	add    esp,0xc
100e4aeb:	85 db                	test   ebx,ebx
100e4aed:	0f 85 6d fd ff ff    	jne    0x100e4860
100e4af3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e4af6:	6a 64                	push   0x64
100e4af8:	6a 00                	push   0x0
100e4afa:	83 ec 08             	sub    esp,0x8
100e4afd:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100e4b04:	3f 
100e4b05:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100e4b0c:	68 98 87 1a 10       	push   0x101a8798
100e4b11:	6a 03                	push   0x3
100e4b13:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e4b19:	e8 d2 7e 01 00       	call   0x100fc9f0
100e4b1e:	83 c4 1c             	add    esp,0x1c
100e4b21:	5f                   	pop    edi
100e4b22:	5e                   	pop    esi
100e4b23:	5b                   	pop    ebx
100e4b24:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100e4b27:	33 cd                	xor    ecx,ebp
100e4b29:	e8 85 90 05 00       	call   0x1013dbb3
100e4b2e:	8b e5                	mov    esp,ebp
100e4b30:	5d                   	pop    ebp
100e4b31:	c2 04 00             	ret    0x4
100e4b34:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e4b37:	f6 80 a4 01 00 00 01 	test   BYTE PTR [eax+0x1a4],0x1
100e4b3e:	75 0f                	jne    0x100e4b4f
100e4b40:	6a 00                	push   0x0
100e4b42:	ff b5 78 ff ff ff    	push   DWORD PTR [ebp-0x88]
100e4b48:	8b ce                	mov    ecx,esi
100e4b4a:	e8 41 8e ff ff       	call   0x100dd990
100e4b4f:	56                   	push   esi
100e4b50:	8b cf                	mov    ecx,edi
100e4b52:	e8 e9 42 f6 ff       	call   0x10048e40
100e4b57:	eb 4a                	jmp    0x100e4ba3
100e4b59:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e4b5c:	f6 80 a4 01 00 00 01 	test   BYTE PTR [eax+0x1a4],0x1
100e4b63:	75 0f                	jne    0x100e4b74
100e4b65:	6a 00                	push   0x0
100e4b67:	ff b5 78 ff ff ff    	push   DWORD PTR [ebp-0x88]
100e4b6d:	8b ce                	mov    ecx,esi
100e4b6f:	e8 1c 8e ff ff       	call   0x100dd990
100e4b74:	56                   	push   esi
100e4b75:	8b cf                	mov    ecx,edi
100e4b77:	e8 74 e1 f5 ff       	call   0x10042cf0
100e4b7c:	eb 25                	jmp    0x100e4ba3
100e4b7e:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e4b81:	f7 80 a4 01 00 00 00 	test   DWORD PTR [eax+0x1a4],0x400
100e4b88:	04 00 00 
100e4b8b:	75 0f                	jne    0x100e4b9c
100e4b8d:	6a 00                	push   0x0
100e4b8f:	ff b5 78 ff ff ff    	push   DWORD PTR [ebp-0x88]
100e4b95:	8b ce                	mov    ecx,esi
100e4b97:	e8 f4 8d ff ff       	call   0x100dd990
100e4b9c:	8b cf                	mov    ecx,edi
100e4b9e:	e8 7d 0e f3 ff       	call   0x10015a20
100e4ba3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e4ba6:	6a 64                	push   0x64
100e4ba8:	6a 00                	push   0x0
100e4baa:	83 ec 08             	sub    esp,0x8
100e4bad:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100e4bb4:	3f 
100e4bb5:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100e4bbc:	68 98 95 1a 10       	push   0x101a9598
100e4bc1:	6a 03                	push   0x3
100e4bc3:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e4bc9:	e8 22 7e 01 00       	call   0x100fc9f0
100e4bce:	83 c4 1c             	add    esp,0x1c
100e4bd1:	8b ce                	mov    ecx,esi
100e4bd3:	e8 68 90 ff ff       	call   0x100ddc40
100e4bd8:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100e4bdb:	5f                   	pop    edi
100e4bdc:	5e                   	pop    esi
100e4bdd:	33 cd                	xor    ecx,ebp
100e4bdf:	5b                   	pop    ebx
100e4be0:	e8 ce 8f 05 00       	call   0x1013dbb3
100e4be5:	8b e5                	mov    esp,ebp
100e4be7:	5d                   	pop    ebp
100e4be8:	c2 04 00             	ret    0x4
