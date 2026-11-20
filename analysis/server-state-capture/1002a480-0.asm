
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1002a480 <.text+0x29480>:
1002a480:	55                   	push   ebp
1002a481:	8b ec                	mov    ebp,esp
1002a483:	83 ec 08             	sub    esp,0x8
1002a486:	57                   	push   edi
1002a487:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1002a48a:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
1002a48d:	85 ff                	test   edi,edi
1002a48f:	0f 84 d8 03 00 00    	je     0x1002a86d
1002a495:	b8 01 00 00 00       	mov    eax,0x1
1002a49a:	c6 01 00             	mov    BYTE PTR [ecx],0x0
1002a49d:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1002a4a0:	8d 91 20 04 00 00    	lea    edx,[ecx+0x420]
1002a4a6:	80 3a 00             	cmp    BYTE PTR [edx],0x0
1002a4a9:	74 16                	je     0x1002a4c1
1002a4ab:	40                   	inc    eax
1002a4ac:	81 c2 1c 04 00 00    	add    edx,0x41c
1002a4b2:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1002a4b5:	83 f8 20             	cmp    eax,0x20
1002a4b8:	7e ec                	jle    0x1002a4a6
1002a4ba:	5f                   	pop    edi
1002a4bb:	8b e5                	mov    esp,ebp
1002a4bd:	5d                   	pop    ebp
1002a4be:	c2 04 00             	ret    0x4
1002a4c1:	53                   	push   ebx
1002a4c2:	69 d8 1c 04 00 00    	imul   ebx,eax,0x41c
1002a4c8:	8b 07                	mov    eax,DWORD PTR [edi]
1002a4ca:	56                   	push   esi
1002a4cb:	03 d9                	add    ebx,ecx
1002a4cd:	8b cf                	mov    ecx,edi
1002a4cf:	ff 90 bc 00 00 00    	call   DWORD PTR [eax+0xbc]
1002a4d5:	8b cf                	mov    ecx,edi
1002a4d7:	85 c0                	test   eax,eax
1002a4d9:	0f 85 21 01 00 00    	jne    0x1002a600
1002a4df:	e8 7c a8 0b 00       	call   0x100e4d60
1002a4e4:	85 c0                	test   eax,eax
1002a4e6:	c6 83 d4 01 00 00 01 	mov    BYTE PTR [ebx+0x1d4],0x1
1002a4ed:	8d 73 04             	lea    esi,[ebx+0x4]
1002a4f0:	0f 95 c0             	setne  al
1002a4f3:	88 43 18             	mov    BYTE PTR [ebx+0x18],al
1002a4f6:	8b 87 3c 06 00 00    	mov    eax,DWORD PTR [edi+0x63c]
1002a4fc:	89 83 dc 01 00 00    	mov    DWORD PTR [ebx+0x1dc],eax
1002a502:	8b 87 40 06 00 00    	mov    eax,DWORD PTR [edi+0x640]
1002a508:	89 83 e0 01 00 00    	mov    DWORD PTR [ebx+0x1e0],eax
1002a50e:	8b 87 44 06 00 00    	mov    eax,DWORD PTR [edi+0x644]
1002a514:	89 83 e4 01 00 00    	mov    DWORD PTR [ebx+0x1e4],eax
1002a51a:	8b 87 48 06 00 00    	mov    eax,DWORD PTR [edi+0x648]
1002a520:	89 83 e8 01 00 00    	mov    DWORD PTR [ebx+0x1e8],eax
1002a526:	8b 87 4c 06 00 00    	mov    eax,DWORD PTR [edi+0x64c]
1002a52c:	89 83 ec 01 00 00    	mov    DWORD PTR [ebx+0x1ec],eax
1002a532:	8b 87 50 06 00 00    	mov    eax,DWORD PTR [edi+0x650]
1002a538:	89 83 f0 01 00 00    	mov    DWORD PTR [ebx+0x1f0],eax
1002a53e:	8b 87 54 06 00 00    	mov    eax,DWORD PTR [edi+0x654]
1002a544:	89 83 f4 01 00 00    	mov    DWORD PTR [ebx+0x1f4],eax
1002a54a:	8b 87 58 06 00 00    	mov    eax,DWORD PTR [edi+0x658]
1002a550:	89 83 f8 01 00 00    	mov    DWORD PTR [ebx+0x1f8],eax
1002a556:	8b 87 5c 06 00 00    	mov    eax,DWORD PTR [edi+0x65c]
1002a55c:	89 83 fc 01 00 00    	mov    DWORD PTR [ebx+0x1fc],eax
1002a562:	8b 87 60 06 00 00    	mov    eax,DWORD PTR [edi+0x660]
1002a568:	89 83 00 02 00 00    	mov    DWORD PTR [ebx+0x200],eax
1002a56e:	8b 87 64 06 00 00    	mov    eax,DWORD PTR [edi+0x664]
1002a574:	89 83 04 02 00 00    	mov    DWORD PTR [ebx+0x204],eax
1002a57a:	8b 87 68 06 00 00    	mov    eax,DWORD PTR [edi+0x668]
1002a580:	89 83 08 02 00 00    	mov    DWORD PTR [ebx+0x208],eax
1002a586:	8b 87 6c 06 00 00    	mov    eax,DWORD PTR [edi+0x66c]
1002a58c:	89 83 0c 02 00 00    	mov    DWORD PTR [ebx+0x20c],eax
1002a592:	8b 87 70 06 00 00    	mov    eax,DWORD PTR [edi+0x670]
1002a598:	89 83 10 02 00 00    	mov    DWORD PTR [ebx+0x210],eax
1002a59e:	8b 87 74 06 00 00    	mov    eax,DWORD PTR [edi+0x674]
1002a5a4:	89 83 14 02 00 00    	mov    DWORD PTR [ebx+0x214],eax
1002a5aa:	0f b6 87 78 06 00 00 	movzx  eax,BYTE PTR [edi+0x678]
1002a5b1:	88 83 18 02 00 00    	mov    BYTE PTR [ebx+0x218],al
1002a5b7:	8b 87 7c 06 00 00    	mov    eax,DWORD PTR [edi+0x67c]
1002a5bd:	89 83 1c 02 00 00    	mov    DWORD PTR [ebx+0x21c],eax
1002a5c3:	0f b6 87 80 06 00 00 	movzx  eax,BYTE PTR [edi+0x680]
1002a5ca:	88 83 20 02 00 00    	mov    BYTE PTR [ebx+0x220],al
1002a5d0:	c6 06 01             	mov    BYTE PTR [esi],0x1
1002a5d3:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1002a5d6:	8d bb a0 87 00 00    	lea    edi,[ebx+0x87a0]
1002a5dc:	8b 88 d4 01 00 00    	mov    ecx,DWORD PTR [eax+0x1d4]
1002a5e2:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1002a5e7:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1002a5ed:	89 4b 0c             	mov    DWORD PTR [ebx+0xc],ecx
1002a5f0:	b9 07 01 00 00       	mov    ecx,0x107
1002a5f5:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
1002a5f7:	5e                   	pop    esi
1002a5f8:	5b                   	pop    ebx
1002a5f9:	5f                   	pop    edi
1002a5fa:	8b e5                	mov    esp,ebp
1002a5fc:	5d                   	pop    ebp
1002a5fd:	c2 04 00             	ret    0x4
1002a600:	e8 5b a7 0b 00       	call   0x100e4d60
1002a605:	85 c0                	test   eax,eax
1002a607:	c6 83 d4 01 00 00 00 	mov    BYTE PTR [ebx+0x1d4],0x0
1002a60e:	0f 95 c0             	setne  al
1002a611:	88 43 18             	mov    BYTE PTR [ebx+0x18],al
1002a614:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1002a619:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1002a61c:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1002a622:	03 81 d4 01 00 00    	add    eax,DWORD PTR [ecx+0x1d4]
1002a628:	89 43 0c             	mov    DWORD PTR [ebx+0xc],eax
1002a62b:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1002a62e:	f3 0f 2c 80 64 01 00 	cvttss2si eax,DWORD PTR [eax+0x164]
1002a635:	00 
1002a636:	89 43 4c             	mov    DWORD PTR [ebx+0x4c],eax
1002a639:	f3 0f 2c 87 f0 21 00 	cvttss2si eax,DWORD PTR [edi+0x21f0]
1002a640:	00 
1002a641:	c6 43 04 01          	mov    BYTE PTR [ebx+0x4],0x1
1002a645:	89 43 50             	mov    DWORD PTR [ebx+0x50],eax
1002a648:	8b 87 b4 03 00 00    	mov    eax,DWORD PTR [edi+0x3b4]
1002a64e:	89 43 08             	mov    DWORD PTR [ebx+0x8],eax
1002a651:	8b 87 3c 06 00 00    	mov    eax,DWORD PTR [edi+0x63c]
1002a657:	89 83 dc 01 00 00    	mov    DWORD PTR [ebx+0x1dc],eax
1002a65d:	8b 87 40 06 00 00    	mov    eax,DWORD PTR [edi+0x640]
1002a663:	89 83 e0 01 00 00    	mov    DWORD PTR [ebx+0x1e0],eax
1002a669:	8b 87 44 06 00 00    	mov    eax,DWORD PTR [edi+0x644]
1002a66f:	89 83 e4 01 00 00    	mov    DWORD PTR [ebx+0x1e4],eax
1002a675:	8b 87 48 06 00 00    	mov    eax,DWORD PTR [edi+0x648]
1002a67b:	89 83 e8 01 00 00    	mov    DWORD PTR [ebx+0x1e8],eax
1002a681:	8b 87 4c 06 00 00    	mov    eax,DWORD PTR [edi+0x64c]
1002a687:	89 83 ec 01 00 00    	mov    DWORD PTR [ebx+0x1ec],eax
1002a68d:	8b 87 50 06 00 00    	mov    eax,DWORD PTR [edi+0x650]
1002a693:	89 83 f0 01 00 00    	mov    DWORD PTR [ebx+0x1f0],eax
1002a699:	8b 87 54 06 00 00    	mov    eax,DWORD PTR [edi+0x654]
1002a69f:	89 83 f4 01 00 00    	mov    DWORD PTR [ebx+0x1f4],eax
1002a6a5:	8b 87 58 06 00 00    	mov    eax,DWORD PTR [edi+0x658]
1002a6ab:	89 83 f8 01 00 00    	mov    DWORD PTR [ebx+0x1f8],eax
1002a6b1:	8b 87 5c 06 00 00    	mov    eax,DWORD PTR [edi+0x65c]
1002a6b7:	89 83 fc 01 00 00    	mov    DWORD PTR [ebx+0x1fc],eax
1002a6bd:	8b 87 60 06 00 00    	mov    eax,DWORD PTR [edi+0x660]
1002a6c3:	89 83 00 02 00 00    	mov    DWORD PTR [ebx+0x200],eax
1002a6c9:	8b 87 64 06 00 00    	mov    eax,DWORD PTR [edi+0x664]
1002a6cf:	89 83 04 02 00 00    	mov    DWORD PTR [ebx+0x204],eax
1002a6d5:	8b 87 68 06 00 00    	mov    eax,DWORD PTR [edi+0x668]
1002a6db:	89 83 08 02 00 00    	mov    DWORD PTR [ebx+0x208],eax
1002a6e1:	8b 87 6c 06 00 00    	mov    eax,DWORD PTR [edi+0x66c]
1002a6e7:	89 83 0c 02 00 00    	mov    DWORD PTR [ebx+0x20c],eax
1002a6ed:	8b 87 70 06 00 00    	mov    eax,DWORD PTR [edi+0x670]
1002a6f3:	89 83 10 02 00 00    	mov    DWORD PTR [ebx+0x210],eax
1002a6f9:	8b 87 74 06 00 00    	mov    eax,DWORD PTR [edi+0x674]
1002a6ff:	89 83 14 02 00 00    	mov    DWORD PTR [ebx+0x214],eax
1002a705:	0f b6 87 78 06 00 00 	movzx  eax,BYTE PTR [edi+0x678]
1002a70c:	88 83 18 02 00 00    	mov    BYTE PTR [ebx+0x218],al
1002a712:	8b 87 7c 06 00 00    	mov    eax,DWORD PTR [edi+0x67c]
1002a718:	89 83 1c 02 00 00    	mov    DWORD PTR [ebx+0x21c],eax
1002a71e:	0f b6 87 80 06 00 00 	movzx  eax,BYTE PTR [edi+0x680]
1002a725:	88 83 20 02 00 00    	mov    BYTE PTR [ebx+0x220],al
1002a72b:	8b 87 dc 03 00 00    	mov    eax,DWORD PTR [edi+0x3dc]
1002a731:	89 83 28 02 00 00    	mov    DWORD PTR [ebx+0x228],eax
1002a737:	8b 87 e0 03 00 00    	mov    eax,DWORD PTR [edi+0x3e0]
1002a73d:	89 83 2c 02 00 00    	mov    DWORD PTR [ebx+0x22c],eax
1002a743:	8b 87 e4 03 00 00    	mov    eax,DWORD PTR [edi+0x3e4]
1002a749:	89 83 30 02 00 00    	mov    DWORD PTR [ebx+0x230],eax
1002a74f:	8b 87 2c 25 00 00    	mov    eax,DWORD PTR [edi+0x252c]
1002a755:	85 c0                	test   eax,eax
1002a757:	74 22                	je     0x1002a77b
1002a759:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1002a75c:	8b 08                	mov    ecx,DWORD PTR [eax]
1002a75e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1002a763:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1002a769:	89 4b 10             	mov    DWORD PTR [ebx+0x10],ecx
1002a76c:	8b 87 2c 25 00 00    	mov    eax,DWORD PTR [edi+0x252c]
1002a772:	8b 80 68 01 00 00    	mov    eax,DWORD PTR [eax+0x168]
1002a778:	89 43 14             	mov    DWORD PTR [ebx+0x14],eax
1002a77b:	b9 01 00 00 00       	mov    ecx,0x1
1002a780:	8d 93 fd 03 00 00    	lea    edx,[ebx+0x3fd]
1002a786:	66 66 0f 1f 84 00 00 	data16 nop WORD PTR [eax+eax*1+0x0]
1002a78d:	00 00 00 
1002a790:	8a 84 0f f4 03 00 00 	mov    al,BYTE PTR [edi+ecx*1+0x3f4]
1002a797:	8d 52 01             	lea    edx,[edx+0x1]
1002a79a:	41                   	inc    ecx
1002a79b:	88 42 ff             	mov    BYTE PTR [edx-0x1],al
1002a79e:	83 f9 20             	cmp    ecx,0x20
1002a7a1:	7e ed                	jle    0x1002a790
1002a7a3:	8d 8f 4c 20 00 00    	lea    ecx,[edi+0x204c]
1002a7a9:	8b d3                	mov    edx,ebx
1002a7ab:	2b d1                	sub    edx,ecx
1002a7ad:	0f 1f 00             	nop    DWORD PTR [eax]
1002a7b0:	8a 01                	mov    al,BYTE PTR [ecx]
1002a7b2:	8d 49 01             	lea    ecx,[ecx+0x1]
1002a7b5:	88 84 0a 7b 02 00 00 	mov    BYTE PTR [edx+ecx*1+0x27b],al
1002a7bc:	84 c0                	test   al,al
1002a7be:	75 f0                	jne    0x1002a7b0
1002a7c0:	8d 8f cc 20 00 00    	lea    ecx,[edi+0x20cc]
1002a7c6:	8b d3                	mov    edx,ebx
1002a7c8:	2b d1                	sub    edx,ecx
1002a7ca:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1002a7d0:	8a 01                	mov    al,BYTE PTR [ecx]
1002a7d2:	8d 49 01             	lea    ecx,[ecx+0x1]
1002a7d5:	88 84 0a fb 02 00 00 	mov    BYTE PTR [edx+ecx*1+0x2fb],al
1002a7dc:	84 c0                	test   al,al
1002a7de:	75 f0                	jne    0x1002a7d0
1002a7e0:	8d 8f 4c 21 00 00    	lea    ecx,[edi+0x214c]
1002a7e6:	2b d9                	sub    ebx,ecx
1002a7e8:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
1002a7ef:	00 
1002a7f0:	8a 01                	mov    al,BYTE PTR [ecx]
1002a7f2:	8d 49 01             	lea    ecx,[ecx+0x1]
1002a7f5:	88 84 0b 7b 03 00 00 	mov    BYTE PTR [ebx+ecx*1+0x37b],al
1002a7fc:	84 c0                	test   al,al
1002a7fe:	75 f0                	jne    0x1002a7f0
1002a800:	be 01 00 00 00       	mov    esi,0x1
1002a805:	8d 9f 00 22 00 00    	lea    ebx,[edi+0x2200]
1002a80b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
1002a810:	ff 33                	push   DWORD PTR [ebx]
1002a812:	8b cf                	mov    ecx,edi
1002a814:	e8 c7 a6 0b 00       	call   0x100e4ee0
1002a819:	85 c0                	test   eax,eax
1002a81b:	75 45                	jne    0x1002a862
1002a81d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1002a822:	8b cf                	mov    ecx,edi
1002a824:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1002a82a:	03 03                	add    eax,DWORD PTR [ebx]
1002a82c:	50                   	push   eax
1002a82d:	68 fc 72 1a 10       	push   0x101a72fc
1002a832:	e8 39 57 0b 00       	call   0x100dff70
1002a837:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1002a83a:	85 c0                	test   eax,eax
1002a83c:	74 24                	je     0x1002a862
1002a83e:	6a 07                	push   0x7
1002a840:	68 90 87 1a 10       	push   0x101a8790
1002a845:	50                   	push   eax
1002a846:	e8 35 4e 14 00       	call   0x1016f680
1002a84b:	83 c4 0c             	add    esp,0xc
1002a84e:	85 c0                	test   eax,eax
1002a850:	75 10                	jne    0x1002a862
1002a852:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
1002a855:	57                   	push   edi
1002a856:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1002a859:	56                   	push   esi
1002a85a:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
1002a85d:	e8 9e f7 ff ff       	call   0x1002a000
1002a862:	46                   	inc    esi
1002a863:	83 c3 04             	add    ebx,0x4
1002a866:	83 fe 06             	cmp    esi,0x6
1002a869:	7e a5                	jle    0x1002a810
1002a86b:	5e                   	pop    esi
1002a86c:	5b                   	pop    ebx
1002a86d:	5f                   	pop    edi
1002a86e:	8b e5                	mov    esp,ebp
1002a870:	5d                   	pop    ebp
1002a871:	c2 04 00             	ret    0x4
