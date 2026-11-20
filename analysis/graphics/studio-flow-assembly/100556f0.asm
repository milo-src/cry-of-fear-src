
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\client.dll:     file format pei-i386


Disassembly of section .text:

100556f0 <.text+0x546f0>:
100556f0:	57                   	push   edi
100556f1:	68 f8 b1 14 10       	push   0x1014b1f8
100556f6:	8b f9                	mov    edi,ecx
100556f8:	e8 d3 7d 02 00       	call   0x1007d4d0
100556fd:	83 c4 04             	add    esp,0x4
10055700:	83 bf 14 02 00 00 00 	cmp    DWORD PTR [edi+0x214],0x0
10055707:	74 0f                	je     0x10055718
10055709:	68 0c b2 14 10       	push   0x1014b20c
1005570e:	e8 bd 7d 02 00       	call   0x1007d4d0
10055713:	83 c4 04             	add    esp,0x4
10055716:	5f                   	pop    edi
10055717:	c3                   	ret
10055718:	6a 00                	push   0x0
1005571a:	68 28 b2 14 10       	push   0x1014b228
1005571f:	ff 15 c4 26 1b 10    	call   DWORD PTR ds:0x101b26c4
10055725:	83 c4 08             	add    esp,0x8
10055728:	85 c0                	test   eax,eax
1005572a:	74 1a                	je     0x10055746
1005572c:	68 30 b2 14 10       	push   0x1014b230
10055731:	e8 9a 7d 02 00       	call   0x1007d4d0
10055736:	68 50 b2 14 10       	push   0x1014b250
1005573b:	ff 15 a8 26 1b 10    	call   DWORD PTR ds:0x101b26a8
10055741:	83 c4 08             	add    esp,0x8
10055744:	5f                   	pop    edi
10055745:	c3                   	ret
10055746:	56                   	push   esi
10055747:	ff 15 50 58 54 10    	call   DWORD PTR ds:0x10545850
1005574d:	85 c0                	test   eax,eax
1005574f:	75 3c                	jne    0x1005578d
10055751:	8b 35 64 a2 13 10    	mov    esi,DWORD PTR ds:0x1013a264
10055757:	6a 04                	push   0x4
10055759:	50                   	push   eax
1005575a:	68 90 b2 14 10       	push   0x1014b290
1005575f:	6a 00                	push   0x0
10055761:	ff d6                	call   esi
10055763:	83 f8 06             	cmp    eax,0x6
10055766:	0f 85 8e 00 00 00    	jne    0x100557fa
1005576c:	68 1c b3 14 10       	push   0x1014b31c
10055771:	68 34 b3 14 10       	push   0x1014b334
10055776:	e8 a5 fe ff ff       	call   0x10055620
1005577b:	83 c4 08             	add    esp,0x8
1005577e:	6a 00                	push   0x0
10055780:	6a 00                	push   0x0
10055782:	85 c0                	test   eax,eax
10055784:	74 5d                	je     0x100557e3
10055786:	68 48 b3 14 10       	push   0x1014b348
1005578b:	eb 5b                	jmp    0x100557e8
1005578d:	ff 15 50 58 54 10    	call   DWORD PTR ds:0x10545850
10055793:	83 f8 01             	cmp    eax,0x1
10055796:	74 62                	je     0x100557fa
10055798:	ff 15 50 58 54 10    	call   DWORD PTR ds:0x10545850
1005579e:	8b 35 64 a2 13 10    	mov    esi,DWORD PTR ds:0x1013a264
100557a4:	6a 04                	push   0x4
100557a6:	6a 00                	push   0x0
100557a8:	83 f8 02             	cmp    eax,0x2
100557ab:	75 07                	jne    0x100557b4
100557ad:	68 b0 b3 14 10       	push   0x1014b3b0
100557b2:	eb ab                	jmp    0x1005575f
100557b4:	68 38 b4 14 10       	push   0x1014b438
100557b9:	6a 00                	push   0x0
100557bb:	ff d6                	call   esi
100557bd:	83 f8 06             	cmp    eax,0x6
100557c0:	75 38                	jne    0x100557fa
100557c2:	68 1c b3 14 10       	push   0x1014b31c
100557c7:	68 34 b3 14 10       	push   0x1014b334
100557cc:	e8 4f fe ff ff       	call   0x10055620
100557d1:	83 c4 08             	add    esp,0x8
100557d4:	6a 00                	push   0x0
100557d6:	6a 00                	push   0x0
100557d8:	85 c0                	test   eax,eax
100557da:	74 07                	je     0x100557e3
100557dc:	68 c4 b4 14 10       	push   0x1014b4c4
100557e1:	eb 05                	jmp    0x100557e8
100557e3:	68 94 b3 14 10       	push   0x1014b394
100557e8:	6a 00                	push   0x0
100557ea:	ff d6                	call   esi
100557ec:	68 8c b3 14 10       	push   0x1014b38c
100557f1:	ff 15 58 26 1b 10    	call   DWORD PTR ds:0x101b2658
100557f7:	83 c4 04             	add    esp,0x4
100557fa:	ff 15 50 58 54 10    	call   DWORD PTR ds:0x10545850
10055800:	85 c0                	test   eax,eax
10055802:	75 25                	jne    0x10055829
10055804:	68 fc b4 14 10       	push   0x1014b4fc
10055809:	e8 c2 7c 02 00       	call   0x1007d4d0
1005580e:	68 1c b5 14 10       	push   0x1014b51c
10055813:	ff 15 a8 26 1b 10    	call   DWORD PTR ds:0x101b26a8
10055819:	83 c4 08             	add    esp,0x8
1005581c:	c7 87 14 02 00 00 01 	mov    DWORD PTR [edi+0x214],0x1
10055823:	00 00 00 
10055826:	5e                   	pop    esi
10055827:	5f                   	pop    edi
10055828:	c3                   	ret
10055829:	68 38 b5 14 10       	push   0x1014b538
1005582e:	ff 15 a0 a1 13 10    	call   DWORD PTR ds:0x1013a1a0
10055834:	89 87 10 02 00 00    	mov    DWORD PTR [edi+0x210],eax
1005583a:	85 c0                	test   eax,eax
1005583c:	75 25                	jne    0x10055863
1005583e:	68 48 b5 14 10       	push   0x1014b548
10055843:	e8 88 7c 02 00       	call   0x1007d4d0
10055848:	68 70 b5 14 10       	push   0x1014b570
1005584d:	ff 15 a8 26 1b 10    	call   DWORD PTR ds:0x101b26a8
10055853:	83 c4 08             	add    esp,0x8
10055856:	c7 87 14 02 00 00 01 	mov    DWORD PTR [edi+0x214],0x1
1005585d:	00 00 00 
10055860:	5e                   	pop    esi
10055861:	5f                   	pop    edi
10055862:	c3                   	ret
10055863:	8b cf                	mov    ecx,edi
10055865:	e8 16 e4 ff ff       	call   0x10053c80
