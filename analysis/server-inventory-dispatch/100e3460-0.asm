
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100e3460 <.text+0xe2460>:
100e3460:	55                   	push   ebp
100e3461:	8b ec                	mov    ebp,esp
100e3463:	83 ec 08             	sub    esp,0x8
100e3466:	56                   	push   esi
100e3467:	8b f1                	mov    esi,ecx
100e3469:	80 be e8 1e 00 00 00 	cmp    BYTE PTR [esi+0x1ee8],0x0
100e3470:	0f 85 c4 02 00 00    	jne    0x100e373a
100e3476:	e8 55 1a 00 00       	call   0x100e4ed0
100e347b:	85 c0                	test   eax,eax
100e347d:	0f 85 b7 02 00 00    	jne    0x100e373a
100e3483:	8b 06                	mov    eax,DWORD PTR [esi]
100e3485:	8b ce                	mov    ecx,esi
100e3487:	ff 90 bc 00 00 00    	call   DWORD PTR [eax+0xbc]
100e348d:	85 c0                	test   eax,eax
100e348f:	0f 84 a5 02 00 00    	je     0x100e373a
100e3495:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e349a:	53                   	push   ebx
100e349b:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
100e349e:	57                   	push   edi
100e349f:	8b 90 98 00 00 00    	mov    edx,DWORD PTR [eax+0x98]
100e34a5:	03 94 9e fc 21 00 00 	add    edx,DWORD PTR [esi+ebx*4+0x21fc]
100e34ac:	8b ca                	mov    ecx,edx
100e34ae:	8d 79 01             	lea    edi,[ecx+0x1]
100e34b1:	8a 01                	mov    al,BYTE PTR [ecx]
100e34b3:	41                   	inc    ecx
100e34b4:	84 c0                	test   al,al
100e34b6:	75 f9                	jne    0x100e34b1
100e34b8:	2b cf                	sub    ecx,edi
100e34ba:	83 f9 01             	cmp    ecx,0x1
100e34bd:	0f 86 47 02 00 00    	jbe    0x100e370a
100e34c3:	52                   	push   edx
100e34c4:	68 fc 72 1a 10       	push   0x101a72fc
100e34c9:	8b ce                	mov    ecx,esi
100e34cb:	e8 a0 ca ff ff       	call   0x100dff70
100e34d0:	b9 50 de 1a 10       	mov    ecx,0x101ade50
100e34d5:	8a 11                	mov    dl,BYTE PTR [ecx]
100e34d7:	3a 10                	cmp    dl,BYTE PTR [eax]
100e34d9:	75 1a                	jne    0x100e34f5
100e34db:	84 d2                	test   dl,dl
100e34dd:	74 12                	je     0x100e34f1
100e34df:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
100e34e2:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
100e34e5:	75 0e                	jne    0x100e34f5
100e34e7:	83 c1 02             	add    ecx,0x2
100e34ea:	83 c0 02             	add    eax,0x2
100e34ed:	84 d2                	test   dl,dl
100e34ef:	75 e4                	jne    0x100e34d5
100e34f1:	33 c0                	xor    eax,eax
100e34f3:	eb 05                	jmp    0x100e34fa
100e34f5:	1b c0                	sbb    eax,eax
100e34f7:	83 c8 01             	or     eax,0x1
100e34fa:	85 c0                	test   eax,eax
100e34fc:	75 5b                	jne    0x100e3559
100e34fe:	a1 90 31 22 10       	mov    eax,ds:0x10223190
100e3503:	85 c0                	test   eax,eax
100e3505:	74 52                	je     0x100e3559
100e3507:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100e350a:	83 b8 4c 02 00 00 01 	cmp    DWORD PTR [eax+0x24c],0x1
100e3511:	74 46                	je     0x100e3559
100e3513:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e3516:	6a 64                	push   0x64
100e3518:	6a 00                	push   0x0
100e351a:	83 ec 08             	sub    esp,0x8
100e351d:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100e3524:	3f 
100e3525:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100e352c:	68 98 87 1a 10       	push   0x101a8798
100e3531:	6a 03                	push   0x3
100e3533:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e3539:	e8 b2 94 01 00       	call   0x100fc9f0
100e353e:	6a 00                	push   0x0
100e3540:	6a 05                	push   0x5
100e3542:	68 e0 c7 1d 10       	push   0x101dc7e0
100e3547:	56                   	push   esi
100e3548:	e8 c3 62 03 00       	call   0x10119810
100e354d:	83 c4 2c             	add    esp,0x2c
100e3550:	5f                   	pop    edi
100e3551:	5b                   	pop    ebx
100e3552:	5e                   	pop    esi
100e3553:	8b e5                	mov    esp,ebp
100e3555:	5d                   	pop    ebp
100e3556:	c2 04 00             	ret    0x4
100e3559:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e355e:	8b ce                	mov    ecx,esi
100e3560:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e3566:	03 84 9e fc 21 00 00 	add    eax,DWORD PTR [esi+ebx*4+0x21fc]
100e356d:	50                   	push   eax
100e356e:	68 fc 72 1a 10       	push   0x101a72fc
100e3573:	e8 f8 c9 ff ff       	call   0x100dff70
100e3578:	b9 bc c2 1a 10       	mov    ecx,0x101ac2bc
100e357d:	0f 1f 00             	nop    DWORD PTR [eax]
100e3580:	8a 11                	mov    dl,BYTE PTR [ecx]
100e3582:	3a 10                	cmp    dl,BYTE PTR [eax]
100e3584:	75 1a                	jne    0x100e35a0
100e3586:	84 d2                	test   dl,dl
100e3588:	74 12                	je     0x100e359c
100e358a:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
100e358d:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
100e3590:	75 0e                	jne    0x100e35a0
100e3592:	83 c1 02             	add    ecx,0x2
100e3595:	83 c0 02             	add    eax,0x2
100e3598:	84 d2                	test   dl,dl
100e359a:	75 e4                	jne    0x100e3580
100e359c:	33 c0                	xor    eax,eax
100e359e:	eb 05                	jmp    0x100e35a5
100e35a0:	1b c0                	sbb    eax,eax
100e35a2:	83 c8 01             	or     eax,0x1
100e35a5:	8b 1d 88 31 22 10    	mov    ebx,DWORD PTR ds:0x10223188
100e35ab:	85 c0                	test   eax,eax
100e35ad:	75 6b                	jne    0x100e361a
100e35af:	8b be 2c 25 00 00    	mov    edi,DWORD PTR [esi+0x252c]
100e35b5:	85 ff                	test   edi,edi
100e35b7:	74 61                	je     0x100e361a
100e35b9:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e35bc:	ba bc c2 1a 10       	mov    edx,0x101ac2bc
100e35c1:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
100e35c7:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
100e35cd:	f7 d9                	neg    ecx
100e35cf:	1b c9                	sbb    ecx,ecx
100e35d1:	23 c8                	and    ecx,eax
100e35d3:	8b 01                	mov    eax,DWORD PTR [ecx]
100e35d5:	03 83 98 00 00 00    	add    eax,DWORD PTR [ebx+0x98]
100e35db:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100e35e0:	8a 08                	mov    cl,BYTE PTR [eax]
100e35e2:	3a 0a                	cmp    cl,BYTE PTR [edx]
100e35e4:	75 1a                	jne    0x100e3600
100e35e6:	84 c9                	test   cl,cl
100e35e8:	74 12                	je     0x100e35fc
100e35ea:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
100e35ed:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
100e35f0:	75 0e                	jne    0x100e3600
100e35f2:	83 c0 02             	add    eax,0x2
100e35f5:	83 c2 02             	add    edx,0x2
100e35f8:	84 c9                	test   cl,cl
100e35fa:	75 e4                	jne    0x100e35e0
100e35fc:	33 c0                	xor    eax,eax
100e35fe:	eb 05                	jmp    0x100e3605
100e3600:	1b c0                	sbb    eax,eax
100e3602:	83 c8 01             	or     eax,0x1
100e3605:	85 c0                	test   eax,eax
100e3607:	75 11                	jne    0x100e361a
100e3609:	f3 0f 10 87 cc 01 00 	movss  xmm0,DWORD PTR [edi+0x1cc]
100e3610:	00 
100e3611:	0f 2f 03             	comiss xmm0,DWORD PTR [ebx]
100e3614:	0f 87 f0 00 00 00    	ja     0x100e370a
100e361a:	8b 83 98 00 00 00    	mov    eax,DWORD PTR [ebx+0x98]
100e3620:	8b ce                	mov    ecx,esi
100e3622:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
100e3625:	03 84 9e fc 21 00 00 	add    eax,DWORD PTR [esi+ebx*4+0x21fc]
100e362c:	50                   	push   eax
100e362d:	68 fc 72 1a 10       	push   0x101a72fc
100e3632:	e8 39 c9 ff ff       	call   0x100dff70
100e3637:	b9 a4 6f 1b 10       	mov    ecx,0x101b6fa4
100e363c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100e3640:	8a 11                	mov    dl,BYTE PTR [ecx]
100e3642:	3a 10                	cmp    dl,BYTE PTR [eax]
100e3644:	75 1a                	jne    0x100e3660
100e3646:	84 d2                	test   dl,dl
100e3648:	74 12                	je     0x100e365c
100e364a:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
100e364d:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
100e3650:	75 0e                	jne    0x100e3660
100e3652:	83 c1 02             	add    ecx,0x2
100e3655:	83 c0 02             	add    eax,0x2
100e3658:	84 d2                	test   dl,dl
100e365a:	75 e4                	jne    0x100e3640
100e365c:	33 c0                	xor    eax,eax
100e365e:	eb 05                	jmp    0x100e3665
100e3660:	1b c0                	sbb    eax,eax
100e3662:	83 c8 01             	or     eax,0x1
100e3665:	85 c0                	test   eax,eax
100e3667:	75 45                	jne    0x100e36ae
100e3669:	6a 64                	push   0x64
100e366b:	50                   	push   eax
100e366c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e366f:	83 ec 08             	sub    esp,0x8
100e3672:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100e3679:	3f 
100e367a:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100e3681:	68 98 87 1a 10       	push   0x101a8798
100e3686:	6a 03                	push   0x3
100e3688:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e368e:	e8 5d 93 01 00       	call   0x100fc9f0
100e3693:	6a 00                	push   0x0
100e3695:	6a 05                	push   0x5
100e3697:	68 fc c7 1d 10       	push   0x101dc7fc
100e369c:	56                   	push   esi
100e369d:	e8 6e 61 03 00       	call   0x10119810
100e36a2:	83 c4 2c             	add    esp,0x2c
100e36a5:	5f                   	pop    edi
100e36a6:	5b                   	pop    ebx
100e36a7:	5e                   	pop    esi
100e36a8:	8b e5                	mov    esp,ebp
100e36aa:	5d                   	pop    ebp
100e36ab:	c2 04 00             	ret    0x4
100e36ae:	6a 00                	push   0x0
100e36b0:	ff 15 68 30 22 10    	call   DWORD PTR ds:0x10223068
100e36b6:	83 c4 04             	add    esp,0x4
100e36b9:	85 c0                	test   eax,eax
100e36bb:	75 0e                	jne    0x100e36cb
100e36bd:	50                   	push   eax
100e36be:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
100e36c4:	83 c4 04             	add    esp,0x4
100e36c7:	85 c0                	test   eax,eax
100e36c9:	74 76                	je     0x100e3741
100e36cb:	8b 48 7c             	mov    ecx,DWORD PTR [eax+0x7c]
100e36ce:	85 c9                	test   ecx,ecx
100e36d0:	74 6f                	je     0x100e3741
100e36d2:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
100e36d5:	f6 81 a4 01 00 00 08 	test   BYTE PTR [ecx+0x1a4],0x8
100e36dc:	74 63                	je     0x100e3741
100e36de:	8b 89 f8 01 00 00    	mov    ecx,DWORD PTR [ecx+0x1f8]
100e36e4:	85 c9                	test   ecx,ecx
100e36e6:	74 0f                	je     0x100e36f7
100e36e8:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e36ed:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e36f3:	03 c1                	add    eax,ecx
100e36f5:	eb 05                	jmp    0x100e36fc
100e36f7:	b8 18 c8 1d 10       	mov    eax,0x101dc818
100e36fc:	6a 00                	push   0x0
100e36fe:	6a 05                	push   0x5
100e3700:	50                   	push   eax
100e3701:	56                   	push   esi
100e3702:	e8 09 61 03 00       	call   0x10119810
100e3707:	83 c4 10             	add    esp,0x10
100e370a:	6a 64                	push   0x64
100e370c:	6a 00                	push   0x0
100e370e:	83 ec 08             	sub    esp,0x8
100e3711:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100e3718:	3f 
100e3719:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100e3720:	68 98 87 1a 10       	push   0x101a8798
100e3725:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e3728:	6a 03                	push   0x3
100e372a:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e3730:	e8 bb 92 01 00       	call   0x100fc9f0
100e3735:	83 c4 1c             	add    esp,0x1c
100e3738:	5f                   	pop    edi
100e3739:	5b                   	pop    ebx
100e373a:	5e                   	pop    esi
100e373b:	8b e5                	mov    esp,ebp
100e373d:	5d                   	pop    ebp
100e373e:	c2 04 00             	ret    0x4
100e3741:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e3746:	8b ce                	mov    ecx,esi
100e3748:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e374e:	03 84 9e fc 21 00 00 	add    eax,DWORD PTR [esi+ebx*4+0x21fc]
100e3755:	50                   	push   eax
100e3756:	68 fc 72 1a 10       	push   0x101a72fc
100e375b:	e8 10 c8 ff ff       	call   0x100dff70
100e3760:	b9 cc e8 1a 10       	mov    ecx,0x101ae8cc
100e3765:	8a 11                	mov    dl,BYTE PTR [ecx]
100e3767:	3a 10                	cmp    dl,BYTE PTR [eax]
100e3769:	75 1a                	jne    0x100e3785
100e376b:	84 d2                	test   dl,dl
100e376d:	74 12                	je     0x100e3781
100e376f:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
100e3772:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
100e3775:	75 0e                	jne    0x100e3785
100e3777:	83 c1 02             	add    ecx,0x2
100e377a:	83 c0 02             	add    eax,0x2
100e377d:	84 d2                	test   dl,dl
100e377f:	75 e4                	jne    0x100e3765
100e3781:	33 c0                	xor    eax,eax
100e3783:	eb 05                	jmp    0x100e378a
100e3785:	1b c0                	sbb    eax,eax
100e3787:	83 c8 01             	or     eax,0x1
100e378a:	85 c0                	test   eax,eax
100e378c:	75 3e                	jne    0x100e37cc
100e378e:	6a 64                	push   0x64
100e3790:	50                   	push   eax
100e3791:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e3794:	83 ec 08             	sub    esp,0x8
100e3797:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100e379e:	3f 
100e379f:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100e37a6:	68 98 95 1a 10       	push   0x101a9598
100e37ab:	6a 03                	push   0x3
100e37ad:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e37b3:	e8 38 92 01 00       	call   0x100fc9f0
100e37b8:	83 c4 1c             	add    esp,0x1c
100e37bb:	8b ce                	mov    ecx,esi
100e37bd:	53                   	push   ebx
100e37be:	e8 cd a8 ff ff       	call   0x100de090
100e37c3:	5f                   	pop    edi
100e37c4:	5b                   	pop    ebx
100e37c5:	5e                   	pop    esi
100e37c6:	8b e5                	mov    esp,ebp
100e37c8:	5d                   	pop    ebp
100e37c9:	c2 04 00             	ret    0x4
100e37cc:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e37d1:	8b ce                	mov    ecx,esi
100e37d3:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e37d9:	03 84 9e fc 21 00 00 	add    eax,DWORD PTR [esi+ebx*4+0x21fc]
100e37e0:	50                   	push   eax
100e37e1:	68 fc 72 1a 10       	push   0x101a72fc
100e37e6:	e8 85 c7 ff ff       	call   0x100dff70
100e37eb:	b9 60 c8 1d 10       	mov    ecx,0x101dc860
100e37f0:	8a 11                	mov    dl,BYTE PTR [ecx]
100e37f2:	3a 10                	cmp    dl,BYTE PTR [eax]
100e37f4:	75 1a                	jne    0x100e3810
100e37f6:	84 d2                	test   dl,dl
100e37f8:	74 12                	je     0x100e380c
100e37fa:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
100e37fd:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
100e3800:	75 0e                	jne    0x100e3810
100e3802:	83 c1 02             	add    ecx,0x2
100e3805:	83 c0 02             	add    eax,0x2
100e3808:	84 d2                	test   dl,dl
100e380a:	75 e4                	jne    0x100e37f0
100e380c:	33 c0                	xor    eax,eax
100e380e:	eb 05                	jmp    0x100e3815
100e3810:	1b c0                	sbb    eax,eax
100e3812:	83 c8 01             	or     eax,0x1
100e3815:	8b ce                	mov    ecx,esi
100e3817:	85 c0                	test   eax,eax
100e3819:	75 59                	jne    0x100e3874
100e381b:	50                   	push   eax
100e381c:	53                   	push   ebx
100e381d:	e8 6e a1 ff ff       	call   0x100dd990
100e3822:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e3825:	6a 64                	push   0x64
100e3827:	6a 00                	push   0x0
100e3829:	83 ec 08             	sub    esp,0x8
100e382c:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100e3833:	3f 
100e3834:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100e383b:	68 98 95 1a 10       	push   0x101a9598
100e3840:	6a 03                	push   0x3
100e3842:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e3848:	e8 a3 91 01 00       	call   0x100fc9f0
100e384d:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100e3850:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
100e3856:	8d 41 50             	lea    eax,[ecx+0x50]
100e3859:	50                   	push   eax
100e385a:	8d 41 08             	lea    eax,[ecx+0x8]
100e385d:	50                   	push   eax
100e385e:	68 60 c8 1d 10       	push   0x101dc860
100e3863:	e8 e8 40 f3 ff       	call   0x10017950
100e3868:	83 c4 2c             	add    esp,0x2c
100e386b:	5f                   	pop    edi
100e386c:	5b                   	pop    ebx
100e386d:	5e                   	pop    esi
100e386e:	8b e5                	mov    esp,ebp
100e3870:	5d                   	pop    ebp
100e3871:	c2 04 00             	ret    0x4
100e3874:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e3879:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e387f:	03 84 9e fc 21 00 00 	add    eax,DWORD PTR [esi+ebx*4+0x21fc]
100e3886:	50                   	push   eax
100e3887:	68 fc 72 1a 10       	push   0x101a72fc
100e388c:	e8 df c6 ff ff       	call   0x100dff70
100e3891:	b9 74 c8 1d 10       	mov    ecx,0x101dc874
100e3896:	8a 11                	mov    dl,BYTE PTR [ecx]
100e3898:	3a 10                	cmp    dl,BYTE PTR [eax]
100e389a:	75 1a                	jne    0x100e38b6
100e389c:	84 d2                	test   dl,dl
100e389e:	74 12                	je     0x100e38b2
100e38a0:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
100e38a3:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
100e38a6:	75 0e                	jne    0x100e38b6
100e38a8:	83 c1 02             	add    ecx,0x2
100e38ab:	83 c0 02             	add    eax,0x2
100e38ae:	84 d2                	test   dl,dl
100e38b0:	75 e4                	jne    0x100e3896
100e38b2:	33 c0                	xor    eax,eax
100e38b4:	eb 05                	jmp    0x100e38bb
100e38b6:	1b c0                	sbb    eax,eax
100e38b8:	83 c8 01             	or     eax,0x1
100e38bb:	8b ce                	mov    ecx,esi
100e38bd:	85 c0                	test   eax,eax
100e38bf:	75 59                	jne    0x100e391a
100e38c1:	50                   	push   eax
100e38c2:	53                   	push   ebx
100e38c3:	e8 c8 a0 ff ff       	call   0x100dd990
100e38c8:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e38cb:	6a 64                	push   0x64
100e38cd:	6a 00                	push   0x0
100e38cf:	83 ec 08             	sub    esp,0x8
100e38d2:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100e38d9:	3f 
100e38da:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100e38e1:	68 98 95 1a 10       	push   0x101a9598
100e38e6:	6a 03                	push   0x3
100e38e8:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e38ee:	e8 fd 90 01 00       	call   0x100fc9f0
100e38f3:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100e38f6:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
100e38fc:	8d 41 50             	lea    eax,[ecx+0x50]
100e38ff:	50                   	push   eax
100e3900:	8d 41 08             	lea    eax,[ecx+0x8]
100e3903:	50                   	push   eax
100e3904:	68 74 c8 1d 10       	push   0x101dc874
100e3909:	e8 42 40 f3 ff       	call   0x10017950
100e390e:	83 c4 2c             	add    esp,0x2c
100e3911:	5f                   	pop    edi
100e3912:	5b                   	pop    ebx
100e3913:	5e                   	pop    esi
100e3914:	8b e5                	mov    esp,ebp
100e3916:	5d                   	pop    ebp
100e3917:	c2 04 00             	ret    0x4
100e391a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e391f:	6a 07                	push   0x7
100e3921:	68 90 87 1a 10       	push   0x101a8790
100e3926:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e392c:	03 84 9e fc 21 00 00 	add    eax,DWORD PTR [esi+ebx*4+0x21fc]
100e3933:	50                   	push   eax
100e3934:	68 fc 72 1a 10       	push   0x101a72fc
100e3939:	e8 32 c6 ff ff       	call   0x100dff70
100e393e:	50                   	push   eax
100e393f:	e8 3c bd 08 00       	call   0x1016f680
100e3944:	83 c4 0c             	add    esp,0xc
100e3947:	85 c0                	test   eax,eax
100e3949:	0f 85 bb fd ff ff    	jne    0x100e370a
100e394f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e3954:	68 bc c2 1a 10       	push   0x101ac2bc
100e3959:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e395f:	03 84 9e fc 21 00 00 	add    eax,DWORD PTR [esi+ebx*4+0x21fc]
100e3966:	50                   	push   eax
100e3967:	e8 84 bc 05 00       	call   0x1013f5f0
100e396c:	83 c4 08             	add    esp,0x8
100e396f:	85 c0                	test   eax,eax
100e3971:	0f 85 e1 01 00 00    	jne    0x100e3b58
100e3977:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e397c:	68 b8 8a 1a 10       	push   0x101a8ab8
100e3981:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e3987:	03 84 9e fc 21 00 00 	add    eax,DWORD PTR [esi+ebx*4+0x21fc]
100e398e:	50                   	push   eax
100e398f:	e8 5c bc 05 00       	call   0x1013f5f0
100e3994:	83 c4 08             	add    esp,0x8
100e3997:	85 c0                	test   eax,eax
100e3999:	0f 85 b9 01 00 00    	jne    0x100e3b58
100e399f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e39a4:	8b ce                	mov    ecx,esi
100e39a6:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e39ac:	03 84 9e fc 21 00 00 	add    eax,DWORD PTR [esi+ebx*4+0x21fc]
100e39b3:	50                   	push   eax
100e39b4:	68 fc 72 1a 10       	push   0x101a72fc
100e39b9:	e8 b2 c5 ff ff       	call   0x100dff70
100e39be:	8d 8e 4c 20 00 00    	lea    ecx,[esi+0x204c]
100e39c4:	8a 11                	mov    dl,BYTE PTR [ecx]
100e39c6:	3a 10                	cmp    dl,BYTE PTR [eax]
100e39c8:	75 1a                	jne    0x100e39e4
100e39ca:	84 d2                	test   dl,dl
100e39cc:	74 12                	je     0x100e39e0
100e39ce:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
100e39d1:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
100e39d4:	75 0e                	jne    0x100e39e4
100e39d6:	83 c1 02             	add    ecx,0x2
100e39d9:	83 c0 02             	add    eax,0x2
100e39dc:	84 d2                	test   dl,dl
100e39de:	75 e4                	jne    0x100e39c4
100e39e0:	33 c0                	xor    eax,eax
100e39e2:	eb 05                	jmp    0x100e39e9
100e39e4:	1b c0                	sbb    eax,eax
100e39e6:	83 c8 01             	or     eax,0x1
100e39e9:	85 c0                	test   eax,eax
100e39eb:	75 42                	jne    0x100e3a2f
100e39ed:	88 86 4c 20 00 00    	mov    BYTE PTR [esi+0x204c],al
100e39f3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e39f6:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e39fc:	6a 00                	push   0x0
100e39fe:	ff 35 34 66 22 10    	push   DWORD PTR ds:0x10226634
100e3a04:	6a 01                	push   0x1
100e3a06:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100e3a0c:	6a 01                	push   0x1
100e3a0e:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e3a14:	6a 00                	push   0x0
100e3a16:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e3a1c:	83 c4 18             	add    esp,0x18
100e3a1f:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100e3a25:	c7 86 dc 03 00 00 00 	mov    DWORD PTR [esi+0x3dc],0x0
100e3a2c:	00 00 00 
100e3a2f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e3a34:	8b ce                	mov    ecx,esi
100e3a36:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e3a3c:	03 84 9e fc 21 00 00 	add    eax,DWORD PTR [esi+ebx*4+0x21fc]
100e3a43:	50                   	push   eax
100e3a44:	68 fc 72 1a 10       	push   0x101a72fc
100e3a49:	e8 22 c5 ff ff       	call   0x100dff70
100e3a4e:	8d 8e cc 20 00 00    	lea    ecx,[esi+0x20cc]
100e3a54:	8a 11                	mov    dl,BYTE PTR [ecx]
100e3a56:	3a 10                	cmp    dl,BYTE PTR [eax]
100e3a58:	75 1a                	jne    0x100e3a74
100e3a5a:	84 d2                	test   dl,dl
100e3a5c:	74 12                	je     0x100e3a70
100e3a5e:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
100e3a61:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
100e3a64:	75 0e                	jne    0x100e3a74
100e3a66:	83 c1 02             	add    ecx,0x2
100e3a69:	83 c0 02             	add    eax,0x2
100e3a6c:	84 d2                	test   dl,dl
100e3a6e:	75 e4                	jne    0x100e3a54
100e3a70:	33 c0                	xor    eax,eax
100e3a72:	eb 05                	jmp    0x100e3a79
100e3a74:	1b c0                	sbb    eax,eax
100e3a76:	83 c8 01             	or     eax,0x1
100e3a79:	85 c0                	test   eax,eax
100e3a7b:	75 42                	jne    0x100e3abf
100e3a7d:	88 86 cc 20 00 00    	mov    BYTE PTR [esi+0x20cc],al
100e3a83:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e3a86:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e3a8c:	6a 00                	push   0x0
100e3a8e:	ff 35 34 66 22 10    	push   DWORD PTR ds:0x10226634
100e3a94:	6a 01                	push   0x1
100e3a96:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100e3a9c:	6a 02                	push   0x2
100e3a9e:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e3aa4:	6a 00                	push   0x0
100e3aa6:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e3aac:	83 c4 18             	add    esp,0x18
100e3aaf:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100e3ab5:	c7 86 e0 03 00 00 00 	mov    DWORD PTR [esi+0x3e0],0x0
100e3abc:	00 00 00 
100e3abf:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e3ac4:	8b ce                	mov    ecx,esi
100e3ac6:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e3acc:	03 84 9e fc 21 00 00 	add    eax,DWORD PTR [esi+ebx*4+0x21fc]
100e3ad3:	50                   	push   eax
100e3ad4:	68 fc 72 1a 10       	push   0x101a72fc
100e3ad9:	e8 92 c4 ff ff       	call   0x100dff70
100e3ade:	8d 8e 4c 21 00 00    	lea    ecx,[esi+0x214c]
100e3ae4:	8a 11                	mov    dl,BYTE PTR [ecx]
100e3ae6:	3a 10                	cmp    dl,BYTE PTR [eax]
100e3ae8:	75 1a                	jne    0x100e3b04
100e3aea:	84 d2                	test   dl,dl
100e3aec:	74 12                	je     0x100e3b00
100e3aee:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
100e3af1:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
100e3af4:	75 0e                	jne    0x100e3b04
100e3af6:	83 c1 02             	add    ecx,0x2
100e3af9:	83 c0 02             	add    eax,0x2
100e3afc:	84 d2                	test   dl,dl
100e3afe:	75 e4                	jne    0x100e3ae4
100e3b00:	33 c0                	xor    eax,eax
100e3b02:	eb 05                	jmp    0x100e3b09
100e3b04:	1b c0                	sbb    eax,eax
100e3b06:	83 c8 01             	or     eax,0x1
100e3b09:	85 c0                	test   eax,eax
100e3b0b:	0f 85 86 05 00 00    	jne    0x100e4097
100e3b11:	88 86 4c 21 00 00    	mov    BYTE PTR [esi+0x214c],al
100e3b17:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e3b1a:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e3b20:	6a 00                	push   0x0
100e3b22:	ff 35 34 66 22 10    	push   DWORD PTR ds:0x10226634
100e3b28:	6a 01                	push   0x1
100e3b2a:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100e3b30:	6a 03                	push   0x3
100e3b32:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e3b38:	6a 00                	push   0x0
100e3b3a:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e3b40:	83 c4 18             	add    esp,0x18
100e3b43:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100e3b49:	c7 86 e4 03 00 00 00 	mov    DWORD PTR [esi+0x3e4],0x0
100e3b50:	00 00 00 
100e3b53:	e9 3f 05 00 00       	jmp    0x100e4097
100e3b58:	8d 86 14 25 00 00    	lea    eax,[esi+0x2514]
100e3b5e:	b9 06 00 00 00       	mov    ecx,0x6
100e3b63:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100e3b66:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100e3b69:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100e3b70:	8b 38                	mov    edi,DWORD PTR [eax]
100e3b72:	89 7d 08             	mov    DWORD PTR [ebp+0x8],edi
100e3b75:	85 ff                	test   edi,edi
100e3b77:	0f 84 08 05 00 00    	je     0x100e4085
100e3b7d:	0f 1f 00             	nop    DWORD PTR [eax]
100e3b80:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e3b85:	68 bc c2 1a 10       	push   0x101ac2bc
100e3b8a:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e3b90:	03 84 9e fc 21 00 00 	add    eax,DWORD PTR [esi+ebx*4+0x21fc]
100e3b97:	50                   	push   eax
100e3b98:	e8 53 ba 05 00       	call   0x1013f5f0
100e3b9d:	83 c4 08             	add    esp,0x8
100e3ba0:	85 c0                	test   eax,eax
100e3ba2:	0f 84 76 02 00 00    	je     0x100e3e1e
100e3ba8:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e3bab:	ba bc c2 1a 10       	mov    edx,0x101ac2bc
100e3bb0:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
100e3bb6:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
100e3bbc:	f7 d9                	neg    ecx
100e3bbe:	1b c9                	sbb    ecx,ecx
100e3bc0:	23 c8                	and    ecx,eax
100e3bc2:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e3bc7:	8b 09                	mov    ecx,DWORD PTR [ecx]
100e3bc9:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100e3bcf:	90                   	nop
100e3bd0:	8a 01                	mov    al,BYTE PTR [ecx]
100e3bd2:	3a 02                	cmp    al,BYTE PTR [edx]
100e3bd4:	75 1a                	jne    0x100e3bf0
100e3bd6:	84 c0                	test   al,al
100e3bd8:	74 12                	je     0x100e3bec
100e3bda:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100e3bdd:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
100e3be0:	75 0e                	jne    0x100e3bf0
100e3be2:	83 c1 02             	add    ecx,0x2
100e3be5:	83 c2 02             	add    edx,0x2
100e3be8:	84 c0                	test   al,al
100e3bea:	75 e4                	jne    0x100e3bd0
100e3bec:	33 c0                	xor    eax,eax
100e3bee:	eb 05                	jmp    0x100e3bf5
100e3bf0:	1b c0                	sbb    eax,eax
100e3bf2:	83 c8 01             	or     eax,0x1
100e3bf5:	85 c0                	test   eax,eax
100e3bf7:	0f 85 21 02 00 00    	jne    0x100e3e1e
100e3bfd:	68 38 be 1b 10       	push   0x101bbe38
100e3c02:	e8 59 c2 ff ff       	call   0x100dfe60
100e3c07:	83 c4 04             	add    esp,0x4
100e3c0a:	83 bc 86 40 25 00 00 	cmp    DWORD PTR [esi+eax*4+0x2540],0x1
100e3c11:	01 
100e3c12:	0f 8f 06 02 00 00    	jg     0x100e3e1e
100e3c18:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100e3c1e:	85 c9                	test   ecx,ecx
100e3c20:	74 42                	je     0x100e3c64
100e3c22:	8b 01                	mov    eax,DWORD PTR [ecx]
100e3c24:	ff 50 20             	call   DWORD PTR [eax+0x20]
100e3c27:	85 c0                	test   eax,eax
100e3c29:	74 39                	je     0x100e3c64
100e3c2b:	6a 00                	push   0x0
100e3c2d:	6a 00                	push   0x0
100e3c2f:	ff 35 dc 66 22 10    	push   DWORD PTR ds:0x102266dc
100e3c35:	6a 02                	push   0x2
100e3c37:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100e3c3d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e3c40:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e3c46:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
100e3c4c:	50                   	push   eax
100e3c4d:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e3c53:	6a 00                	push   0x0
100e3c55:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e3c5b:	83 c4 1c             	add    esp,0x1c
100e3c5e:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100e3c64:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e3c69:	8b ce                	mov    ecx,esi
100e3c6b:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e3c71:	03 84 9e fc 21 00 00 	add    eax,DWORD PTR [esi+ebx*4+0x21fc]
100e3c78:	50                   	push   eax
100e3c79:	68 fc 72 1a 10       	push   0x101a72fc
100e3c7e:	e8 ed c2 ff ff       	call   0x100dff70
100e3c83:	8d 8e 4c 20 00 00    	lea    ecx,[esi+0x204c]
100e3c89:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100e3c90:	8a 11                	mov    dl,BYTE PTR [ecx]
100e3c92:	3a 10                	cmp    dl,BYTE PTR [eax]
100e3c94:	75 1a                	jne    0x100e3cb0
100e3c96:	84 d2                	test   dl,dl
100e3c98:	74 12                	je     0x100e3cac
100e3c9a:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
100e3c9d:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
100e3ca0:	75 0e                	jne    0x100e3cb0
100e3ca2:	83 c1 02             	add    ecx,0x2
100e3ca5:	83 c0 02             	add    eax,0x2
100e3ca8:	84 d2                	test   dl,dl
100e3caa:	75 e4                	jne    0x100e3c90
100e3cac:	33 c0                	xor    eax,eax
100e3cae:	eb 05                	jmp    0x100e3cb5
100e3cb0:	1b c0                	sbb    eax,eax
100e3cb2:	83 c8 01             	or     eax,0x1
100e3cb5:	85 c0                	test   eax,eax
100e3cb7:	75 42                	jne    0x100e3cfb
100e3cb9:	88 86 4c 20 00 00    	mov    BYTE PTR [esi+0x204c],al
100e3cbf:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e3cc2:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e3cc8:	6a 00                	push   0x0
100e3cca:	ff 35 34 66 22 10    	push   DWORD PTR ds:0x10226634
100e3cd0:	6a 01                	push   0x1
100e3cd2:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100e3cd8:	6a 01                	push   0x1
100e3cda:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e3ce0:	6a 00                	push   0x0
100e3ce2:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e3ce8:	83 c4 18             	add    esp,0x18
100e3ceb:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100e3cf1:	c7 86 dc 03 00 00 00 	mov    DWORD PTR [esi+0x3dc],0x0
100e3cf8:	00 00 00 
100e3cfb:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e3d00:	8b ce                	mov    ecx,esi
100e3d02:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e3d08:	03 84 9e fc 21 00 00 	add    eax,DWORD PTR [esi+ebx*4+0x21fc]
100e3d0f:	50                   	push   eax
100e3d10:	68 fc 72 1a 10       	push   0x101a72fc
100e3d15:	e8 56 c2 ff ff       	call   0x100dff70
100e3d1a:	8d 8e cc 20 00 00    	lea    ecx,[esi+0x20cc]
100e3d20:	8a 11                	mov    dl,BYTE PTR [ecx]
100e3d22:	3a 10                	cmp    dl,BYTE PTR [eax]
100e3d24:	75 1a                	jne    0x100e3d40
100e3d26:	84 d2                	test   dl,dl
100e3d28:	74 12                	je     0x100e3d3c
100e3d2a:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
100e3d2d:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
100e3d30:	75 0e                	jne    0x100e3d40
100e3d32:	83 c1 02             	add    ecx,0x2
100e3d35:	83 c0 02             	add    eax,0x2
100e3d38:	84 d2                	test   dl,dl
100e3d3a:	75 e4                	jne    0x100e3d20
100e3d3c:	33 c0                	xor    eax,eax
100e3d3e:	eb 05                	jmp    0x100e3d45
100e3d40:	1b c0                	sbb    eax,eax
100e3d42:	83 c8 01             	or     eax,0x1
100e3d45:	85 c0                	test   eax,eax
100e3d47:	75 42                	jne    0x100e3d8b
100e3d49:	88 86 cc 20 00 00    	mov    BYTE PTR [esi+0x20cc],al
100e3d4f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e3d52:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e3d58:	6a 00                	push   0x0
100e3d5a:	ff 35 34 66 22 10    	push   DWORD PTR ds:0x10226634
100e3d60:	6a 01                	push   0x1
100e3d62:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100e3d68:	6a 02                	push   0x2
100e3d6a:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e3d70:	6a 00                	push   0x0
100e3d72:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e3d78:	83 c4 18             	add    esp,0x18
100e3d7b:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100e3d81:	c7 86 e0 03 00 00 00 	mov    DWORD PTR [esi+0x3e0],0x0
100e3d88:	00 00 00 
100e3d8b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e3d90:	8b ce                	mov    ecx,esi
100e3d92:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e3d98:	03 84 9e fc 21 00 00 	add    eax,DWORD PTR [esi+ebx*4+0x21fc]
100e3d9f:	50                   	push   eax
100e3da0:	68 fc 72 1a 10       	push   0x101a72fc
100e3da5:	e8 c6 c1 ff ff       	call   0x100dff70
100e3daa:	8d 8e 4c 21 00 00    	lea    ecx,[esi+0x214c]
100e3db0:	8a 11                	mov    dl,BYTE PTR [ecx]
100e3db2:	3a 10                	cmp    dl,BYTE PTR [eax]
100e3db4:	75 1a                	jne    0x100e3dd0
100e3db6:	84 d2                	test   dl,dl
100e3db8:	74 12                	je     0x100e3dcc
100e3dba:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
100e3dbd:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
100e3dc0:	75 0e                	jne    0x100e3dd0
100e3dc2:	83 c1 02             	add    ecx,0x2
100e3dc5:	83 c0 02             	add    eax,0x2
100e3dc8:	84 d2                	test   dl,dl
100e3dca:	75 e4                	jne    0x100e3db0
100e3dcc:	33 c0                	xor    eax,eax
100e3dce:	eb 05                	jmp    0x100e3dd5
100e3dd0:	1b c0                	sbb    eax,eax
100e3dd2:	83 c8 01             	or     eax,0x1
100e3dd5:	85 c0                	test   eax,eax
100e3dd7:	75 42                	jne    0x100e3e1b
100e3dd9:	88 86 4c 21 00 00    	mov    BYTE PTR [esi+0x214c],al
100e3ddf:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e3de2:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e3de8:	6a 00                	push   0x0
100e3dea:	ff 35 34 66 22 10    	push   DWORD PTR ds:0x10226634
100e3df0:	6a 01                	push   0x1
100e3df2:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100e3df8:	6a 03                	push   0x3
100e3dfa:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e3e00:	6a 00                	push   0x0
100e3e02:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e3e08:	83 c4 18             	add    esp,0x18
100e3e0b:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100e3e11:	c7 86 e4 03 00 00 00 	mov    DWORD PTR [esi+0x3e4],0x0
100e3e18:	00 00 00 
100e3e1b:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100e3e1e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e3e23:	68 b8 8a 1a 10       	push   0x101a8ab8
100e3e28:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e3e2e:	03 84 9e fc 21 00 00 	add    eax,DWORD PTR [esi+ebx*4+0x21fc]
100e3e35:	50                   	push   eax
100e3e36:	e8 b5 b7 05 00       	call   0x1013f5f0
100e3e3b:	83 c4 08             	add    esp,0x8
100e3e3e:	85 c0                	test   eax,eax
100e3e40:	0f 84 28 02 00 00    	je     0x100e406e
100e3e46:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e3e49:	ba b8 8a 1a 10       	mov    edx,0x101a8ab8
100e3e4e:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
100e3e54:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
100e3e5a:	f7 d9                	neg    ecx
100e3e5c:	1b c9                	sbb    ecx,ecx
100e3e5e:	23 c8                	and    ecx,eax
100e3e60:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e3e65:	8b 09                	mov    ecx,DWORD PTR [ecx]
100e3e67:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100e3e6d:	0f 1f 00             	nop    DWORD PTR [eax]
100e3e70:	8a 01                	mov    al,BYTE PTR [ecx]
100e3e72:	3a 02                	cmp    al,BYTE PTR [edx]
100e3e74:	75 1a                	jne    0x100e3e90
100e3e76:	84 c0                	test   al,al
100e3e78:	74 12                	je     0x100e3e8c
100e3e7a:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100e3e7d:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
100e3e80:	75 0e                	jne    0x100e3e90
100e3e82:	83 c1 02             	add    ecx,0x2
100e3e85:	83 c2 02             	add    edx,0x2
100e3e88:	84 c0                	test   al,al
100e3e8a:	75 e4                	jne    0x100e3e70
100e3e8c:	33 c0                	xor    eax,eax
100e3e8e:	eb 05                	jmp    0x100e3e95
100e3e90:	1b c0                	sbb    eax,eax
100e3e92:	83 c8 01             	or     eax,0x1
100e3e95:	85 c0                	test   eax,eax
100e3e97:	0f 85 d1 01 00 00    	jne    0x100e406e
100e3e9d:	68 7c f1 1a 10       	push   0x101af17c
100e3ea2:	e8 b9 bf ff ff       	call   0x100dfe60
100e3ea7:	83 c4 04             	add    esp,0x4
100e3eaa:	83 bc 86 40 25 00 00 	cmp    DWORD PTR [esi+eax*4+0x2540],0x1
100e3eb1:	01 
100e3eb2:	0f 8f b6 01 00 00    	jg     0x100e406e
100e3eb8:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e3ebd:	8b ce                	mov    ecx,esi
100e3ebf:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e3ec5:	03 84 9e fc 21 00 00 	add    eax,DWORD PTR [esi+ebx*4+0x21fc]
100e3ecc:	50                   	push   eax
100e3ecd:	68 fc 72 1a 10       	push   0x101a72fc
100e3ed2:	e8 99 c0 ff ff       	call   0x100dff70
100e3ed7:	8d 8e 4c 20 00 00    	lea    ecx,[esi+0x204c]
100e3edd:	0f 1f 00             	nop    DWORD PTR [eax]
100e3ee0:	8a 11                	mov    dl,BYTE PTR [ecx]
100e3ee2:	3a 10                	cmp    dl,BYTE PTR [eax]
100e3ee4:	75 1a                	jne    0x100e3f00
100e3ee6:	84 d2                	test   dl,dl
100e3ee8:	74 12                	je     0x100e3efc
100e3eea:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
100e3eed:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
100e3ef0:	75 0e                	jne    0x100e3f00
100e3ef2:	83 c1 02             	add    ecx,0x2
100e3ef5:	83 c0 02             	add    eax,0x2
100e3ef8:	84 d2                	test   dl,dl
100e3efa:	75 e4                	jne    0x100e3ee0
100e3efc:	33 c0                	xor    eax,eax
100e3efe:	eb 05                	jmp    0x100e3f05
100e3f00:	1b c0                	sbb    eax,eax
100e3f02:	83 c8 01             	or     eax,0x1
100e3f05:	85 c0                	test   eax,eax
100e3f07:	75 42                	jne    0x100e3f4b
100e3f09:	88 86 4c 20 00 00    	mov    BYTE PTR [esi+0x204c],al
100e3f0f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e3f12:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e3f18:	6a 00                	push   0x0
100e3f1a:	ff 35 34 66 22 10    	push   DWORD PTR ds:0x10226634
100e3f20:	6a 01                	push   0x1
100e3f22:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100e3f28:	6a 01                	push   0x1
100e3f2a:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e3f30:	6a 00                	push   0x0
100e3f32:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e3f38:	83 c4 18             	add    esp,0x18
100e3f3b:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100e3f41:	c7 86 dc 03 00 00 00 	mov    DWORD PTR [esi+0x3dc],0x0
100e3f48:	00 00 00 
100e3f4b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e3f50:	8b ce                	mov    ecx,esi
100e3f52:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e3f58:	03 84 9e fc 21 00 00 	add    eax,DWORD PTR [esi+ebx*4+0x21fc]
100e3f5f:	50                   	push   eax
100e3f60:	68 fc 72 1a 10       	push   0x101a72fc
100e3f65:	e8 06 c0 ff ff       	call   0x100dff70
100e3f6a:	8d 8e cc 20 00 00    	lea    ecx,[esi+0x20cc]
100e3f70:	8a 11                	mov    dl,BYTE PTR [ecx]
100e3f72:	3a 10                	cmp    dl,BYTE PTR [eax]
100e3f74:	75 1a                	jne    0x100e3f90
100e3f76:	84 d2                	test   dl,dl
100e3f78:	74 12                	je     0x100e3f8c
100e3f7a:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
100e3f7d:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
100e3f80:	75 0e                	jne    0x100e3f90
100e3f82:	83 c1 02             	add    ecx,0x2
100e3f85:	83 c0 02             	add    eax,0x2
100e3f88:	84 d2                	test   dl,dl
100e3f8a:	75 e4                	jne    0x100e3f70
100e3f8c:	33 c0                	xor    eax,eax
100e3f8e:	eb 05                	jmp    0x100e3f95
100e3f90:	1b c0                	sbb    eax,eax
100e3f92:	83 c8 01             	or     eax,0x1
100e3f95:	85 c0                	test   eax,eax
100e3f97:	75 42                	jne    0x100e3fdb
100e3f99:	88 86 cc 20 00 00    	mov    BYTE PTR [esi+0x20cc],al
100e3f9f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e3fa2:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e3fa8:	6a 00                	push   0x0
100e3faa:	ff 35 34 66 22 10    	push   DWORD PTR ds:0x10226634
100e3fb0:	6a 01                	push   0x1
100e3fb2:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100e3fb8:	6a 02                	push   0x2
100e3fba:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e3fc0:	6a 00                	push   0x0
100e3fc2:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e3fc8:	83 c4 18             	add    esp,0x18
100e3fcb:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100e3fd1:	c7 86 e0 03 00 00 00 	mov    DWORD PTR [esi+0x3e0],0x0
100e3fd8:	00 00 00 
100e3fdb:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e3fe0:	8b ce                	mov    ecx,esi
100e3fe2:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e3fe8:	03 84 9e fc 21 00 00 	add    eax,DWORD PTR [esi+ebx*4+0x21fc]
100e3fef:	50                   	push   eax
100e3ff0:	68 fc 72 1a 10       	push   0x101a72fc
100e3ff5:	e8 76 bf ff ff       	call   0x100dff70
100e3ffa:	8d 8e 4c 21 00 00    	lea    ecx,[esi+0x214c]
100e4000:	8a 11                	mov    dl,BYTE PTR [ecx]
100e4002:	3a 10                	cmp    dl,BYTE PTR [eax]
100e4004:	75 1a                	jne    0x100e4020
100e4006:	84 d2                	test   dl,dl
100e4008:	74 12                	je     0x100e401c
100e400a:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
100e400d:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
100e4010:	75 0e                	jne    0x100e4020
100e4012:	83 c1 02             	add    ecx,0x2
100e4015:	83 c0 02             	add    eax,0x2
100e4018:	84 d2                	test   dl,dl
100e401a:	75 e4                	jne    0x100e4000
100e401c:	33 c0                	xor    eax,eax
100e401e:	eb 05                	jmp    0x100e4025
100e4020:	1b c0                	sbb    eax,eax
100e4022:	83 c8 01             	or     eax,0x1
100e4025:	85 c0                	test   eax,eax
100e4027:	75 42                	jne    0x100e406b
100e4029:	88 86 4c 21 00 00    	mov    BYTE PTR [esi+0x214c],al
100e402f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e4032:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e4038:	6a 00                	push   0x0
100e403a:	ff 35 34 66 22 10    	push   DWORD PTR ds:0x10226634
100e4040:	6a 01                	push   0x1
100e4042:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100e4048:	6a 03                	push   0x3
100e404a:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e4050:	6a 00                	push   0x0
100e4052:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e4058:	83 c4 18             	add    esp,0x18
100e405b:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100e4061:	c7 86 e4 03 00 00 00 	mov    DWORD PTR [esi+0x3e4],0x0
100e4068:	00 00 00 
100e406b:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100e406e:	8b bf 64 01 00 00    	mov    edi,DWORD PTR [edi+0x164]
100e4074:	89 7d 08             	mov    DWORD PTR [ebp+0x8],edi
100e4077:	85 ff                	test   edi,edi
100e4079:	0f 85 01 fb ff ff    	jne    0x100e3b80
100e407f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100e4082:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
100e4085:	83 c0 04             	add    eax,0x4
100e4088:	83 e9 01             	sub    ecx,0x1
100e408b:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100e408e:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100e4091:	0f 85 d9 fa ff ff    	jne    0x100e3b70
100e4097:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e409c:	8b ce                	mov    ecx,esi
100e409e:	53                   	push   ebx
100e409f:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e40a5:	03 84 9e fc 21 00 00 	add    eax,DWORD PTR [esi+ebx*4+0x21fc]
100e40ac:	50                   	push   eax
100e40ad:	68 fc 72 1a 10       	push   0x101a72fc
100e40b2:	e8 b9 be ff ff       	call   0x100dff70
100e40b7:	50                   	push   eax
100e40b8:	8b ce                	mov    ecx,esi
100e40ba:	e8 b1 a0 ff ff       	call   0x100de170
100e40bf:	6a 64                	push   0x64
100e40c1:	6a 00                	push   0x0
100e40c3:	83 ec 08             	sub    esp,0x8
100e40c6:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100e40cd:	3f 
100e40ce:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100e40d5:	68 98 95 1a 10       	push   0x101a9598
100e40da:	e9 46 f6 ff ff       	jmp    0x100e3725
