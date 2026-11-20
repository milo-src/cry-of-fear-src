
D:\Steam\steamapps\common\Cry of Fear\hw.dll:     file format pei-i386


Disassembly of section .text:

01da63bd <.text+0xa53bd>:
 1da63bd:	55                   	push   ebp
 1da63be:	8b ec                	mov    ebp,esp
 1da63c0:	83 7d 08 01          	cmp    DWORD PTR [ebp+0x8],0x1
 1da63c4:	74 06                	je     0x1da63cc
 1da63c6:	83 7d 08 08          	cmp    DWORD PTR [ebp+0x8],0x8
 1da63ca:	75 13                	jne    0x1da63df
 1da63cc:	83 7d 14 00          	cmp    DWORD PTR [ebp+0x14],0x0
 1da63d0:	75 0d                	jne    0x1da63df
 1da63d2:	68 3c 24 ec 01       	push   0x1ec243c
 1da63d7:	e8 7a c2 04 00       	call   0x1df2656
 1da63dc:	83 c4 04             	add    esp,0x4
 1da63df:	83 7d 08 08          	cmp    DWORD PTR [ebp+0x8],0x8
 1da63e3:	74 19                	je     0x1da63fe
 1da63e5:	83 7d 08 01          	cmp    DWORD PTR [ebp+0x8],0x1
 1da63e9:	74 13                	je     0x1da63fe
 1da63eb:	83 7d 14 00          	cmp    DWORD PTR [ebp+0x14],0x0
 1da63ef:	74 0d                	je     0x1da63fe
 1da63f1:	68 74 24 ec 01       	push   0x1ec2474
 1da63f6:	e8 5b c2 04 00       	call   0x1df2656
 1da63fb:	83 c4 04             	add    esp,0x4
 1da63fe:	83 3d 00 f3 42 02 00 	cmp    DWORD PTR ds:0x242f300,0x0
 1da6405:	74 13                	je     0x1da641a
 1da6407:	a1 fc f2 42 02       	mov    eax,ds:0x242f2fc
 1da640c:	50                   	push   eax
 1da640d:	68 b8 24 ec 01       	push   0x1ec24b8
 1da6412:	e8 3f c2 04 00       	call   0x1df2656
 1da6417:	83 c4 08             	add    esp,0x8
 1da641a:	83 7d 0c 00          	cmp    DWORD PTR [ebp+0xc],0x0
 1da641e:	75 0d                	jne    0x1da642d
 1da6420:	68 f0 24 ec 01       	push   0x1ec24f0
 1da6425:	e8 2c c2 04 00       	call   0x1df2656
 1da642a:	83 c4 04             	add    esp,0x4
 1da642d:	c7 05 00 f3 42 02 01 	mov    DWORD PTR ds:0x242f300,0x1
 1da6434:	00 00 00 
 1da6437:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
 1da643a:	89 0d fc f2 42 02    	mov    DWORD PTR ds:0x242f2fc,ecx
 1da6440:	8b 55 14             	mov    edx,DWORD PTR [ebp+0x14]
 1da6443:	89 15 f4 f2 42 02    	mov    DWORD PTR ds:0x242f2f4,edx
 1da6449:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
 1da644c:	a3 f8 f2 42 02       	mov    ds:0x242f2f8,eax
 1da6451:	83 7d 08 04          	cmp    DWORD PTR [ebp+0x8],0x4
 1da6455:	74 06                	je     0x1da645d
 1da6457:	83 7d 08 05          	cmp    DWORD PTR [ebp+0x8],0x5
 1da645b:	75 38                	jne    0x1da6495
 1da645d:	83 7d 10 00          	cmp    DWORD PTR [ebp+0x10],0x0
 1da6461:	74 22                	je     0x1da6485
 1da6463:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
 1da6466:	8b 11                	mov    edx,DWORD PTR [ecx]
 1da6468:	89 15 24 eb 42 02    	mov    DWORD PTR ds:0x242eb24,edx
 1da646e:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
 1da6471:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
 1da6474:	89 0d 28 eb 42 02    	mov    DWORD PTR ds:0x242eb28,ecx
 1da647a:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
 1da647d:	8b 42 08             	mov    eax,DWORD PTR [edx+0x8]
 1da6480:	a3 2c eb 42 02       	mov    ds:0x242eb2c,eax
 1da6485:	e8 07 92 fd ff       	call   0x1d7f691
 1da648a:	85 c0                	test   eax,eax
 1da648c:	74 07                	je     0x1da6495
 1da648e:	c7 45 08 00 00 00 00 	mov    DWORD PTR [ebp+0x8],0x0
 1da6495:	c7 05 a8 1a ec 01 00 	mov    DWORD PTR ds:0x1ec1aa8,0x0
 1da649c:	00 00 00 
 1da649f:	66 c7 05 9c 1a ec 01 	mov    WORD PTR ds:0x1ec1a9c,0x1
 1da64a6:	01 00 
 1da64a8:	5d                   	pop    ebp
 1da64a9:	c3                   	ret
 1da64aa:	55                   	push   ebp
 1da64ab:	8b ec                	mov    ebp,esp
 1da64ad:	83 ec 18             	sub    esp,0x18
 1da64b0:	c7 45 f8 00 00 00 00 	mov    DWORD PTR [ebp-0x8],0x0
 1da64b7:	83 3d 00 f3 42 02 00 	cmp    DWORD PTR ds:0x242f300,0x0
 1da64be:	75 0d                	jne    0x1da64cd
 1da64c0:	68 2c 25 ec 01       	push   0x1ec252c
 1da64c5:	e8 8c c1 04 00       	call   0x1df2656
 1da64ca:	83 c4 04             	add    esp,0x4
 1da64cd:	c7 05 00 f3 42 02 00 	mov    DWORD PTR ds:0x242f300,0x0
 1da64d4:	00 00 00 
 1da64d7:	83 3d f4 f2 42 02 00 	cmp    DWORD PTR ds:0x242f2f4,0x0
 1da64de:	74 1a                	je     0x1da64fa
 1da64e0:	a1 f4 f2 42 02       	mov    eax,ds:0x242f2f4
 1da64e5:	8b 88 28 02 00 00    	mov    ecx,DWORD PTR [eax+0x228]
 1da64eb:	81 e1 00 20 00 00    	and    ecx,0x2000
 1da64f1:	85 c9                	test   ecx,ecx
 1da64f3:	74 05                	je     0x1da64fa
 1da64f5:	e9 c3 02 00 00       	jmp    0x1da67bd
 1da64fa:	33 d2                	xor    edx,edx
 1da64fc:	66 8b 15 9c 1a ec 01 	mov    dx,WORD PTR ds:0x1ec1a9c
 1da6503:	83 e2 02             	and    edx,0x2
 1da6506:	85 d2                	test   edx,edx
 1da6508:	74 12                	je     0x1da651c
 1da650a:	68 58 25 ec 01       	push   0x1ec2558
 1da650f:	e8 42 c1 04 00       	call   0x1df2656
 1da6514:	83 c4 04             	add    esp,0x4
 1da6517:	e9 a1 02 00 00       	jmp    0x1da67bd
 1da651c:	83 3d fc f2 42 02 3a 	cmp    DWORD PTR ds:0x242f2fc,0x3a
 1da6523:	0f 8e f5 00 00 00    	jle    0x1da661e
 1da6529:	a1 ac 88 49 02       	mov    eax,ds:0x24988ac
 1da652e:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
 1da6531:	83 7d f0 00          	cmp    DWORD PTR [ebp-0x10],0x0
 1da6535:	74 1a                	je     0x1da6551
 1da6537:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
 1da653a:	8b 11                	mov    edx,DWORD PTR [ecx]
 1da653c:	3b 15 fc f2 42 02    	cmp    edx,DWORD PTR ds:0x242f2fc
 1da6542:	75 02                	jne    0x1da6546
 1da6544:	eb 0b                	jmp    0x1da6551
 1da6546:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
 1da6549:	8b 48 18             	mov    ecx,DWORD PTR [eax+0x18]
 1da654c:	89 4d f0             	mov    DWORD PTR [ebp-0x10],ecx
 1da654f:	eb e0                	jmp    0x1da6531
 1da6551:	83 7d f0 00          	cmp    DWORD PTR [ebp-0x10],0x0
 1da6555:	75 32                	jne    0x1da6589
 1da6557:	83 3d f8 f2 42 02 03 	cmp    DWORD PTR ds:0x242f2f8,0x3
 1da655e:	75 29                	jne    0x1da6589
 1da6560:	8b 15 a8 88 49 02    	mov    edx,DWORD PTR ds:0x24988a8
 1da6566:	89 55 f0             	mov    DWORD PTR [ebp-0x10],edx
 1da6569:	83 7d f0 00          	cmp    DWORD PTR [ebp-0x10],0x0
 1da656d:	74 1a                	je     0x1da6589
 1da656f:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
 1da6572:	8b 08                	mov    ecx,DWORD PTR [eax]
 1da6574:	3b 0d fc f2 42 02    	cmp    ecx,DWORD PTR ds:0x242f2fc
 1da657a:	75 02                	jne    0x1da657e
 1da657c:	eb 0b                	jmp    0x1da6589
 1da657e:	8b 55 f0             	mov    edx,DWORD PTR [ebp-0x10]
 1da6581:	8b 42 18             	mov    eax,DWORD PTR [edx+0x18]
 1da6584:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
 1da6587:	eb e0                	jmp    0x1da6569
 1da6589:	83 7d f0 00          	cmp    DWORD PTR [ebp-0x10],0x0
 1da658d:	75 19                	jne    0x1da65a8
 1da658f:	8b 0d fc f2 42 02    	mov    ecx,DWORD PTR ds:0x242f2fc
 1da6595:	51                   	push   ecx
 1da6596:	68 9c 25 ec 01       	push   0x1ec259c
 1da659b:	e8 38 46 fa ff       	call   0x1d4abd8
 1da65a0:	83 c4 08             	add    esp,0x8
 1da65a3:	e9 15 02 00 00       	jmp    0x1da67bd
 1da65a8:	8b 55 f0             	mov    edx,DWORD PTR [ebp-0x10]
 1da65ab:	83 7a 04 ff          	cmp    DWORD PTR [edx+0x4],0xffffffff
 1da65af:	75 39                	jne    0x1da65ea
 1da65b1:	c7 45 f8 01 00 00 00 	mov    DWORD PTR [ebp-0x8],0x1
 1da65b8:	81 3d a8 1a ec 01 c0 	cmp    DWORD PTR ds:0x1ec1aa8,0xc0
 1da65bf:	00 00 00 
 1da65c2:	7e 24                	jle    0x1da65e8
 1da65c4:	68 c0 00 00 00       	push   0xc0
 1da65c9:	a1 a8 1a ec 01       	mov    eax,ds:0x1ec1aa8
 1da65ce:	50                   	push   eax
 1da65cf:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
 1da65d2:	83 c1 08             	add    ecx,0x8
 1da65d5:	51                   	push   ecx
 1da65d6:	68 c4 25 ec 01       	push   0x1ec25c4
 1da65db:	e8 93 72 fd ff       	call   0x1d7d873
 1da65e0:	83 c4 10             	add    esp,0x10
 1da65e3:	e9 d5 01 00 00       	jmp    0x1da67bd
 1da65e8:	eb 34                	jmp    0x1da661e
 1da65ea:	8b 55 f0             	mov    edx,DWORD PTR [ebp-0x10]
 1da65ed:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
 1da65f0:	3b 05 a8 1a ec 01    	cmp    eax,DWORD PTR ds:0x1ec1aa8
 1da65f6:	74 26                	je     0x1da661e
 1da65f8:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
 1da65fb:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
 1da65fe:	52                   	push   edx
 1da65ff:	a1 a8 1a ec 01       	mov    eax,ds:0x1ec1aa8
 1da6604:	50                   	push   eax
 1da6605:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
 1da6608:	83 c1 08             	add    ecx,0x8
 1da660b:	51                   	push   ecx
 1da660c:	68 34 26 ec 01       	push   0x1ec2634
 1da6611:	e8 40 c0 04 00       	call   0x1df2656
 1da6616:	83 c4 10             	add    esp,0x10
 1da6619:	e9 9f 01 00 00       	jmp    0x1da67bd
 1da661e:	8b 15 f8 f2 42 02    	mov    edx,DWORD PTR ds:0x242f2f8
 1da6624:	52                   	push   edx
 1da6625:	e8 a5 fc ff ff       	call   0x1da62cf
 1da662a:	83 c4 04             	add    esp,0x4
 1da662d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
 1da6630:	83 3d f8 f2 42 02 00 	cmp    DWORD PTR ds:0x242f2f8,0x0
 1da6637:	75 19                	jne    0x1da6652
 1da6639:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
 1da663c:	8b 48 10             	mov    ecx,DWORD PTR [eax+0x10]
 1da663f:	03 0d a8 1a ec 01    	add    ecx,DWORD PTR ds:0x1ec1aa8
 1da6645:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
 1da6648:	3b 4a 0c             	cmp    ecx,DWORD PTR [edx+0xc]
 1da664b:	7e 05                	jle    0x1da6652
 1da664d:	e9 6b 01 00 00       	jmp    0x1da67bd
 1da6652:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
 1da6655:	83 78 08 00          	cmp    DWORD PTR [eax+0x8],0x0
 1da6659:	75 05                	jne    0x1da6660
 1da665b:	e9 5d 01 00 00       	jmp    0x1da67bd
 1da6660:	83 3d fc f2 42 02 3a 	cmp    DWORD PTR ds:0x242f2fc,0x3a
 1da6667:	0f 8e 84 00 00 00    	jle    0x1da66f1
 1da666d:	83 3d f8 f2 42 02 01 	cmp    DWORD PTR ds:0x242f2f8,0x1
 1da6674:	74 09                	je     0x1da667f
 1da6676:	83 3d f8 f2 42 02 08 	cmp    DWORD PTR ds:0x242f2f8,0x8
 1da667d:	75 72                	jne    0x1da66f1
 1da667f:	8b 0d f4 f2 42 02    	mov    ecx,DWORD PTR ds:0x242f2f4
 1da6685:	51                   	push   ecx
 1da6686:	e8 7a 1d 00 00       	call   0x1da8405
 1da668b:	83 c4 04             	add    esp,0x4
 1da668e:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
 1da6691:	83 7d f4 01          	cmp    DWORD PTR [ebp-0xc],0x1
 1da6695:	7c 0b                	jl     0x1da66a2
 1da6697:	8b 55 f4             	mov    edx,DWORD PTR [ebp-0xc]
 1da669a:	3b 15 28 f3 51 02    	cmp    edx,DWORD PTR ds:0x251f328
 1da66a0:	7e 0d                	jle    0x1da66af
 1da66a2:	68 64 26 ec 01       	push   0x1ec2664
 1da66a7:	e8 c7 71 fd ff       	call   0x1d7d873
 1da66ac:	83 c4 04             	add    esp,0x4
 1da66af:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
 1da66b2:	83 e8 01             	sub    eax,0x1
 1da66b5:	69 c0 18 50 00 00    	imul   eax,eax,0x5018
 1da66bb:	8b 0d 24 f3 51 02    	mov    ecx,DWORD PTR ds:0x251f324
 1da66c1:	03 c8                	add    ecx,eax
 1da66c3:	89 4d ec             	mov    DWORD PTR [ebp-0x14],ecx
 1da66c6:	8b 55 ec             	mov    edx,DWORD PTR [ebp-0x14]
 1da66c9:	83 7a 14 00          	cmp    DWORD PTR [edx+0x14],0x0
 1da66cd:	74 1d                	je     0x1da66ec
 1da66cf:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
 1da66d2:	83 38 00             	cmp    DWORD PTR [eax],0x0
 1da66d5:	75 09                	jne    0x1da66e0
 1da66d7:	8b 4d ec             	mov    ecx,DWORD PTR [ebp-0x14]
 1da66da:	83 79 04 00          	cmp    DWORD PTR [ecx+0x4],0x0
 1da66de:	74 0c                	je     0x1da66ec
 1da66e0:	8b 55 ec             	mov    edx,DWORD PTR [ebp-0x14]
 1da66e3:	83 ba 48 25 00 00 00 	cmp    DWORD PTR [edx+0x2548],0x0
 1da66ea:	74 05                	je     0x1da66f1
 1da66ec:	e9 cc 00 00 00       	jmp    0x1da67bd
 1da66f1:	a1 fc f2 42 02       	mov    eax,ds:0x242f2fc
 1da66f6:	50                   	push   eax
 1da66f7:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
 1da66fa:	51                   	push   ecx
 1da66fb:	e8 5f 09 fa ff       	call   0x1d4705f
 1da6700:	83 c4 08             	add    esp,0x8
 1da6703:	83 7d f8 00          	cmp    DWORD PTR [ebp-0x8],0x0
 1da6707:	74 13                	je     0x1da671c
 1da6709:	8b 15 a8 1a ec 01    	mov    edx,DWORD PTR ds:0x1ec1aa8
 1da670f:	52                   	push   edx
 1da6710:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
 1da6713:	50                   	push   eax
 1da6714:	e8 46 09 fa ff       	call   0x1d4705f
 1da6719:	83 c4 08             	add    esp,0x8
 1da671c:	8b 0d a0 1a ec 01    	mov    ecx,DWORD PTR ds:0x1ec1aa0
 1da6722:	51                   	push   ecx
 1da6723:	8b 15 a8 1a ec 01    	mov    edx,DWORD PTR ds:0x1ec1aa8
 1da6729:	52                   	push   edx
 1da672a:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
 1da672d:	50                   	push   eax
 1da672e:	e8 7e 0a fa ff       	call   0x1d471b1
 1da6733:	83 c4 0c             	add    esp,0xc
 1da6736:	8b 0d f8 f2 42 02    	mov    ecx,DWORD PTR ds:0x242f2f8
 1da673c:	89 4d e8             	mov    DWORD PTR [ebp-0x18],ecx
 1da673f:	8b 55 e8             	mov    edx,DWORD PTR [ebp-0x18]
 1da6742:	83 ea 04             	sub    edx,0x4
 1da6745:	89 55 e8             	mov    DWORD PTR [ebp-0x18],edx
 1da6748:	83 7d e8 03          	cmp    DWORD PTR [ebp-0x18],0x3
 1da674c:	77 6f                	ja     0x1da67bd
 1da674e:	8b 45 e8             	mov    eax,DWORD PTR [ebp-0x18]
 1da6751:	ff 24 85 c1 67 da 01 	jmp    DWORD PTR [eax*4+0x1da67c1]
 1da6758:	6a 00                	push   0x0
 1da675a:	6a 02                	push   0x2
 1da675c:	68 24 eb 42 02       	push   0x242eb24
 1da6761:	8b 0d f4 f2 42 02    	mov    ecx,DWORD PTR ds:0x242f2f4
 1da6767:	51                   	push   ecx
 1da6768:	e8 d6 02 03 00       	call   0x1dd6a43
 1da676d:	83 c4 10             	add    esp,0x10
 1da6770:	eb 4b                	jmp    0x1da67bd
 1da6772:	6a 00                	push   0x0
 1da6774:	6a 04                	push   0x4
 1da6776:	68 24 eb 42 02       	push   0x242eb24
 1da677b:	8b 15 f4 f2 42 02    	mov    edx,DWORD PTR ds:0x242f2f4
 1da6781:	52                   	push   edx
 1da6782:	e8 bc 02 03 00       	call   0x1dd6a43
 1da6787:	83 c4 10             	add    esp,0x10
 1da678a:	eb 31                	jmp    0x1da67bd
 1da678c:	6a 01                	push   0x1
 1da678e:	6a 04                	push   0x4
 1da6790:	68 24 eb 42 02       	push   0x242eb24
 1da6795:	a1 f4 f2 42 02       	mov    eax,ds:0x242f2f4
 1da679a:	50                   	push   eax
 1da679b:	e8 a3 02 03 00       	call   0x1dd6a43
 1da67a0:	83 c4 10             	add    esp,0x10
 1da67a3:	eb 18                	jmp    0x1da67bd
 1da67a5:	6a 01                	push   0x1
 1da67a7:	6a 04                	push   0x4
 1da67a9:	68 24 eb 42 02       	push   0x242eb24
 1da67ae:	8b 0d f4 f2 42 02    	mov    ecx,DWORD PTR ds:0x242f2f4
 1da67b4:	51                   	push   ecx
 1da67b5:	e8 89 02 03 00       	call   0x1dd6a43
 1da67ba:	83 c4 10             	add    esp,0x10
 1da67bd:	8b e5                	mov    esp,ebp
 1da67bf:	5d                   	pop    ebp
 1da67c0:	c3                   	ret
