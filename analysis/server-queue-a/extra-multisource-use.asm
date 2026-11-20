
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100165a0 <.text+0x155a0>:
100165a0:	55                   	push   ebp
100165a1:	8b ec                	mov    ebp,esp
100165a3:	53                   	push   ebx
100165a4:	56                   	push   esi
100165a5:	8b f1                	mov    esi,ecx
100165a7:	57                   	push   edi
100165a8:	33 ff                	xor    edi,edi
100165aa:	39 be 5c 02 00 00    	cmp    DWORD PTR [esi+0x25c],edi
100165b0:	7e 22                	jle    0x100165d4
100165b2:	8d 9e dc 00 00 00    	lea    ebx,[esi+0xdc]
100165b8:	8b cb                	mov    ecx,ebx
100165ba:	47                   	inc    edi
100165bb:	83 c3 08             	add    ebx,0x8
100165be:	e8 cd 11 00 00       	call   0x10017790
100165c3:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
100165c6:	3b c1                	cmp    eax,ecx
100165c8:	74 0d                	je     0x100165d7
100165ca:	3b be 5c 02 00 00    	cmp    edi,DWORD PTR [esi+0x25c]
100165d0:	7c e6                	jl     0x100165b8
100165d2:	eb 03                	jmp    0x100165d7
100165d4:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
100165d7:	3b be 5c 02 00 00    	cmp    edi,DWORD PTR [esi+0x25c]
100165dd:	7e 6c                	jle    0x1001664b
100165df:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
100165e2:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100165e7:	8b ba d0 01 00 00    	mov    edi,DWORD PTR [edx+0x1d0]
100165ed:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
100165f3:	85 ff                	test   edi,edi
100165f5:	74 2c                	je     0x10016623
100165f7:	8d 04 0f             	lea    eax,[edi+ecx*1]
100165fa:	50                   	push   eax
100165fb:	8b 02                	mov    eax,DWORD PTR [edx]
100165fd:	03 c1                	add    eax,ecx
100165ff:	50                   	push   eax
10016600:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10016603:	8b 80 d0 01 00 00    	mov    eax,DWORD PTR [eax+0x1d0]
10016609:	03 c1                	add    eax,ecx
1001660b:	50                   	push   eax
1001660c:	68 e8 54 1a 10       	push   0x101a54e8
10016611:	6a 01                	push   0x1
10016613:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10016619:	83 c4 14             	add    esp,0x14
1001661c:	5f                   	pop    edi
1001661d:	5e                   	pop    esi
1001661e:	5b                   	pop    ebx
1001661f:	5d                   	pop    ebp
10016620:	c2 10 00             	ret    0x10
10016623:	8b 02                	mov    eax,DWORD PTR [edx]
10016625:	03 c1                	add    eax,ecx
10016627:	50                   	push   eax
10016628:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001662b:	8b 80 d0 01 00 00    	mov    eax,DWORD PTR [eax+0x1d0]
10016631:	03 c1                	add    eax,ecx
10016633:	50                   	push   eax
10016634:	68 18 55 1a 10       	push   0x101a5518
10016639:	6a 01                	push   0x1
1001663b:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10016641:	83 c4 10             	add    esp,0x10
10016644:	5f                   	pop    edi
10016645:	5e                   	pop    esi
10016646:	5b                   	pop    ebx
10016647:	5d                   	pop    ebp
10016648:	c2 10 00             	ret    0x10
1001664b:	8b 06                	mov    eax,DWORD PTR [esi]
1001664d:	8b ce                	mov    ecx,esi
1001664f:	ff 50 5c             	call   DWORD PTR [eax+0x5c]
10016652:	83 b4 be d8 01 00 00 	xor    DWORD PTR [esi+edi*4+0x1d8],0x1
10016659:	01 
1001665a:	8b ce                	mov    ecx,esi
1001665c:	8b 16                	mov    edx,DWORD PTR [esi]
1001665e:	8b d8                	mov    ebx,eax
10016660:	ff 52 5c             	call   DWORD PTR [edx+0x5c]
10016663:	3b d8                	cmp    ebx,eax
10016665:	0f 84 cb 00 00 00    	je     0x10016736
1001666b:	83 fb 02             	cmp    ebx,0x2
1001666e:	75 79                	jne    0x100166e9
10016670:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10016673:	83 b9 d4 01 00 00 00 	cmp    DWORD PTR [ecx+0x1d4],0x0
1001667a:	0f 84 b6 00 00 00    	je     0x10016736
10016680:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10016685:	ff b6 5c 02 00 00    	push   DWORD PTR [esi+0x25c]
1001668b:	8b 89 d0 01 00 00    	mov    ecx,DWORD PTR [ecx+0x1d0]
10016691:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
10016697:	51                   	push   ecx
10016698:	68 44 55 1a 10       	push   0x101a5544
1001669d:	53                   	push   ebx
1001669e:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100166a4:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100166a9:	83 c4 10             	add    esp,0x10
100166ac:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100166af:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100166b5:	03 81 d4 01 00 00    	add    eax,DWORD PTR [ecx+0x1d4]
100166bb:	83 be 60 02 00 00 00 	cmp    DWORD PTR [esi+0x260],0x0
100166c2:	74 04                	je     0x100166c8
100166c4:	33 c9                	xor    ecx,ecx
100166c6:	eb 05                	jmp    0x100166cd
100166c8:	b9 03 00 00 00       	mov    ecx,0x3
100166cd:	51                   	push   ecx
100166ce:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100166d5:	51                   	push   ecx
100166d6:	56                   	push   esi
100166d7:	6a 00                	push   0x0
100166d9:	50                   	push   eax
100166da:	e8 11 b9 0e 00       	call   0x10101ff0
100166df:	83 c4 14             	add    esp,0x14
100166e2:	5f                   	pop    edi
100166e3:	5e                   	pop    esi
100166e4:	5b                   	pop    ebx
100166e5:	5d                   	pop    ebp
100166e6:	c2 10 00             	ret    0x10
100166e9:	85 db                	test   ebx,ebx
100166eb:	75 49                	jne    0x10016736
100166ed:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100166f0:	ff b6 5c 02 00 00    	push   DWORD PTR [esi+0x25c]
100166f6:	8b 88 d0 01 00 00    	mov    ecx,DWORD PTR [eax+0x1d0]
100166fc:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10016701:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
10016707:	51                   	push   ecx
10016708:	68 6c 55 1a 10       	push   0x101a556c
1001670d:	6a 02                	push   0x2
1001670f:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10016715:	83 c4 0c             	add    esp,0xc
10016718:	33 c0                	xor    eax,eax
1001671a:	39 86 60 02 00 00    	cmp    DWORD PTR [esi+0x260],eax
10016720:	8b ce                	mov    ecx,esi
10016722:	0f 94 c0             	sete   al
10016725:	89 1c 24             	mov    DWORD PTR [esp],ebx
10016728:	8d 04 45 01 00 00 00 	lea    eax,[eax*2+0x1]
1001672f:	50                   	push   eax
10016730:	53                   	push   ebx
10016731:	e8 4a c3 0e 00       	call   0x10102a80
10016736:	5f                   	pop    edi
10016737:	5e                   	pop    esi
10016738:	5b                   	pop    ebx
10016739:	5d                   	pop    ebp
1001673a:	c2 10 00             	ret    0x10
