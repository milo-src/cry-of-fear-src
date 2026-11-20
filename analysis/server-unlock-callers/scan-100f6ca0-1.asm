
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100f7590 <.text+0xf6590>:
100f7590:	6a 00                	push   0x0
100f7592:	ff 36                	push   DWORD PTR [esi]
100f7594:	8b cb                	mov    ecx,ebx
100f7596:	57                   	push   edi
100f7597:	e8 c4 cd fe ff       	call   0x100e4360
100f759c:	47                   	inc    edi
100f759d:	8d 76 04             	lea    esi,[esi+0x4]
100f75a0:	83 ff 06             	cmp    edi,0x6
100f75a3:	7e eb                	jle    0x100f7590
100f75a5:	be 01 00 00 00       	mov    esi,0x1
100f75aa:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100f75b0:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f75b3:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f75b9:	6a 00                	push   0x0
100f75bb:	ff 35 34 66 22 10    	push   DWORD PTR ds:0x10226634
100f75c1:	6a 01                	push   0x1
100f75c3:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f75c9:	56                   	push   esi
100f75ca:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f75d0:	6a 01                	push   0x1
100f75d2:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f75d8:	83 c4 18             	add    esp,0x18
100f75db:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f75e1:	46                   	inc    esi
100f75e2:	83 fe 03             	cmp    esi,0x3
100f75e5:	7e c9                	jle    0x100f75b0
100f75e7:	83 bb dc 03 00 00 00 	cmp    DWORD PTR [ebx+0x3dc],0x0
100f75ee:	74 36                	je     0x100f7626
100f75f0:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f75f3:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f75f9:	6a 00                	push   0x0
100f75fb:	ff 35 90 66 22 10    	push   DWORD PTR ds:0x10226690
100f7601:	6a 01                	push   0x1
100f7603:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f7609:	6a 01                	push   0x1
100f760b:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f7611:	ff b3 dc 03 00 00    	push   DWORD PTR [ebx+0x3dc]
100f7617:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f761d:	83 c4 18             	add    esp,0x18
100f7620:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f7626:	83 bb e0 03 00 00 00 	cmp    DWORD PTR [ebx+0x3e0],0x0
100f762d:	74 36                	je     0x100f7665
100f762f:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f7632:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f7638:	6a 00                	push   0x0
100f763a:	ff 35 90 66 22 10    	push   DWORD PTR ds:0x10226690
100f7640:	6a 01                	push   0x1
100f7642:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f7648:	6a 02                	push   0x2
100f764a:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f7650:	ff b3 e0 03 00 00    	push   DWORD PTR [ebx+0x3e0]
100f7656:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f765c:	83 c4 18             	add    esp,0x18
100f765f:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f7665:	83 bb e4 03 00 00 00 	cmp    DWORD PTR [ebx+0x3e4],0x0
100f766c:	74 36                	je     0x100f76a4
100f766e:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f7671:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f7677:	6a 00                	push   0x0
100f7679:	ff 35 90 66 22 10    	push   DWORD PTR ds:0x10226690
100f767f:	6a 01                	push   0x1
100f7681:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f7687:	6a 03                	push   0x3
100f7689:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f768f:	ff b3 e4 03 00 00    	push   DWORD PTR [ebx+0x3e4]
100f7695:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f769b:	83 c4 18             	add    esp,0x18
100f769e:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f76a4:	83 bb d0 24 00 00 00 	cmp    DWORD PTR [ebx+0x24d0],0x0
100f76ab:	75 64                	jne    0x100f7711
100f76ad:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f76b0:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f76b6:	6a 00                	push   0x0
100f76b8:	ff 35 ac 64 22 10    	push   DWORD PTR ds:0x102264ac
100f76be:	6a 01                	push   0x1
100f76c0:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f76c6:	83 c4 10             	add    esp,0x10
100f76c9:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f76cf:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100f76d5:	53                   	push   ebx
100f76d6:	8b 01                	mov    eax,DWORD PTR [ecx]
100f76d8:	ff 50 38             	call   DWORD PTR [eax+0x38]
100f76db:	c7 83 d0 24 00 00 01 	mov    DWORD PTR [ebx+0x24d0],0x1
100f76e2:	00 00 00 
100f76e5:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100f76eb:	85 c9                	test   ecx,ecx
100f76ed:	74 22                	je     0x100f7711
100f76ef:	8b 01                	mov    eax,DWORD PTR [ecx]
100f76f1:	ff 50 20             	call   DWORD PTR [eax+0x20]
100f76f4:	85 c0                	test   eax,eax
100f76f6:	74 19                	je     0x100f7711
100f76f8:	51                   	push   ecx
100f76f9:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100f7700:	6a 03                	push   0x3
100f7702:	53                   	push   ebx
100f7703:	53                   	push   ebx
100f7704:	68 1c bc 1d 10       	push   0x101dbc1c
100f7709:	e8 e2 a8 00 00       	call   0x10101ff0
100f770e:	83 c4 14             	add    esp,0x14
100f7711:	80 bb f4 05 00 00 00 	cmp    BYTE PTR [ebx+0x5f4],0x0
100f7718:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f771b:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
100f7721:	50                   	push   eax
100f7722:	6a 00                	push   0x0
100f7724:	ff 35 20 66 22 10    	push   DWORD PTR ds:0x10226620
100f772a:	6a 01                	push   0x1
100f772c:	74 0a                	je     0x100f7738
100f772e:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f7734:	6a 01                	push   0x1
100f7736:	eb 08                	jmp    0x100f7740
100f7738:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f773e:	6a 00                	push   0x0
100f7740:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f7746:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f774b:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100f7751:	03 83 f8 05 00 00    	add    eax,DWORD PTR [ebx+0x5f8]
100f7757:	50                   	push   eax
100f7758:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100f775e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f7763:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100f7769:	03 83 fc 05 00 00    	add    eax,DWORD PTR [ebx+0x5fc]
100f776f:	50                   	push   eax
100f7770:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100f7776:	ff b3 04 06 00 00    	push   DWORD PTR [ebx+0x604]
100f777c:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100f7782:	ff b3 00 06 00 00    	push   DWORD PTR [ebx+0x600]
100f7788:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100f778e:	83 c4 24             	add    esp,0x24
100f7791:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f7797:	51                   	push   ecx
100f7798:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100f779f:	6a 03                	push   0x3
100f77a1:	53                   	push   ebx
100f77a2:	53                   	push   ebx
100f77a3:	68 2c bc 1d 10       	push   0x101dbc2c
100f77a8:	e8 43 a8 00 00       	call   0x10101ff0
100f77ad:	83 c4 14             	add    esp,0x14
100f77b0:	8b cb                	mov    ecx,ebx
100f77b2:	e8 a9 b7 fe ff       	call   0x100e2f60
100f77b7:	83 bb f0 1e 00 00 00 	cmp    DWORD PTR [ebx+0x1ef0],0x0
100f77be:	74 2e                	je     0x100f77ee
100f77c0:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f77c3:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f77c9:	6a 00                	push   0x0
100f77cb:	ff 35 dc 65 22 10    	push   DWORD PTR ds:0x102265dc
100f77d1:	6a 01                	push   0x1
100f77d3:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f77d9:	ff b3 f0 1e 00 00    	push   DWORD PTR [ebx+0x1ef0]
100f77df:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f77e5:	83 c4 14             	add    esp,0x14
100f77e8:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f77ee:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f77f3:	ba 8c 85 1a 10       	mov    edx,0x101a858c
100f77f8:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
100f77fe:	03 48 0c             	add    ecx,DWORD PTR [eax+0xc]
100f7801:	8a 01                	mov    al,BYTE PTR [ecx]
100f7803:	3a 02                	cmp    al,BYTE PTR [edx]
100f7805:	75 1a                	jne    0x100f7821
100f7807:	84 c0                	test   al,al
100f7809:	74 12                	je     0x100f781d
100f780b:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100f780e:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
100f7811:	75 0e                	jne    0x100f7821
100f7813:	83 c1 02             	add    ecx,0x2
100f7816:	83 c2 02             	add    edx,0x2
100f7819:	84 c0                	test   al,al
100f781b:	75 e4                	jne    0x100f7801
100f781d:	33 c0                	xor    eax,eax
100f781f:	eb 05                	jmp    0x100f7826
100f7821:	1b c0                	sbb    eax,eax
100f7823:	83 c8 01             	or     eax,0x1
100f7826:	85 c0                	test   eax,eax
100f7828:	75 52                	jne    0x100f787c
100f782a:	68 40 bc 1d 10       	push   0x101dbc40
100f782f:	50                   	push   eax
100f7830:	e8 2b 0c 02 00       	call   0x10118460
100f7835:	68 50 bc 1d 10       	push   0x101dbc50
100f783a:	6a 00                	push   0x0
100f783c:	8b f8                	mov    edi,eax
100f783e:	e8 1d 0c 02 00       	call   0x10118460
100f7843:	83 c4 10             	add    esp,0x10
100f7846:	8b f0                	mov    esi,eax
100f7848:	85 ff                	test   edi,edi
100f784a:	74 16                	je     0x100f7862
100f784c:	8b 17                	mov    edx,DWORD PTR [edi]
100f784e:	51                   	push   ecx
100f784f:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100f7856:	8b cf                	mov    ecx,edi
100f7858:	6a 03                	push   0x3
100f785a:	53                   	push   ebx
100f785b:	53                   	push   ebx
100f785c:	ff 92 e8 00 00 00    	call   DWORD PTR [edx+0xe8]
100f7862:	85 f6                	test   esi,esi
100f7864:	74 16                	je     0x100f787c
100f7866:	8b 06                	mov    eax,DWORD PTR [esi]
100f7868:	51                   	push   ecx
100f7869:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100f7870:	8b ce                	mov    ecx,esi
100f7872:	6a 03                	push   0x3
100f7874:	53                   	push   ebx
100f7875:	53                   	push   ebx
100f7876:	ff 90 e8 00 00 00    	call   DWORD PTR [eax+0xe8]
100f787c:	8b 83 00 25 00 00    	mov    eax,DWORD PTR [ebx+0x2500]
100f7882:	3b 83 04 25 00 00    	cmp    eax,DWORD PTR [ebx+0x2504]
100f7888:	74 3a                	je     0x100f78c4
100f788a:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f788d:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f7893:	6a 00                	push   0x0
100f7895:	ff 35 10 65 22 10    	push   DWORD PTR ds:0x10226510
100f789b:	6a 01                	push   0x1
100f789d:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f78a3:	ff b3 00 25 00 00    	push   DWORD PTR [ebx+0x2500]
100f78a9:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f78af:	83 c4 14             	add    esp,0x14
100f78b2:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f78b8:	8b 83 00 25 00 00    	mov    eax,DWORD PTR [ebx+0x2500]
100f78be:	89 83 04 25 00 00    	mov    DWORD PTR [ebx+0x2504],eax
100f78c4:	8b 83 08 25 00 00    	mov    eax,DWORD PTR [ebx+0x2508]
100f78ca:	3b 83 0c 25 00 00    	cmp    eax,DWORD PTR [ebx+0x250c]
100f78d0:	74 2e                	je     0x100f7900
100f78d2:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f78d5:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f78db:	6a 00                	push   0x0
100f78dd:	ff 35 20 65 22 10    	push   DWORD PTR ds:0x10226520
100f78e3:	6a 01                	push   0x1
100f78e5:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f78eb:	ff b3 08 25 00 00    	push   DWORD PTR [ebx+0x2508]
100f78f1:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f78f7:	83 c4 14             	add    esp,0x14
100f78fa:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f7900:	83 3d 00 2f 22 10 00 	cmp    DWORD PTR ds:0x10222f00,0x0
100f7907:	74 34                	je     0x100f793d
100f7909:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f790c:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f7912:	6a 00                	push   0x0
100f7914:	ff 35 c8 64 22 10    	push   DWORD PTR ds:0x102264c8
100f791a:	6a 01                	push   0x1
100f791c:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f7922:	6a 00                	push   0x0
100f7924:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f792a:	83 c4 14             	add    esp,0x14
100f792d:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f7933:	c7 05 00 2f 22 10 00 	mov    DWORD PTR ds:0x10222f00,0x0
100f793a:	00 00 00 
100f793d:	8b 83 14 1f 00 00    	mov    eax,DWORD PTR [ebx+0x1f14]
100f7943:	39 83 18 1f 00 00    	cmp    DWORD PTR [ebx+0x1f18],eax
100f7949:	74 34                	je     0x100f797f
100f794b:	89 83 18 1f 00 00    	mov    DWORD PTR [ebx+0x1f18],eax
100f7951:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f7954:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f795a:	6a 00                	push   0x0
100f795c:	ff 35 04 66 22 10    	push   DWORD PTR ds:0x10226604
100f7962:	6a 01                	push   0x1
100f7964:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f796a:	ff b3 14 1f 00 00    	push   DWORD PTR [ebx+0x1f14]
100f7970:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f7976:	83 c4 14             	add    esp,0x14
100f7979:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f797f:	8b 8b 24 06 00 00    	mov    ecx,DWORD PTR [ebx+0x624]
100f7985:	3b 8b 28 06 00 00    	cmp    ecx,DWORD PTR [ebx+0x628]
100f798b:	0f 84 9f 00 00 00    	je     0x100f7a30
100f7991:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f7994:	89 8b 28 06 00 00    	mov    DWORD PTR [ebx+0x628],ecx
100f799a:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
100f79a0:	50                   	push   eax
100f79a1:	6a 00                	push   0x0
100f79a3:	ff 35 0c 66 22 10    	push   DWORD PTR ds:0x1022660c
100f79a9:	6a 01                	push   0x1
100f79ab:	85 c9                	test   ecx,ecx
100f79ad:	75 36                	jne    0x100f79e5
100f79af:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f79b5:	68 f4 9a 1a 10       	push   0x101a9af4
100f79ba:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100f79c0:	6a 00                	push   0x0
100f79c2:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f79c8:	6a ff                	push   0xffffffff
100f79ca:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f79d0:	6a ff                	push   0xffffffff
100f79d2:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f79d8:	6a ff                	push   0xffffffff
100f79da:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100f79e0:	83 c4 24             	add    esp,0x24
100f79e3:	eb 45                	jmp    0x100f7a2a
100f79e5:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f79eb:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f79f0:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100f79f6:	03 83 24 06 00 00    	add    eax,DWORD PTR [ebx+0x624]
100f79fc:	50                   	push   eax
100f79fd:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100f7a03:	ff 35 a0 19 21 10    	push   DWORD PTR ds:0x102119a0
100f7a09:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f7a0f:	ff b3 70 1e 00 00    	push   DWORD PTR [ebx+0x1e70]
100f7a15:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f7a1b:	ff b3 74 1e 00 00    	push   DWORD PTR [ebx+0x1e74]
100f7a21:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f7a27:	83 c4 20             	add    esp,0x20
100f7a2a:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f7a30:	66 0f 6e 83 f8 24 00 	movd   xmm0,DWORD PTR [ebx+0x24f8]
100f7a37:	00 
100f7a38:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
100f7a3b:	8b d1                	mov    edx,ecx
100f7a3d:	0f 5b c0             	cvtdq2ps xmm0,xmm0
100f7a40:	f3 0f 10 89 64 01 00 	movss  xmm1,DWORD PTR [ecx+0x164]
100f7a47:	00 
100f7a48:	0f 2e c8             	ucomiss xmm1,xmm0
100f7a4b:	9f                   	lahf
100f7a4c:	f6 c4 44             	test   ah,0x44
100f7a4f:	0f 8b ac 00 00 00    	jnp    0x100f7b01
100f7a55:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f7a5a:	0f 57 d2             	xorps  xmm2,xmm2
100f7a5d:	f3 0f 5f ca          	maxss  xmm1,xmm2
100f7a61:	be 01 00 00 00       	mov    esi,0x1
100f7a66:	f3 0f 2c f9          	cvttss2si edi,xmm1
100f7a6a:	39 b0 90 00 00 00    	cmp    DWORD PTR [eax+0x90],esi
100f7a70:	0f 8c 7d 00 00 00    	jl     0x100f7af3
100f7a76:	56                   	push   esi
100f7a77:	e8 04 1c 02 00       	call   0x10119680
100f7a7c:	83 c4 04             	add    esp,0x4
100f7a7f:	85 c0                	test   eax,eax
100f7a81:	74 5d                	je     0x100f7ae0
100f7a83:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100f7a86:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f7a8c:	6a 00                	push   0x0
100f7a8e:	ff 35 d0 64 22 10    	push   DWORD PTR ds:0x102264d0
100f7a94:	6a 01                	push   0x1
100f7a96:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f7a9c:	57                   	push   edi
100f7a9d:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f7aa3:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f7aa6:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f7aac:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
100f7ab2:	50                   	push   eax
100f7ab3:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f7ab9:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100f7abf:	83 c4 1c             	add    esp,0x1c
100f7ac2:	8b 01                	mov    eax,DWORD PTR [ecx]
100f7ac4:	ff 50 20             	call   DWORD PTR [eax+0x20]
100f7ac7:	85 c0                	test   eax,eax
100f7ac9:	74 04                	je     0x100f7acf
100f7acb:	6a 01                	push   0x1
100f7acd:	eb 02                	jmp    0x100f7ad1
100f7acf:	6a 00                	push   0x0
100f7ad1:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f7ad7:	83 c4 04             	add    esp,0x4
100f7ada:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f7ae0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f7ae5:	46                   	inc    esi
100f7ae6:	3b b0 90 00 00 00    	cmp    esi,DWORD PTR [eax+0x90]
100f7aec:	7e 88                	jle    0x100f7a76
100f7aee:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
100f7af1:	8b ca                	mov    ecx,edx
100f7af3:	f3 0f 2c 81 64 01 00 	cvttss2si eax,DWORD PTR [ecx+0x164]
100f7afa:	00 
100f7afb:	89 83 f8 24 00 00    	mov    DWORD PTR [ebx+0x24f8],eax
100f7b01:	8b 83 e4 05 00 00    	mov    eax,DWORD PTR [ebx+0x5e4]
100f7b07:	3b 83 dc 05 00 00    	cmp    eax,DWORD PTR [ebx+0x5dc]
100f7b0d:	74 48                	je     0x100f7b57
100f7b0f:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
100f7b15:	6a 00                	push   0x0
100f7b17:	ff 35 24 66 22 10    	push   DWORD PTR ds:0x10226624
100f7b1d:	6a 01                	push   0x1
100f7b1f:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f7b25:	ff b3 dc 05 00 00    	push   DWORD PTR [ebx+0x5dc]
100f7b2b:	ff 15 14 30 22 10    	call   DWORD PTR ds:0x10223014
100f7b31:	ff b3 e0 05 00 00    	push   DWORD PTR [ebx+0x5e0]
100f7b37:	ff 15 14 30 22 10    	call   DWORD PTR ds:0x10223014
100f7b3d:	83 c4 18             	add    esp,0x18
100f7b40:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f7b46:	8b 83 dc 05 00 00    	mov    eax,DWORD PTR [ebx+0x5dc]
100f7b4c:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
100f7b4f:	8b d1                	mov    edx,ecx
100f7b51:	89 83 e4 05 00 00    	mov    DWORD PTR [ebx+0x5e4],eax
100f7b57:	8b 83 e8 05 00 00    	mov    eax,DWORD PTR [ebx+0x5e8]
100f7b5d:	3b 83 e0 05 00 00    	cmp    eax,DWORD PTR [ebx+0x5e0]
100f7b63:	74 48                	je     0x100f7bad
100f7b65:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
100f7b6b:	6a 00                	push   0x0
100f7b6d:	ff 35 24 66 22 10    	push   DWORD PTR ds:0x10226624
100f7b73:	6a 01                	push   0x1
100f7b75:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f7b7b:	ff b3 dc 05 00 00    	push   DWORD PTR [ebx+0x5dc]
100f7b81:	ff 15 14 30 22 10    	call   DWORD PTR ds:0x10223014
100f7b87:	ff b3 e0 05 00 00    	push   DWORD PTR [ebx+0x5e0]
100f7b8d:	ff 15 14 30 22 10    	call   DWORD PTR ds:0x10223014
100f7b93:	83 c4 18             	add    esp,0x18
100f7b96:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f7b9c:	8b 83 e0 05 00 00    	mov    eax,DWORD PTR [ebx+0x5e0]
100f7ba2:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
100f7ba5:	8b d1                	mov    edx,ecx
100f7ba7:	89 83 e8 05 00 00    	mov    DWORD PTR [ebx+0x5e8],eax
100f7bad:	66 0f 6e 83 fc 24 00 	movd   xmm0,DWORD PTR [ebx+0x24fc]
100f7bb4:	00 
100f7bb5:	f3 0f 10 89 c0 01 00 	movss  xmm1,DWORD PTR [ecx+0x1c0]
100f7bbc:	00 
100f7bbd:	0f 5b c0             	cvtdq2ps xmm0,xmm0
100f7bc0:	0f 2e c8             	ucomiss xmm1,xmm0
100f7bc3:	9f                   	lahf
100f7bc4:	f6 c4 44             	test   ah,0x44
100f7bc7:	7b 40                	jnp    0x100f7c09
100f7bc9:	f3 0f 2c c1          	cvttss2si eax,xmm1
100f7bcd:	89 83 fc 24 00 00    	mov    DWORD PTR [ebx+0x24fc],eax
100f7bd3:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
100f7bd9:	6a 00                	push   0x0
100f7bdb:	ff 35 d8 64 22 10    	push   DWORD PTR ds:0x102264d8
100f7be1:	6a 01                	push   0x1
100f7be3:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f7be9:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f7bec:	f3 0f 2c 80 c0 01 00 	cvttss2si eax,DWORD PTR [eax+0x1c0]
100f7bf3:	00 
100f7bf4:	50                   	push   eax
100f7bf5:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100f7bfb:	83 c4 14             	add    esp,0x14
100f7bfe:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f7c04:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
100f7c07:	8b d1                	mov    edx,ecx
100f7c09:	f3 0f 10 81 dc 01 00 	movss  xmm0,DWORD PTR [ecx+0x1dc]
100f7c10:	00 
100f7c11:	0f 57 c9             	xorps  xmm1,xmm1
100f7c14:	0f 2e c1             	ucomiss xmm0,xmm1
100f7c17:	9f                   	lahf
100f7c18:	f6 c4 44             	test   ah,0x44
100f7c1b:	7a 23                	jp     0x100f7c40
100f7c1d:	f3 0f 10 81 e0 01 00 	movss  xmm0,DWORD PTR [ecx+0x1e0]
100f7c24:	00 
100f7c25:	0f 2e c1             	ucomiss xmm0,xmm1
100f7c28:	9f                   	lahf
100f7c29:	f6 c4 44             	test   ah,0x44
100f7c2c:	7a 12                	jp     0x100f7c40
100f7c2e:	8b 83 c8 24 00 00    	mov    eax,DWORD PTR [ebx+0x24c8]
100f7c34:	3b 83 0c 03 00 00    	cmp    eax,DWORD PTR [ebx+0x30c]
100f7c3a:	0f 84 3d 01 00 00    	je     0x100f7d7d
100f7c40:	f3 0f 10 41 08       	movss  xmm0,DWORD PTR [ecx+0x8]
100f7c45:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
100f7c4a:	f3 0f 10 41 0c       	movss  xmm0,DWORD PTR [ecx+0xc]
100f7c4f:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
100f7c54:	f3 0f 10 41 10       	movss  xmm0,DWORD PTR [ecx+0x10]
100f7c59:	8b 89 90 01 00 00    	mov    ecx,DWORD PTR [ecx+0x190]
100f7c5f:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
100f7c64:	85 c9                	test   ecx,ecx
100f7c66:	74 43                	je     0x100f7cab
100f7c68:	8b 49 7c             	mov    ecx,DWORD PTR [ecx+0x7c]
100f7c6b:	85 c9                	test   ecx,ecx
100f7c6d:	74 3c                	je     0x100f7cab
100f7c6f:	8b 01                	mov    eax,DWORD PTR [ecx]
100f7c71:	8d 55 d8             	lea    edx,[ebp-0x28]
100f7c74:	52                   	push   edx
100f7c75:	ff 90 fc 00 00 00    	call   DWORD PTR [eax+0xfc]
100f7c7b:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
100f7c7e:	f3 0f 7e 00          	movq   xmm0,QWORD PTR [eax]
100f7c82:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
100f7c85:	66 0f d6 45 e4       	movq   QWORD PTR [ebp-0x1c],xmm0
100f7c8a:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
100f7c8d:	f3 0f 10 45 ec       	movss  xmm0,DWORD PTR [ebp-0x14]
100f7c92:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
100f7c97:	f3 0f 10 45 e8       	movss  xmm0,DWORD PTR [ebp-0x18]
100f7c9c:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
100f7ca1:	f3 0f 10 45 e4       	movss  xmm0,DWORD PTR [ebp-0x1c]
100f7ca6:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
100f7cab:	ff b2 0c 02 00 00    	push   DWORD PTR [edx+0x20c]
100f7cb1:	8b b3 0c 03 00 00    	mov    esi,DWORD PTR [ebx+0x30c]
100f7cb7:	6a 00                	push   0x0
100f7cb9:	ff 35 d4 64 22 10    	push   DWORD PTR ds:0x102264d4
100f7cbf:	81 e6 18 41 77 00    	and    esi,0x774118
100f7cc5:	6a 01                	push   0x1
100f7cc7:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f7ccd:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f7cd0:	f3 0f 2c 80 e0 01 00 	cvttss2si eax,DWORD PTR [eax+0x1e0]
100f7cd7:	00 
100f7cd8:	50                   	push   eax
100f7cd9:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f7cdf:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f7ce2:	f3 0f 2c 80 dc 01 00 	cvttss2si eax,DWORD PTR [eax+0x1dc]
100f7ce9:	00 
100f7cea:	50                   	push   eax
100f7ceb:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f7cf1:	56                   	push   esi
100f7cf2:	ff 15 14 30 22 10    	call   DWORD PTR ds:0x10223014
100f7cf8:	f3 0f 10 45 f8       	movss  xmm0,DWORD PTR [ebp-0x8]
100f7cfd:	83 c4 18             	add    esp,0x18
100f7d00:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100f7d05:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100f7d0b:	f3 0f 10 45 f4       	movss  xmm0,DWORD PTR [ebp-0xc]
100f7d10:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100f7d15:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100f7d1b:	f3 0f 10 45 f0       	movss  xmm0,DWORD PTR [ebp-0x10]
100f7d20:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100f7d25:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100f7d2b:	83 c4 04             	add    esp,0x4
100f7d2e:	f6 83 0c 03 00 00 20 	test   BYTE PTR [ebx+0x30c],0x20
100f7d35:	75 04                	jne    0x100f7d3b
100f7d37:	6a 01                	push   0x1
100f7d39:	eb 02                	jmp    0x100f7d3d
100f7d3b:	6a 00                	push   0x0
100f7d3d:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f7d43:	83 c4 04             	add    esp,0x4
100f7d46:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f7d4c:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f7d4f:	c7 80 dc 01 00 00 00 	mov    DWORD PTR [eax+0x1dc],0x0
100f7d56:	00 00 00 
100f7d59:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f7d5c:	c7 80 e0 01 00 00 00 	mov    DWORD PTR [eax+0x1e0],0x0
100f7d63:	00 00 00 
100f7d66:	8b 83 0c 03 00 00    	mov    eax,DWORD PTR [ebx+0x30c]
100f7d6c:	89 83 c8 24 00 00    	mov    DWORD PTR [ebx+0x24c8],eax
100f7d72:	25 00 c0 ff ff       	and    eax,0xffffc000
100f7d77:	89 83 0c 03 00 00    	mov    DWORD PTR [ebx+0x30c],eax
100f7d7d:	8b 83 28 04 00 00    	mov    eax,DWORD PTR [ebx+0x428]
100f7d83:	3b 83 24 04 00 00    	cmp    eax,DWORD PTR [ebx+0x424]
100f7d89:	0f 84 bc 01 00 00    	je     0x100f7f4b
100f7d8f:	83 3d 98 66 22 10 00 	cmp    DWORD PTR ds:0x10226698,0x0
100f7d96:	0f 84 af 01 00 00    	je     0x100f7f4b
100f7d9c:	33 f6                	xor    esi,esi
100f7d9e:	8b cb                	mov    ecx,ebx
100f7da0:	56                   	push   esi
100f7da1:	56                   	push   esi
100f7da2:	68 80 00 00 00       	push   0x80
100f7da7:	e8 54 52 fe ff       	call   0x100dd000
100f7dac:	6a 00                	push   0x0
100f7dae:	84 c0                	test   al,al
100f7db0:	b9 01 00 00 00       	mov    ecx,0x1
100f7db5:	6a 00                	push   0x0
100f7db7:	0f 45 f1             	cmovne esi,ecx
100f7dba:	8b cb                	mov    ecx,ebx
100f7dbc:	68 00 01 00 00       	push   0x100
100f7dc1:	8b fe                	mov    edi,esi
100f7dc3:	e8 38 52 fe ff       	call   0x100dd000
100f7dc8:	84 c0                	test   al,al
100f7dca:	74 08                	je     0x100f7dd4
100f7dcc:	bf 01 00 00 00       	mov    edi,0x1
100f7dd1:	83 ce 02             	or     esi,0x2
100f7dd4:	6a 00                	push   0x0
100f7dd6:	6a 00                	push   0x0
100f7dd8:	68 00 02 00 00       	push   0x200
100f7ddd:	8b cb                	mov    ecx,ebx
100f7ddf:	e8 1c 52 fe ff       	call   0x100dd000
100f7de4:	84 c0                	test   al,al
100f7de6:	74 08                	je     0x100f7df0
100f7de8:	bf 01 00 00 00       	mov    edi,0x1
100f7ded:	83 ce 04             	or     esi,0x4
100f7df0:	6a 00                	push   0x0
100f7df2:	6a 00                	push   0x0
100f7df4:	68 00 04 00 00       	push   0x400
100f7df9:	8b cb                	mov    ecx,ebx
100f7dfb:	e8 00 52 fe ff       	call   0x100dd000
100f7e00:	84 c0                	test   al,al
100f7e02:	74 08                	je     0x100f7e0c
100f7e04:	bf 01 00 00 00       	mov    edi,0x1
100f7e09:	83 ce 08             	or     esi,0x8
100f7e0c:	6a 00                	push   0x0
100f7e0e:	6a 00                	push   0x0
100f7e10:	68 00 08 00 00       	push   0x800
100f7e15:	8b cb                	mov    ecx,ebx
100f7e17:	e8 e4 51 fe ff       	call   0x100dd000
100f7e1c:	84 c0                	test   al,al
100f7e1e:	74 08                	je     0x100f7e28
100f7e20:	bf 01 00 00 00       	mov    edi,0x1
100f7e25:	83 ce 10             	or     esi,0x10
100f7e28:	6a 00                	push   0x0
100f7e2a:	6a 00                	push   0x0
100f7e2c:	68 00 10 00 00       	push   0x1000
100f7e31:	8b cb                	mov    ecx,ebx
100f7e33:	e8 c8 51 fe ff       	call   0x100dd000
100f7e38:	84 c0                	test   al,al
100f7e3a:	74 08                	je     0x100f7e44
100f7e3c:	bf 01 00 00 00       	mov    edi,0x1
100f7e41:	83 ce 20             	or     esi,0x20
100f7e44:	6a 00                	push   0x0
100f7e46:	6a 00                	push   0x0
100f7e48:	68 00 20 00 00       	push   0x2000
100f7e4d:	8b cb                	mov    ecx,ebx
100f7e4f:	e8 ac 51 fe ff       	call   0x100dd000
100f7e54:	84 c0                	test   al,al
100f7e56:	74 08                	je     0x100f7e60
100f7e58:	bf 01 00 00 00       	mov    edi,0x1
100f7e5d:	83 ce 40             	or     esi,0x40
100f7e60:	6a 00                	push   0x0
100f7e62:	6a 00                	push   0x0
100f7e64:	68 00 40 00 00       	push   0x4000
100f7e69:	8b cb                	mov    ecx,ebx
100f7e6b:	e8 90 51 fe ff       	call   0x100dd000
100f7e70:	84 c0                	test   al,al
100f7e72:	74 0b                	je     0x100f7e7f
100f7e74:	bf 01 00 00 00       	mov    edi,0x1
100f7e79:	81 ce 80 00 00 00    	or     esi,0x80
100f7e7f:	6a 00                	push   0x0
100f7e81:	6a 00                	push   0x0
100f7e83:	68 00 80 00 00       	push   0x8000
100f7e88:	8b cb                	mov    ecx,ebx
100f7e8a:	e8 71 51 fe ff       	call   0x100dd000
100f7e8f:	84 c0                	test   al,al
100f7e91:	74 0b                	je     0x100f7e9e
100f7e93:	bf 01 00 00 00       	mov    edi,0x1
100f7e98:	81 ce 00 01 00 00    	or     esi,0x100
100f7e9e:	6a 00                	push   0x0
100f7ea0:	6a 00                	push   0x0
100f7ea2:	68 00 00 01 00       	push   0x10000
100f7ea7:	8b cb                	mov    ecx,ebx
100f7ea9:	e8 52 51 fe ff       	call   0x100dd000
100f7eae:	84 c0                	test   al,al
100f7eb0:	74 0b                	je     0x100f7ebd
100f7eb2:	bf 01 00 00 00       	mov    edi,0x1
100f7eb7:	81 ce 00 02 00 00    	or     esi,0x200
100f7ebd:	6a 00                	push   0x0
100f7ebf:	6a 00                	push   0x0
100f7ec1:	68 00 00 02 00       	push   0x20000
100f7ec6:	8b cb                	mov    ecx,ebx
100f7ec8:	e8 33 51 fe ff       	call   0x100dd000
100f7ecd:	84 c0                	test   al,al
100f7ecf:	74 0b                	je     0x100f7edc
100f7ed1:	bf 01 00 00 00       	mov    edi,0x1
100f7ed6:	81 ce 00 04 00 00    	or     esi,0x400
100f7edc:	6a 00                	push   0x0
100f7ede:	6a 00                	push   0x0
100f7ee0:	68 00 00 04 00       	push   0x40000
100f7ee5:	8b cb                	mov    ecx,ebx
100f7ee7:	e8 14 51 fe ff       	call   0x100dd000
100f7eec:	84 c0                	test   al,al
100f7eee:	74 0b                	je     0x100f7efb
100f7ef0:	bf 01 00 00 00       	mov    edi,0x1
100f7ef5:	81 ce 00 08 00 00    	or     esi,0x800
100f7efb:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f7efe:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f7f04:	6a 00                	push   0x0
100f7f06:	ff 35 98 66 22 10    	push   DWORD PTR ds:0x10226698
100f7f0c:	6a 01                	push   0x1
100f7f0e:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f7f14:	56                   	push   esi
100f7f15:	ff 15 14 30 22 10    	call   DWORD PTR ds:0x10223014
100f7f1b:	57                   	push   edi
100f7f1c:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f7f22:	ff b3 24 04 00 00    	push   DWORD PTR [ebx+0x424]
100f7f28:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f7f2e:	6a 00                	push   0x0
100f7f30:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f7f36:	83 c4 20             	add    esp,0x20
100f7f39:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f7f3f:	8b 83 24 04 00 00    	mov    eax,DWORD PTR [ebx+0x424]
100f7f45:	89 83 28 04 00 00    	mov    DWORD PTR [ebx+0x428],eax
100f7f4b:	f3 0f 10 83 04 28 00 	movss  xmm0,DWORD PTR [ebx+0x2804]
100f7f52:	00 
100f7f53:	0f 57 d2             	xorps  xmm2,xmm2
100f7f56:	0f 2f c2             	comiss xmm0,xmm2
100f7f59:	0f 86 84 01 00 00    	jbe    0x100f80e3
100f7f5f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f7f64:	f3 0f 10 08          	movss  xmm1,DWORD PTR [eax]
100f7f68:	0f 2f c1             	comiss xmm0,xmm1
100f7f6b:	0f 86 07 01 00 00    	jbe    0x100f8078
100f7f71:	0f 2f 8b 08 28 00 00 	comiss xmm1,DWORD PTR [ebx+0x2808]
100f7f78:	0f 82 65 01 00 00    	jb     0x100f80e3
100f7f7e:	8b bb f0 27 00 00    	mov    edi,DWORD PTR [ebx+0x27f0]
100f7f84:	f3 0f 5c c1          	subss  xmm0,xmm1
100f7f88:	8b 8b dc 27 00 00    	mov    ecx,DWORD PTR [ebx+0x27dc]
100f7f8e:	8b c7                	mov    eax,edi
100f7f90:	2b c1                	sub    eax,ecx
100f7f92:	99                   	cdq
100f7f93:	57                   	push   edi
100f7f94:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
100f7f9b:	10 
100f7f9c:	f3 0f 2c f0          	cvttss2si esi,xmm0
100f7fa0:	f7 fe                	idiv   esi
100f7fa2:	66 0f 6e d6          	movd   xmm2,esi
100f7fa6:	0f 5b d2             	cvtdq2ps xmm2,xmm2
100f7fa9:	8d 14 01             	lea    edx,[ecx+eax*1]
100f7fac:	89 93 dc 27 00 00    	mov    DWORD PTR [ebx+0x27dc],edx
100f7fb2:	f3 0f 10 8b e0 27 00 	movss  xmm1,DWORD PTR [ebx+0x27e0]
100f7fb9:	00 
100f7fba:	f3 0f 10 83 f4 27 00 	movss  xmm0,DWORD PTR [ebx+0x27f4]
100f7fc1:	00 
100f7fc2:	f3 0f 5c c1          	subss  xmm0,xmm1
100f7fc6:	52                   	push   edx
100f7fc7:	68 60 bc 1d 10       	push   0x101dbc60
100f7fcc:	6a 02                	push   0x2
100f7fce:	f3 0f 5e c2          	divss  xmm0,xmm2
100f7fd2:	f3 0f 58 c1          	addss  xmm0,xmm1
100f7fd6:	f3 0f 11 83 e0 27 00 	movss  DWORD PTR [ebx+0x27e0],xmm0
100f7fdd:	00 
100f7fde:	f3 0f 10 8b e4 27 00 	movss  xmm1,DWORD PTR [ebx+0x27e4]
100f7fe5:	00 
100f7fe6:	f3 0f 10 83 f8 27 00 	movss  xmm0,DWORD PTR [ebx+0x27f8]
100f7fed:	00 
100f7fee:	f3 0f 5c c1          	subss  xmm0,xmm1
100f7ff2:	f3 0f 5e c2          	divss  xmm0,xmm2
100f7ff6:	f3 0f 58 c1          	addss  xmm0,xmm1
100f7ffa:	f3 0f 11 83 e4 27 00 	movss  DWORD PTR [ebx+0x27e4],xmm0
100f8001:	00 
100f8002:	f3 0f 10 8b e8 27 00 	movss  xmm1,DWORD PTR [ebx+0x27e8]
100f8009:	00 
100f800a:	f3 0f 10 83 fc 27 00 	movss  xmm0,DWORD PTR [ebx+0x27fc]
100f8011:	00 
100f8012:	f3 0f 5c c1          	subss  xmm0,xmm1
100f8016:	f3 0f 5e c2          	divss  xmm0,xmm2
100f801a:	f3 0f 58 c1          	addss  xmm0,xmm1
100f801e:	f3 0f 11 83 e8 27 00 	movss  DWORD PTR [ebx+0x27e8],xmm0
100f8025:	00 
100f8026:	f3 0f 10 8b ec 27 00 	movss  xmm1,DWORD PTR [ebx+0x27ec]
100f802d:	00 
100f802e:	f3 0f 10 83 00 28 00 	movss  xmm0,DWORD PTR [ebx+0x2800]
100f8035:	00 
100f8036:	f3 0f 5c c1          	subss  xmm0,xmm1
100f803a:	f3 0f 5e c2          	divss  xmm0,xmm2
100f803e:	f3 0f 58 c1          	addss  xmm0,xmm1
100f8042:	f3 0f 11 83 ec 27 00 	movss  DWORD PTR [ebx+0x27ec],xmm0
100f8049:	00 
100f804a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f804f:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100f8053:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
100f805a:	10 
100f805b:	c7 83 0c 28 00 00 01 	mov    DWORD PTR [ebx+0x280c],0x1
100f8062:	00 00 00 
100f8065:	f3 0f 11 83 08 28 00 	movss  DWORD PTR [ebx+0x2808],xmm0
100f806c:	00 
100f806d:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100f8073:	83 c4 10             	add    esp,0x10
100f8076:	eb 6b                	jmp    0x100f80e3
100f8078:	8b 83 f4 27 00 00    	mov    eax,DWORD PTR [ebx+0x27f4]
100f807e:	8b 8b f0 27 00 00    	mov    ecx,DWORD PTR [ebx+0x27f0]
100f8084:	89 83 e0 27 00 00    	mov    DWORD PTR [ebx+0x27e0],eax
100f808a:	8b 83 f8 27 00 00    	mov    eax,DWORD PTR [ebx+0x27f8]
100f8090:	51                   	push   ecx
100f8091:	89 83 e4 27 00 00    	mov    DWORD PTR [ebx+0x27e4],eax
100f8097:	8b 83 fc 27 00 00    	mov    eax,DWORD PTR [ebx+0x27fc]
100f809d:	89 83 e8 27 00 00    	mov    DWORD PTR [ebx+0x27e8],eax
100f80a3:	8b 83 00 28 00 00    	mov    eax,DWORD PTR [ebx+0x2800]
100f80a9:	68 8c bc 1d 10       	push   0x101dbc8c
100f80ae:	6a 02                	push   0x2
100f80b0:	c7 83 08 28 00 00 00 	mov    DWORD PTR [ebx+0x2808],0x0
100f80b7:	00 00 00 
100f80ba:	c7 83 04 28 00 00 00 	mov    DWORD PTR [ebx+0x2804],0x0
100f80c1:	00 00 00 
100f80c4:	89 8b dc 27 00 00    	mov    DWORD PTR [ebx+0x27dc],ecx
100f80ca:	89 83 ec 27 00 00    	mov    DWORD PTR [ebx+0x27ec],eax
100f80d0:	c7 83 0c 28 00 00 01 	mov    DWORD PTR [ebx+0x280c],0x1
100f80d7:	00 00 00 
100f80da:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100f80e0:	83 c4 0c             	add    esp,0xc
100f80e3:	83 bb 0c 28 00 00 00 	cmp    DWORD PTR [ebx+0x280c],0x0
100f80ea:	0f 84 32 02 00 00    	je     0x100f8322
100f80f0:	68 b0 bc 1d 10       	push   0x101dbcb0
100f80f5:	68 fc 72 1a 10       	push   0x101a72fc
100f80fa:	6a 00                	push   0x0
100f80fc:	ff 15 80 2f 22 10    	call   DWORD PTR ds:0x10222f80
100f8102:	8b f0                	mov    esi,eax
100f8104:	83 c4 0c             	add    esp,0xc
100f8107:	85 f6                	test   esi,esi
100f8109:	0f 84 81 01 00 00    	je     0x100f8290
100f810f:	56                   	push   esi
100f8110:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
100f8116:	83 c4 04             	add    esp,0x4
100f8119:	85 c0                	test   eax,eax
100f811b:	0f 84 6f 01 00 00    	je     0x100f8290
100f8121:	8b 4e 7c             	mov    ecx,DWORD PTR [esi+0x7c]
100f8124:	68 c0 bc 1d 10       	push   0x101dbcc0
100f8129:	68 fc 72 1a 10       	push   0x101a72fc
100f812e:	6a 00                	push   0x0
100f8130:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100f8133:	f3 0f 10 81 dc 00 00 	movss  xmm0,DWORD PTR [ecx+0xdc]
100f813a:	00 
100f813b:	8b b9 e0 00 00 00    	mov    edi,DWORD PTR [ecx+0xe0]
100f8141:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
100f8146:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
100f814b:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
100f8150:	ff 15 80 2f 22 10    	call   DWORD PTR ds:0x10222f80
100f8156:	8b f0                	mov    esi,eax
100f8158:	83 c4 0c             	add    esp,0xc
100f815b:	85 f6                	test   esi,esi
100f815d:	74 6d                	je     0x100f81cc
100f815f:	56                   	push   esi
100f8160:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
100f8166:	83 c4 04             	add    esp,0x4
100f8169:	85 c0                	test   eax,eax
100f816b:	74 5f                	je     0x100f81cc
100f816d:	f6 86 24 02 00 00 01 	test   BYTE PTR [esi+0x224],0x1
100f8174:	75 0d                	jne    0x100f8183
100f8176:	68 c0 bc 1d 10       	push   0x101dbcc0
100f817b:	68 fc 72 1a 10       	push   0x101a72fc
100f8180:	56                   	push   esi
100f8181:	eb cd                	jmp    0x100f8150
100f8183:	8b 4e 7c             	mov    ecx,DWORD PTR [esi+0x7c]
100f8186:	8b 81 dc 00 00 00    	mov    eax,DWORD PTR [ecx+0xdc]
100f818c:	89 83 dc 27 00 00    	mov    DWORD PTR [ebx+0x27dc],eax
100f8192:	8b 81 e0 00 00 00    	mov    eax,DWORD PTR [ecx+0xe0]
100f8198:	89 83 e0 27 00 00    	mov    DWORD PTR [ebx+0x27e0],eax
100f819e:	8b 81 e4 00 00 00    	mov    eax,DWORD PTR [ecx+0xe4]
100f81a4:	89 83 e4 27 00 00    	mov    DWORD PTR [ebx+0x27e4],eax
100f81aa:	8b 81 e8 00 00 00    	mov    eax,DWORD PTR [ecx+0xe8]
100f81b0:	89 83 e8 27 00 00    	mov    DWORD PTR [ebx+0x27e8],eax
100f81b6:	8b 81 ec 00 00 00    	mov    eax,DWORD PTR [ecx+0xec]
100f81bc:	89 83 ec 27 00 00    	mov    DWORD PTR [ebx+0x27ec],eax
100f81c2:	c7 83 04 28 00 00 00 	mov    DWORD PTR [ebx+0x2804],0x0
100f81c9:	00 00 00 
100f81cc:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f81cf:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f81d5:	6a 00                	push   0x0
100f81d7:	ff 35 48 65 22 10    	push   DWORD PTR ds:0x10226548
100f81dd:	6a 01                	push   0x1
100f81df:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f81e5:	ff b3 dc 27 00 00    	push   DWORD PTR [ebx+0x27dc]
100f81eb:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100f81f1:	f3 0f 10 45 f0       	movss  xmm0,DWORD PTR [ebp-0x10]
100f81f6:	83 c4 10             	add    esp,0x10
100f81f9:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100f81fe:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100f8204:	f3 0f 10 83 e0 27 00 	movss  xmm0,DWORD PTR [ebx+0x27e0]
100f820b:	00 
100f820c:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100f8211:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100f8217:	f3 0f 10 83 e4 27 00 	movss  xmm0,DWORD PTR [ebx+0x27e4]
100f821e:	00 
100f821f:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100f8224:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100f822a:	f3 0f 10 83 e8 27 00 	movss  xmm0,DWORD PTR [ebx+0x27e8]
100f8231:	00 
100f8232:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100f8237:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100f823d:	f3 0f 10 83 ec 27 00 	movss  xmm0,DWORD PTR [ebx+0x27ec]
100f8244:	00 
100f8245:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100f824a:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100f8250:	57                   	push   edi
100f8251:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100f8257:	f3 0f 10 45 f4       	movss  xmm0,DWORD PTR [ebp-0xc]
100f825c:	83 c4 04             	add    esp,0x4
100f825f:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100f8264:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100f826a:	83 c4 04             	add    esp,0x4
100f826d:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f8273:	83 bb dc 27 00 00 00 	cmp    DWORD PTR [ebx+0x27dc],0x0
100f827a:	74 0a                	je     0x100f8286
100f827c:	68 cc bc 1d 10       	push   0x101dbccc
100f8281:	e9 87 00 00 00       	jmp    0x100f830d
100f8286:	68 ec bc 1d 10       	push   0x101dbcec
100f828b:	e9 7d 00 00 00       	jmp    0x100f830d
100f8290:	c7 83 dc 27 00 00 00 	mov    DWORD PTR [ebx+0x27dc],0x0
100f8297:	00 00 00 
100f829a:	c7 83 e0 27 00 00 00 	mov    DWORD PTR [ebx+0x27e0],0x0
100f82a1:	00 00 00 
100f82a4:	c7 83 e4 27 00 00 00 	mov    DWORD PTR [ebx+0x27e4],0x0
100f82ab:	00 00 00 
100f82ae:	c7 83 e8 27 00 00 00 	mov    DWORD PTR [ebx+0x27e8],0x0
100f82b5:	00 00 00 
100f82b8:	c7 83 ec 27 00 00 00 	mov    DWORD PTR [ebx+0x27ec],0x0
100f82bf:	00 00 00 
100f82c2:	c7 83 f0 27 00 00 00 	mov    DWORD PTR [ebx+0x27f0],0x0
100f82c9:	00 00 00 
100f82cc:	c7 83 f4 27 00 00 00 	mov    DWORD PTR [ebx+0x27f4],0x0
100f82d3:	00 00 00 
100f82d6:	c7 83 f8 27 00 00 00 	mov    DWORD PTR [ebx+0x27f8],0x0
100f82dd:	00 00 00 
100f82e0:	c7 83 fc 27 00 00 00 	mov    DWORD PTR [ebx+0x27fc],0x0
100f82e7:	00 00 00 
100f82ea:	c7 83 00 28 00 00 00 	mov    DWORD PTR [ebx+0x2800],0x0
100f82f1:	00 00 00 
100f82f4:	c7 83 04 28 00 00 00 	mov    DWORD PTR [ebx+0x2804],0x0
100f82fb:	00 00 00 
100f82fe:	c7 83 08 28 00 00 00 	mov    DWORD PTR [ebx+0x2808],0x0
100f8305:	00 00 00 
100f8308:	68 0c bd 1d 10       	push   0x101dbd0c
100f830d:	6a 02                	push   0x2
100f830f:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100f8315:	83 c4 08             	add    esp,0x8
100f8318:	c7 83 0c 28 00 00 00 	mov    DWORD PTR [ebx+0x280c],0x0
100f831f:	00 00 00 
100f8322:	8b 93 30 23 00 00    	mov    edx,DWORD PTR [ebx+0x2330]
100f8328:	85 d2                	test   edx,edx
100f832a:	0f 84 02 01 00 00    	je     0x100f8432
100f8330:	83 bb 24 23 00 00 00 	cmp    DWORD PTR [ebx+0x2324],0x0
100f8337:	8b 73 04             	mov    esi,DWORD PTR [ebx+0x4]
100f833a:	ff b6 0c 02 00 00    	push   DWORD PTR [esi+0x20c]
100f8340:	6a 00                	push   0x0
100f8342:	ff 35 54 65 22 10    	push   DWORD PTR ds:0x10226554
100f8348:	6a 01                	push   0x1
100f834a:	75 29                	jne    0x100f8375
100f834c:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f8352:	6a 00                	push   0x0
100f8354:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f835a:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f8360:	68 20 bd 1d 10       	push   0x101dbd20
100f8365:	6a 02                	push   0x2
100f8367:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100f836d:	83 c4 1c             	add    esp,0x1c
100f8370:	e9 b3 00 00 00       	jmp    0x100f8428
100f8375:	33 c0                	xor    eax,eax
100f8377:	39 83 2c 23 00 00    	cmp    DWORD PTR [ebx+0x232c],eax
100f837d:	0f 95 c0             	setne  al
100f8380:	8d 04 45 01 00 00 00 	lea    eax,[eax*2+0x1]
100f8387:	8b c8                	mov    ecx,eax
100f8389:	83 c9 04             	or     ecx,0x4
100f838c:	83 bb 28 23 00 00 00 	cmp    DWORD PTR [ebx+0x2328],0x0
100f8393:	0f 44 c8             	cmove  ecx,eax
100f8396:	8b c1                	mov    eax,ecx
100f8398:	83 c8 08             	or     eax,0x8
100f839b:	83 fa 02             	cmp    edx,0x2
100f839e:	0f 44 c1             	cmove  eax,ecx
100f83a1:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
100f83a4:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f83aa:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
100f83ad:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f83b3:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f83b8:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100f83be:	03 83 24 23 00 00    	add    eax,DWORD PTR [ebx+0x2324]
100f83c4:	50                   	push   eax
100f83c5:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100f83cb:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
100f83ce:	83 c4 18             	add    esp,0x18
100f83d1:	a8 02                	test   al,0x2
100f83d3:	74 1e                	je     0x100f83f3
100f83d5:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f83da:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100f83e0:	03 83 2c 23 00 00    	add    eax,DWORD PTR [ebx+0x232c]
100f83e6:	50                   	push   eax
100f83e7:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100f83ed:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
100f83f0:	83 c4 04             	add    esp,0x4
100f83f3:	a8 04                	test   al,0x4
100f83f5:	74 1b                	je     0x100f8412
100f83f7:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f83fc:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100f8402:	03 83 28 23 00 00    	add    eax,DWORD PTR [ebx+0x2328]
100f8408:	50                   	push   eax
100f8409:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100f840f:	83 c4 04             	add    esp,0x4
100f8412:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f8418:	68 3c bd 1d 10       	push   0x101dbd3c
100f841d:	6a 02                	push   0x2
100f841f:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100f8425:	83 c4 08             	add    esp,0x8
100f8428:	c7 83 30 23 00 00 00 	mov    DWORD PTR [ebx+0x2330],0x0
100f842f:	00 00 00 
100f8432:	83 bb 10 28 00 00 00 	cmp    DWORD PTR [ebx+0x2810],0x0
100f8439:	75 11                	jne    0x100f844c
100f843b:	8b cb                	mov    ecx,ebx
100f843d:	e8 ee 9a ff ff       	call   0x100f1f30
100f8442:	c7 83 10 28 00 00 01 	mov    DWORD PTR [ebx+0x2810],0x1
100f8449:	00 00 00 
100f844c:	f6 83 d4 24 00 00 c0 	test   BYTE PTR [ebx+0x24d4],0xc0
100f8453:	74 3c                	je     0x100f8491
100f8455:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f8458:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f845e:	6a 00                	push   0x0
100f8460:	ff 35 dc 64 22 10    	push   DWORD PTR ds:0x102264dc
100f8466:	6a 01                	push   0x1
100f8468:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f846e:	8b 83 d4 24 00 00    	mov    eax,DWORD PTR [ebx+0x24d4]
100f8474:	83 e0 0f             	and    eax,0xf
100f8477:	50                   	push   eax
100f8478:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f847e:	83 c4 14             	add    esp,0x14
100f8481:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f8487:	81 a3 d4 24 00 00 3f 	and    DWORD PTR [ebx+0x24d4],0xffffff3f
100f848e:	ff ff ff 
100f8491:	83 bb dc 22 00 00 00 	cmp    DWORD PTR [ebx+0x22dc],0x0
100f8498:	0f 85 b4 00 00 00    	jne    0x100f8552
100f849e:	c7 83 dc 22 00 00 01 	mov    DWORD PTR [ebx+0x22dc],0x1
100f84a5:	00 00 00 
100f84a8:	bf 90 18 23 10       	mov    edi,0x10231890
100f84ad:	0f 1f 00             	nop    DWORD PTR [eax]
100f84b0:	83 7f 18 00          	cmp    DWORD PTR [edi+0x18],0x0
100f84b4:	0f 84 89 00 00 00    	je     0x100f8543
100f84ba:	8b 47 10             	mov    eax,DWORD PTR [edi+0x10]
100f84bd:	be 5c bd 1d 10       	mov    esi,0x101dbd5c
100f84c2:	85 c0                	test   eax,eax
100f84c4:	0f 45 f0             	cmovne esi,eax
100f84c7:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f84ca:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f84d0:	6a 00                	push   0x0
100f84d2:	ff 35 e4 64 22 10    	push   DWORD PTR ds:0x102264e4
100f84d8:	6a 01                	push   0x1
100f84da:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f84e0:	56                   	push   esi
100f84e1:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100f84e7:	ff 37                	push   DWORD PTR [edi]
100f84e9:	e8 72 79 fe ff       	call   0x100dfe60
100f84ee:	50                   	push   eax
100f84ef:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f84f5:	ff 77 04             	push   DWORD PTR [edi+0x4]
100f84f8:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f84fe:	ff 77 08             	push   DWORD PTR [edi+0x8]
100f8501:	e8 5a 79 fe ff       	call   0x100dfe60
100f8506:	50                   	push   eax
100f8507:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f850d:	ff 77 0c             	push   DWORD PTR [edi+0xc]
100f8510:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f8516:	ff 77 f8             	push   DWORD PTR [edi-0x8]
100f8519:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f851f:	ff 77 fc             	push   DWORD PTR [edi-0x4]
100f8522:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f8528:	ff 77 18             	push   DWORD PTR [edi+0x18]
100f852b:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f8531:	ff 77 1c             	push   DWORD PTR [edi+0x1c]
100f8534:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f853a:	83 c4 3c             	add    esp,0x3c
100f853d:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f8543:	83 c7 2c             	add    edi,0x2c
100f8546:	81 ff 10 1e 23 10    	cmp    edi,0x10231e10
100f854c:	0f 8c 5e ff ff ff    	jl     0x100f84b0
100f8552:	8b cb                	mov    ecx,ebx
100f8554:	e8 67 99 ff ff       	call   0x100f1ec0
100f8559:	8b 8b 0c 23 00 00    	mov    ecx,DWORD PTR [ebx+0x230c]
100f855f:	85 c9                	test   ecx,ecx
100f8561:	74 14                	je     0x100f8577
100f8563:	8b 01                	mov    eax,DWORD PTR [ecx]
100f8565:	51                   	push   ecx
100f8566:	c7 04 24 00 00 40 40 	mov    DWORD PTR [esp],0x40400000
100f856d:	6a 02                	push   0x2
100f856f:	53                   	push   ebx
100f8570:	53                   	push   ebx
100f8571:	ff 90 e8 00 00 00    	call   DWORD PTR [eax+0xe8]
100f8577:	8d b3 14 25 00 00    	lea    esi,[ebx+0x2514]
100f857d:	bf 06 00 00 00       	mov    edi,0x6
100f8582:	8b 0e                	mov    ecx,DWORD PTR [esi]
100f8584:	85 c9                	test   ecx,ecx
100f8586:	74 09                	je     0x100f8591
100f8588:	8b 01                	mov    eax,DWORD PTR [ecx]
100f858a:	53                   	push   ebx
100f858b:	ff 90 70 01 00 00    	call   DWORD PTR [eax+0x170]
100f8591:	83 c6 04             	add    esi,0x4
100f8594:	83 ef 01             	sub    edi,0x1
100f8597:	75 e9                	jne    0x100f8582
100f8599:	39 bb d8 24 00 00    	cmp    DWORD PTR [ebx+0x24d8],edi
100f859f:	75 40                	jne    0x100f85e1
100f85a1:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f85a4:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f85aa:	57                   	push   edi
100f85ab:	ff 35 cc 64 22 10    	push   DWORD PTR ds:0x102264cc
100f85b1:	6a 01                	push   0x1
100f85b3:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f85b9:	57                   	push   edi
100f85ba:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f85c0:	57                   	push   edi
100f85c1:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f85c7:	57                   	push   edi
100f85c8:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f85ce:	83 c4 1c             	add    esp,0x1c
100f85d1:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f85d7:	c7 83 d8 24 00 00 01 	mov    DWORD PTR [ebx+0x24d8],0x1
100f85de:	00 00 00 
100f85e1:	8b 83 2c 25 00 00    	mov    eax,DWORD PTR [ebx+0x252c]
100f85e7:	89 83 30 25 00 00    	mov    DWORD PTR [ebx+0x2530],eax
100f85ed:	8b 83 08 25 00 00    	mov    eax,DWORD PTR [ebx+0x2508]
100f85f3:	89 83 0c 25 00 00    	mov    DWORD PTR [ebx+0x250c],eax
100f85f9:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f85fe:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100f8602:	0f 2f 83 d0 26 00 00 	comiss xmm0,DWORD PTR [ebx+0x26d0]
100f8609:	76 17                	jbe    0x100f8622
100f860b:	0f 5a c0             	cvtps2pd xmm0,xmm0
100f860e:	f2 0f 58 05 10 1e 1a 	addsd  xmm0,QWORD PTR ds:0x101a1e10
100f8615:	10 
100f8616:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100f861a:	f3 0f 11 83 d0 26 00 	movss  DWORD PTR [ebx+0x26d0],xmm0
100f8621:	00 
100f8622:	5f                   	pop    edi
100f8623:	5e                   	pop    esi
100f8624:	5b                   	pop    ebx
100f8625:	8b e5                	mov    esp,ebp
100f8627:	5d                   	pop    ebp
100f8628:	c3                   	ret
