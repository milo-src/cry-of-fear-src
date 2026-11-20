
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1001f4f0 <.text+0x1e4f0>:
1001f4f0:	55                   	push   ebp
1001f4f1:	8b ec                	mov    ebp,esp
1001f4f3:	83 ec 10             	sub    esp,0x10
1001f4f6:	53                   	push   ebx
1001f4f7:	56                   	push   esi
1001f4f8:	57                   	push   edi
1001f4f9:	51                   	push   ecx
1001f4fa:	8b f1                	mov    esi,ecx
1001f4fc:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1001f503:	e8 98 f8 fe ff       	call   0x1000eda0
1001f508:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
1001f50b:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
1001f510:	51                   	push   ecx
1001f511:	8b ce                	mov    ecx,esi
1001f513:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1001f518:	e8 d3 f0 fe ff       	call   0x1000e5f0
1001f51d:	8b 86 04 02 00 00    	mov    eax,DWORD PTR [esi+0x204]
1001f523:	8b 3d 9c 11 1a 10    	mov    edi,DWORD PTR ds:0x101a119c
1001f529:	85 c0                	test   eax,eax
1001f52b:	74 18                	je     0x1001f545
1001f52d:	50                   	push   eax
1001f52e:	ff d7                	call   edi
1001f530:	66 0f ba e0 0f       	bt     ax,0xf
1001f535:	0f 82 e8 05 00 00    	jb     0x1001fb23
1001f53b:	c7 86 04 02 00 00 00 	mov    DWORD PTR [esi+0x204],0x0
1001f542:	00 00 00 
1001f545:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001f548:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
1001f54e:	83 b8 4c 02 00 00 00 	cmp    DWORD PTR [eax+0x24c],0x0
1001f555:	0f 84 93 00 00 00    	je     0x1001f5ee
1001f55b:	f3 0f 10 01          	movss  xmm0,DWORD PTR [ecx]
1001f55f:	0f 2f 80 5c 02 00 00 	comiss xmm0,DWORD PTR [eax+0x25c]
1001f566:	0f 82 82 00 00 00    	jb     0x1001f5ee
1001f56c:	8b 8e 00 02 00 00    	mov    ecx,DWORD PTR [esi+0x200]
1001f572:	6a 00                	push   0x0
1001f574:	81 c1 c0 05 00 00    	add    ecx,0x5c0
1001f57a:	e8 c1 81 ff ff       	call   0x10017740
1001f57f:	8b 8e 00 02 00 00    	mov    ecx,DWORD PTR [esi+0x200]
1001f585:	6a 00                	push   0x0
1001f587:	81 c1 88 03 00 00    	add    ecx,0x388
1001f58d:	e8 ae 81 ff ff       	call   0x10017740
1001f592:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001f595:	c7 80 14 01 00 00 00 	mov    DWORD PTR [eax+0x114],0x0
1001f59c:	00 00 00 
1001f59f:	8b 86 00 02 00 00    	mov    eax,DWORD PTR [esi+0x200]
1001f5a5:	c7 80 a0 1e 00 00 00 	mov    DWORD PTR [eax+0x1ea0],0x0
1001f5ac:	00 00 00 
1001f5af:	8b 86 00 02 00 00    	mov    eax,DWORD PTR [esi+0x200]
1001f5b5:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1001f5b8:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1001f5be:	6a 00                	push   0x0
1001f5c0:	ff 35 4c 66 22 10    	push   DWORD PTR ds:0x1022664c
1001f5c6:	6a 01                	push   0x1
1001f5c8:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1001f5ce:	6a 00                	push   0x0
1001f5d0:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
1001f5d6:	6a 00                	push   0x0
1001f5d8:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1001f5de:	83 c4 18             	add    esp,0x18
1001f5e1:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
1001f5e7:	5f                   	pop    edi
1001f5e8:	5e                   	pop    esi
1001f5e9:	5b                   	pop    ebx
1001f5ea:	8b e5                	mov    esp,ebp
1001f5ec:	5d                   	pop    ebp
1001f5ed:	c3                   	ret
1001f5ee:	f3 0f 10 01          	movss  xmm0,DWORD PTR [ecx]
1001f5f2:	0f 2f 80 58 02 00 00 	comiss xmm0,DWORD PTR [eax+0x258]
1001f5f9:	0f 82 24 05 00 00    	jb     0x1001fb23
1001f5ff:	6a 0d                	push   0xd
1001f601:	ff d7                	call   edi
1001f603:	66 0f ba e0 0f       	bt     ax,0xf
1001f608:	72 0b                	jb     0x1001f615
1001f60a:	6a 1b                	push   0x1b
1001f60c:	ff d7                	call   edi
1001f60e:	66 0f ba e0 0f       	bt     ax,0xf
1001f613:	73 35                	jae    0x1001f64a
1001f615:	68 ac 98 1a 10       	push   0x101a98ac
1001f61a:	8b ce                	mov    ecx,esi
1001f61c:	e8 4f 08 00 00       	call   0x1001fe70
1001f621:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001f624:	c7 80 4c 02 00 00 01 	mov    DWORD PTR [eax+0x24c],0x1
1001f62b:	00 00 00 
1001f62e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001f633:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1001f637:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
1001f63e:	10 
1001f63f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001f642:	f3 0f 11 80 5c 02 00 	movss  DWORD PTR [eax+0x25c],xmm0
1001f649:	00 
1001f64a:	6a 61                	push   0x61
1001f64c:	ff d7                	call   edi
1001f64e:	66 0f ba e0 0f       	bt     ax,0xf
1001f653:	f2 0f 10 05 10 1e 1a 	movsd  xmm0,QWORD PTR ds:0x101a1e10
1001f65a:	10 
1001f65b:	f2 0f 11 45 f8       	movsd  QWORD PTR [ebp-0x8],xmm0
1001f660:	f2 0f 10 05 00 99 1a 	movsd  xmm0,QWORD PTR ds:0x101a9900
1001f667:	10 
1001f668:	f2 0f 11 45 f0       	movsd  QWORD PTR [ebp-0x10],xmm0
1001f66d:	72 0b                	jb     0x1001f67a
1001f66f:	6a 31                	push   0x31
1001f671:	ff d7                	call   edi
1001f673:	66 0f ba e0 0f       	bt     ax,0xf
1001f678:	73 71                	jae    0x1001f6eb
1001f67a:	68 b8 98 1a 10       	push   0x101a98b8
1001f67f:	8b ce                	mov    ecx,esi
1001f681:	e8 ea 07 00 00       	call   0x1001fe70
1001f686:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001f68b:	6a 61                	push   0x61
1001f68d:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1001f691:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001f694:	0f 5a c0             	cvtps2pd xmm0,xmm0
1001f697:	f2 0f 58 45 f8       	addsd  xmm0,QWORD PTR [ebp-0x8]
1001f69c:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1001f6a0:	f3 0f 11 80 58 02 00 	movss  DWORD PTR [eax+0x258],xmm0
1001f6a7:	00 
1001f6a8:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001f6ad:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1001f6b1:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001f6b4:	0f 5a c0             	cvtps2pd xmm0,xmm0
1001f6b7:	f2 0f 58 45 f0       	addsd  xmm0,QWORD PTR [ebp-0x10]
1001f6bc:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1001f6c0:	f3 0f 11 80 5c 02 00 	movss  DWORD PTR [eax+0x25c],xmm0
1001f6c7:	00 
1001f6c8:	ff d7                	call   edi
1001f6ca:	66 0f ba e0 0f       	bt     ax,0xf
1001f6cf:	b9 31 00 00 00       	mov    ecx,0x31
1001f6d4:	b8 61 00 00 00       	mov    eax,0x61
1001f6d9:	0f 43 c1             	cmovae eax,ecx
1001f6dc:	8b ce                	mov    ecx,esi
1001f6de:	6a 01                	push   0x1
1001f6e0:	89 86 04 02 00 00    	mov    DWORD PTR [esi+0x204],eax
1001f6e6:	e8 15 fb ff ff       	call   0x1001f200
1001f6eb:	6a 62                	push   0x62
1001f6ed:	ff d7                	call   edi
1001f6ef:	66 0f ba e0 0f       	bt     ax,0xf
1001f6f4:	72 0b                	jb     0x1001f701
1001f6f6:	6a 32                	push   0x32
1001f6f8:	ff d7                	call   edi
1001f6fa:	66 0f ba e0 0f       	bt     ax,0xf
1001f6ff:	73 71                	jae    0x1001f772
1001f701:	68 c0 98 1a 10       	push   0x101a98c0
1001f706:	8b ce                	mov    ecx,esi
1001f708:	e8 63 07 00 00       	call   0x1001fe70
1001f70d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001f712:	6a 62                	push   0x62
1001f714:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1001f718:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001f71b:	0f 5a c0             	cvtps2pd xmm0,xmm0
1001f71e:	f2 0f 58 45 f8       	addsd  xmm0,QWORD PTR [ebp-0x8]
1001f723:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1001f727:	f3 0f 11 80 58 02 00 	movss  DWORD PTR [eax+0x258],xmm0
1001f72e:	00 
1001f72f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001f734:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1001f738:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001f73b:	0f 5a c0             	cvtps2pd xmm0,xmm0
1001f73e:	f2 0f 58 45 f0       	addsd  xmm0,QWORD PTR [ebp-0x10]
1001f743:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1001f747:	f3 0f 11 80 5c 02 00 	movss  DWORD PTR [eax+0x25c],xmm0
1001f74e:	00 
1001f74f:	ff d7                	call   edi
1001f751:	66 0f ba e0 0f       	bt     ax,0xf
1001f756:	b9 32 00 00 00       	mov    ecx,0x32
1001f75b:	b8 62 00 00 00       	mov    eax,0x62
1001f760:	0f 43 c1             	cmovae eax,ecx
1001f763:	8b ce                	mov    ecx,esi
1001f765:	6a 02                	push   0x2
1001f767:	89 86 04 02 00 00    	mov    DWORD PTR [esi+0x204],eax
1001f76d:	e8 8e fa ff ff       	call   0x1001f200
1001f772:	6a 63                	push   0x63
1001f774:	ff d7                	call   edi
1001f776:	66 0f ba e0 0f       	bt     ax,0xf
1001f77b:	72 0b                	jb     0x1001f788
1001f77d:	6a 33                	push   0x33
1001f77f:	ff d7                	call   edi
1001f781:	66 0f ba e0 0f       	bt     ax,0xf
1001f786:	73 71                	jae    0x1001f7f9
1001f788:	68 c8 98 1a 10       	push   0x101a98c8
1001f78d:	8b ce                	mov    ecx,esi
1001f78f:	e8 dc 06 00 00       	call   0x1001fe70
1001f794:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001f799:	6a 63                	push   0x63
1001f79b:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1001f79f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001f7a2:	0f 5a c0             	cvtps2pd xmm0,xmm0
1001f7a5:	f2 0f 58 45 f8       	addsd  xmm0,QWORD PTR [ebp-0x8]
1001f7aa:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1001f7ae:	f3 0f 11 80 58 02 00 	movss  DWORD PTR [eax+0x258],xmm0
1001f7b5:	00 
1001f7b6:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001f7bb:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1001f7bf:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001f7c2:	0f 5a c0             	cvtps2pd xmm0,xmm0
1001f7c5:	f2 0f 58 45 f0       	addsd  xmm0,QWORD PTR [ebp-0x10]
1001f7ca:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1001f7ce:	f3 0f 11 80 5c 02 00 	movss  DWORD PTR [eax+0x25c],xmm0
1001f7d5:	00 
1001f7d6:	ff d7                	call   edi
1001f7d8:	66 0f ba e0 0f       	bt     ax,0xf
1001f7dd:	b9 33 00 00 00       	mov    ecx,0x33
1001f7e2:	b8 63 00 00 00       	mov    eax,0x63
1001f7e7:	0f 43 c1             	cmovae eax,ecx
1001f7ea:	8b ce                	mov    ecx,esi
1001f7ec:	6a 03                	push   0x3
1001f7ee:	89 86 04 02 00 00    	mov    DWORD PTR [esi+0x204],eax
1001f7f4:	e8 07 fa ff ff       	call   0x1001f200
1001f7f9:	6a 64                	push   0x64
1001f7fb:	ff d7                	call   edi
1001f7fd:	66 0f ba e0 0f       	bt     ax,0xf
1001f802:	72 0b                	jb     0x1001f80f
1001f804:	6a 34                	push   0x34
1001f806:	ff d7                	call   edi
1001f808:	66 0f ba e0 0f       	bt     ax,0xf
1001f80d:	73 71                	jae    0x1001f880
1001f80f:	68 d0 98 1a 10       	push   0x101a98d0
1001f814:	8b ce                	mov    ecx,esi
1001f816:	e8 55 06 00 00       	call   0x1001fe70
1001f81b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001f820:	6a 64                	push   0x64
1001f822:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1001f826:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001f829:	0f 5a c0             	cvtps2pd xmm0,xmm0
1001f82c:	f2 0f 58 45 f8       	addsd  xmm0,QWORD PTR [ebp-0x8]
1001f831:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1001f835:	f3 0f 11 80 58 02 00 	movss  DWORD PTR [eax+0x258],xmm0
1001f83c:	00 
1001f83d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001f842:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1001f846:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001f849:	0f 5a c0             	cvtps2pd xmm0,xmm0
1001f84c:	f2 0f 58 45 f0       	addsd  xmm0,QWORD PTR [ebp-0x10]
1001f851:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1001f855:	f3 0f 11 80 5c 02 00 	movss  DWORD PTR [eax+0x25c],xmm0
1001f85c:	00 
1001f85d:	ff d7                	call   edi
1001f85f:	66 0f ba e0 0f       	bt     ax,0xf
1001f864:	b9 34 00 00 00       	mov    ecx,0x34
1001f869:	b8 64 00 00 00       	mov    eax,0x64
1001f86e:	0f 43 c1             	cmovae eax,ecx
1001f871:	8b ce                	mov    ecx,esi
1001f873:	6a 04                	push   0x4
1001f875:	89 86 04 02 00 00    	mov    DWORD PTR [esi+0x204],eax
1001f87b:	e8 80 f9 ff ff       	call   0x1001f200
1001f880:	6a 65                	push   0x65
1001f882:	ff d7                	call   edi
1001f884:	66 0f ba e0 0f       	bt     ax,0xf
1001f889:	72 0b                	jb     0x1001f896
1001f88b:	6a 35                	push   0x35
1001f88d:	ff d7                	call   edi
1001f88f:	66 0f ba e0 0f       	bt     ax,0xf
1001f894:	73 71                	jae    0x1001f907
1001f896:	68 d8 98 1a 10       	push   0x101a98d8
1001f89b:	8b ce                	mov    ecx,esi
1001f89d:	e8 ce 05 00 00       	call   0x1001fe70
1001f8a2:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001f8a7:	6a 65                	push   0x65
1001f8a9:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1001f8ad:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001f8b0:	0f 5a c0             	cvtps2pd xmm0,xmm0
1001f8b3:	f2 0f 58 45 f8       	addsd  xmm0,QWORD PTR [ebp-0x8]
1001f8b8:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1001f8bc:	f3 0f 11 80 58 02 00 	movss  DWORD PTR [eax+0x258],xmm0
1001f8c3:	00 
1001f8c4:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001f8c9:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1001f8cd:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001f8d0:	0f 5a c0             	cvtps2pd xmm0,xmm0
1001f8d3:	f2 0f 58 45 f0       	addsd  xmm0,QWORD PTR [ebp-0x10]
1001f8d8:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1001f8dc:	f3 0f 11 80 5c 02 00 	movss  DWORD PTR [eax+0x25c],xmm0
1001f8e3:	00 
1001f8e4:	ff d7                	call   edi
1001f8e6:	66 0f ba e0 0f       	bt     ax,0xf
1001f8eb:	b9 35 00 00 00       	mov    ecx,0x35
1001f8f0:	b8 65 00 00 00       	mov    eax,0x65
1001f8f5:	0f 43 c1             	cmovae eax,ecx
1001f8f8:	8b ce                	mov    ecx,esi
1001f8fa:	6a 05                	push   0x5
1001f8fc:	89 86 04 02 00 00    	mov    DWORD PTR [esi+0x204],eax
1001f902:	e8 f9 f8 ff ff       	call   0x1001f200
1001f907:	6a 66                	push   0x66
1001f909:	ff d7                	call   edi
1001f90b:	66 0f ba e0 0f       	bt     ax,0xf
1001f910:	72 0b                	jb     0x1001f91d
1001f912:	6a 36                	push   0x36
1001f914:	ff d7                	call   edi
1001f916:	66 0f ba e0 0f       	bt     ax,0xf
1001f91b:	73 71                	jae    0x1001f98e
1001f91d:	68 e0 98 1a 10       	push   0x101a98e0
1001f922:	8b ce                	mov    ecx,esi
1001f924:	e8 47 05 00 00       	call   0x1001fe70
1001f929:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001f92e:	6a 66                	push   0x66
1001f930:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1001f934:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001f937:	0f 5a c0             	cvtps2pd xmm0,xmm0
1001f93a:	f2 0f 58 45 f8       	addsd  xmm0,QWORD PTR [ebp-0x8]
1001f93f:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1001f943:	f3 0f 11 80 58 02 00 	movss  DWORD PTR [eax+0x258],xmm0
1001f94a:	00 
1001f94b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001f950:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1001f954:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001f957:	0f 5a c0             	cvtps2pd xmm0,xmm0
1001f95a:	f2 0f 58 45 f0       	addsd  xmm0,QWORD PTR [ebp-0x10]
1001f95f:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1001f963:	f3 0f 11 80 5c 02 00 	movss  DWORD PTR [eax+0x25c],xmm0
1001f96a:	00 
1001f96b:	ff d7                	call   edi
1001f96d:	66 0f ba e0 0f       	bt     ax,0xf
1001f972:	b9 36 00 00 00       	mov    ecx,0x36
1001f977:	b8 66 00 00 00       	mov    eax,0x66
1001f97c:	0f 43 c1             	cmovae eax,ecx
1001f97f:	8b ce                	mov    ecx,esi
1001f981:	6a 06                	push   0x6
1001f983:	89 86 04 02 00 00    	mov    DWORD PTR [esi+0x204],eax
1001f989:	e8 72 f8 ff ff       	call   0x1001f200
1001f98e:	6a 67                	push   0x67
1001f990:	ff d7                	call   edi
1001f992:	66 0f ba e0 0f       	bt     ax,0xf
1001f997:	72 0b                	jb     0x1001f9a4
1001f999:	6a 37                	push   0x37
1001f99b:	ff d7                	call   edi
1001f99d:	66 0f ba e0 0f       	bt     ax,0xf
1001f9a2:	73 71                	jae    0x1001fa15
1001f9a4:	68 e8 98 1a 10       	push   0x101a98e8
1001f9a9:	8b ce                	mov    ecx,esi
1001f9ab:	e8 c0 04 00 00       	call   0x1001fe70
1001f9b0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001f9b5:	6a 67                	push   0x67
1001f9b7:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1001f9bb:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001f9be:	0f 5a c0             	cvtps2pd xmm0,xmm0
1001f9c1:	f2 0f 58 45 f8       	addsd  xmm0,QWORD PTR [ebp-0x8]
1001f9c6:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1001f9ca:	f3 0f 11 80 58 02 00 	movss  DWORD PTR [eax+0x258],xmm0
1001f9d1:	00 
1001f9d2:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001f9d7:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1001f9db:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001f9de:	0f 5a c0             	cvtps2pd xmm0,xmm0
1001f9e1:	f2 0f 58 45 f0       	addsd  xmm0,QWORD PTR [ebp-0x10]
1001f9e6:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1001f9ea:	f3 0f 11 80 5c 02 00 	movss  DWORD PTR [eax+0x25c],xmm0
1001f9f1:	00 
1001f9f2:	ff d7                	call   edi
1001f9f4:	66 0f ba e0 0f       	bt     ax,0xf
1001f9f9:	b9 37 00 00 00       	mov    ecx,0x37
1001f9fe:	b8 67 00 00 00       	mov    eax,0x67
1001fa03:	0f 43 c1             	cmovae eax,ecx
1001fa06:	8b ce                	mov    ecx,esi
1001fa08:	6a 07                	push   0x7
1001fa0a:	89 86 04 02 00 00    	mov    DWORD PTR [esi+0x204],eax
1001fa10:	e8 eb f7 ff ff       	call   0x1001f200
1001fa15:	6a 68                	push   0x68
1001fa17:	ff d7                	call   edi
1001fa19:	66 0f ba e0 0f       	bt     ax,0xf
1001fa1e:	72 0b                	jb     0x1001fa2b
1001fa20:	6a 38                	push   0x38
1001fa22:	ff d7                	call   edi
1001fa24:	66 0f ba e0 0f       	bt     ax,0xf
1001fa29:	73 71                	jae    0x1001fa9c
1001fa2b:	68 f0 98 1a 10       	push   0x101a98f0
1001fa30:	8b ce                	mov    ecx,esi
1001fa32:	e8 39 04 00 00       	call   0x1001fe70
1001fa37:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001fa3c:	6a 68                	push   0x68
1001fa3e:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1001fa42:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001fa45:	0f 5a c0             	cvtps2pd xmm0,xmm0
1001fa48:	f2 0f 58 45 f8       	addsd  xmm0,QWORD PTR [ebp-0x8]
1001fa4d:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1001fa51:	f3 0f 11 80 58 02 00 	movss  DWORD PTR [eax+0x258],xmm0
1001fa58:	00 
1001fa59:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001fa5e:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1001fa62:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001fa65:	0f 5a c0             	cvtps2pd xmm0,xmm0
1001fa68:	f2 0f 58 45 f0       	addsd  xmm0,QWORD PTR [ebp-0x10]
1001fa6d:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1001fa71:	f3 0f 11 80 5c 02 00 	movss  DWORD PTR [eax+0x25c],xmm0
1001fa78:	00 
1001fa79:	ff d7                	call   edi
1001fa7b:	66 0f ba e0 0f       	bt     ax,0xf
1001fa80:	b9 38 00 00 00       	mov    ecx,0x38
1001fa85:	b8 68 00 00 00       	mov    eax,0x68
1001fa8a:	0f 43 c1             	cmovae eax,ecx
1001fa8d:	8b ce                	mov    ecx,esi
1001fa8f:	6a 08                	push   0x8
1001fa91:	89 86 04 02 00 00    	mov    DWORD PTR [esi+0x204],eax
1001fa97:	e8 64 f7 ff ff       	call   0x1001f200
1001fa9c:	6a 69                	push   0x69
1001fa9e:	ff d7                	call   edi
1001faa0:	66 0f ba e0 0f       	bt     ax,0xf
1001faa5:	72 0b                	jb     0x1001fab2
1001faa7:	6a 39                	push   0x39
1001faa9:	ff d7                	call   edi
1001faab:	66 0f ba e0 0f       	bt     ax,0xf
1001fab0:	73 71                	jae    0x1001fb23
1001fab2:	68 f8 98 1a 10       	push   0x101a98f8
1001fab7:	8b ce                	mov    ecx,esi
1001fab9:	e8 b2 03 00 00       	call   0x1001fe70
1001fabe:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001fac3:	6a 69                	push   0x69
1001fac5:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1001fac9:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001facc:	0f 5a c0             	cvtps2pd xmm0,xmm0
1001facf:	f2 0f 58 45 f8       	addsd  xmm0,QWORD PTR [ebp-0x8]
1001fad4:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1001fad8:	f3 0f 11 80 58 02 00 	movss  DWORD PTR [eax+0x258],xmm0
1001fadf:	00 
1001fae0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001fae5:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1001fae9:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001faec:	0f 5a c0             	cvtps2pd xmm0,xmm0
1001faef:	f2 0f 58 45 f0       	addsd  xmm0,QWORD PTR [ebp-0x10]
1001faf4:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1001faf8:	f3 0f 11 80 5c 02 00 	movss  DWORD PTR [eax+0x25c],xmm0
1001faff:	00 
1001fb00:	ff d7                	call   edi
1001fb02:	66 0f ba e0 0f       	bt     ax,0xf
1001fb07:	b9 39 00 00 00       	mov    ecx,0x39
1001fb0c:	b8 69 00 00 00       	mov    eax,0x69
1001fb11:	0f 43 c1             	cmovae eax,ecx
1001fb14:	8b ce                	mov    ecx,esi
1001fb16:	6a 09                	push   0x9
1001fb18:	89 86 04 02 00 00    	mov    DWORD PTR [esi+0x204],eax
1001fb1e:	e8 dd f6 ff ff       	call   0x1001f200
1001fb23:	8b 06                	mov    eax,DWORD PTR [esi]
1001fb25:	51                   	push   ecx
1001fb26:	8b ce                	mov    ecx,esi
1001fb28:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1001fb2f:	ff 50 08             	call   DWORD PTR [eax+0x8]
1001fb32:	5f                   	pop    edi
1001fb33:	5e                   	pop    esi
1001fb34:	5b                   	pop    ebx
1001fb35:	8b e5                	mov    esp,ebp
1001fb37:	5d                   	pop    ebp
1001fb38:	c3                   	ret
