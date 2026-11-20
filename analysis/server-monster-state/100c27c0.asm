
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c27c0 <.text+0xc17c0>:
100c27c0:	56                   	push   esi
100c27c1:	57                   	push   edi
100c27c2:	8b f1                	mov    esi,ecx
100c27c4:	e8 37 88 f4 ff       	call   0x1000b000
100c27c9:	8b 96 24 02 00 00    	mov    edx,DWORD PTR [esi+0x224]
100c27cf:	4a                   	dec    edx
100c27d0:	83 fa 07             	cmp    edx,0x7
100c27d3:	0f 87 69 01 00 00    	ja     0x100c2942
100c27d9:	ff 24 95 4c 29 0c 10 	jmp    DWORD PTR [edx*4+0x100c294c]
100c27e0:	a9 00 00 01 00       	test   eax,0x10000
100c27e5:	74 13                	je     0x100c27fa
100c27e7:	c7 86 28 02 00 00 02 	mov    DWORD PTR [esi+0x228],0x2
100c27ee:	00 00 00 
100c27f1:	8b 86 28 02 00 00    	mov    eax,DWORD PTR [esi+0x228]
100c27f7:	5f                   	pop    edi
100c27f8:	5e                   	pop    esi
100c27f9:	c3                   	ret
100c27fa:	a9 00 01 00 00       	test   eax,0x100
100c27ff:	75 07                	jne    0x100c2808
100c2801:	a9 00 02 00 00       	test   eax,0x200
100c2806:	74 39                	je     0x100c2841
100c2808:	8b 86 f4 02 00 00    	mov    eax,DWORD PTR [esi+0x2f4]
100c280e:	83 ec 0c             	sub    esp,0xc
100c2811:	8b cc                	mov    ecx,esp
100c2813:	89 01                	mov    DWORD PTR [ecx],eax
100c2815:	8b 86 f8 02 00 00    	mov    eax,DWORD PTR [esi+0x2f8]
100c281b:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
100c281e:	8b 86 fc 02 00 00    	mov    eax,DWORD PTR [esi+0x2fc]
100c2824:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
100c2827:	8b ce                	mov    ecx,esi
100c2829:	e8 c2 d8 ff ff       	call   0x100c00f0
100c282e:	c7 86 28 02 00 00 03 	mov    DWORD PTR [esi+0x228],0x3
100c2835:	00 00 00 
100c2838:	8b 86 28 02 00 00    	mov    eax,DWORD PTR [esi+0x228]
100c283e:	5f                   	pop    edi
100c283f:	5e                   	pop    esi
100c2840:	c3                   	ret
100c2841:	a9 00 00 02 00       	test   eax,0x20000
100c2846:	74 36                	je     0x100c287e
100c2848:	8b 06                	mov    eax,DWORD PTR [esi]
100c284a:	8b ce                	mov    ecx,esi
100c284c:	ff 90 ec 01 00 00    	call   DWORD PTR [eax+0x1ec]
100c2852:	8b f8                	mov    edi,eax
100c2854:	85 ff                	test   edi,edi
100c2856:	0f 84 e6 00 00 00    	je     0x100c2942
100c285c:	8b 0f                	mov    ecx,DWORD PTR [edi]
100c285e:	83 ec 0c             	sub    esp,0xc
100c2861:	8b d4                	mov    edx,esp
100c2863:	89 0a                	mov    DWORD PTR [edx],ecx
100c2865:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100c2868:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
100c286b:	8b ce                	mov    ecx,esi
100c286d:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
100c2870:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
100c2873:	e8 78 d8 ff ff       	call   0x100c00f0
100c2878:	f6 47 0c 21          	test   BYTE PTR [edi+0xc],0x21
100c287c:	eb 05                	jmp    0x100c2883
100c287e:	a9 40 00 04 00       	test   eax,0x40040
100c2883:	0f 84 b9 00 00 00    	je     0x100c2942
100c2889:	c7 86 28 02 00 00 03 	mov    DWORD PTR [esi+0x228],0x3
100c2890:	00 00 00 
100c2893:	8b 86 28 02 00 00    	mov    eax,DWORD PTR [esi+0x228]
100c2899:	5f                   	pop    edi
100c289a:	5e                   	pop    esi
100c289b:	c3                   	ret
100c289c:	a9 10 00 01 00       	test   eax,0x10010
100c28a1:	0f 85 40 ff ff ff    	jne    0x100c27e7
100c28a7:	a9 00 00 02 00       	test   eax,0x20000
100c28ac:	0f 84 90 00 00 00    	je     0x100c2942
100c28b2:	8b 06                	mov    eax,DWORD PTR [esi]
100c28b4:	8b ce                	mov    ecx,esi
100c28b6:	c7 86 28 02 00 00 03 	mov    DWORD PTR [esi+0x228],0x3
100c28bd:	00 00 00 
100c28c0:	ff 90 ec 01 00 00    	call   DWORD PTR [eax+0x1ec]
100c28c6:	85 c0                	test   eax,eax
100c28c8:	74 78                	je     0x100c2942
100c28ca:	8b 08                	mov    ecx,DWORD PTR [eax]
100c28cc:	83 ec 0c             	sub    esp,0xc
100c28cf:	8b d4                	mov    edx,esp
100c28d1:	89 0a                	mov    DWORD PTR [edx],ecx
100c28d3:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
100c28d6:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
100c28d9:	8b ce                	mov    ecx,esi
100c28db:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
100c28de:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
100c28e1:	e8 0a d8 ff ff       	call   0x100c00f0
100c28e6:	8b 86 28 02 00 00    	mov    eax,DWORD PTR [esi+0x228]
100c28ec:	5f                   	pop    edi
100c28ed:	5e                   	pop    esi
100c28ee:	c3                   	ret
100c28ef:	8d 8e 84 01 00 00    	lea    ecx,[esi+0x184]
100c28f5:	e8 86 4e f5 ff       	call   0x10017780
100c28fa:	85 c0                	test   eax,eax
100c28fc:	75 44                	jne    0x100c2942
100c28fe:	68 c8 54 1d 10       	push   0x101d54c8
100c2903:	6a 02                	push   0x2
100c2905:	c7 86 28 02 00 00 03 	mov    DWORD PTR [esi+0x228],0x3
100c290c:	00 00 00 
100c290f:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c2915:	8b 86 28 02 00 00    	mov    eax,DWORD PTR [esi+0x228]
100c291b:	83 c4 08             	add    esp,0x8
100c291e:	5f                   	pop    edi
100c291f:	5e                   	pop    esi
100c2920:	c3                   	ret
100c2921:	a9 00 03 00 40       	test   eax,0x40000300
100c2926:	74 1a                	je     0x100c2942
100c2928:	8b ce                	mov    ecx,esi
100c292a:	e8 61 82 03 00       	call   0x100fab90
100c292f:	8b 86 28 02 00 00    	mov    eax,DWORD PTR [esi+0x228]
100c2935:	5f                   	pop    edi
100c2936:	5e                   	pop    esi
100c2937:	c3                   	ret
100c2938:	c7 86 28 02 00 00 08 	mov    DWORD PTR [esi+0x228],0x8
100c293f:	00 00 00 
100c2942:	8b 86 28 02 00 00    	mov    eax,DWORD PTR [esi+0x228]
100c2948:	5f                   	pop    edi
100c2949:	5e                   	pop    esi
100c294a:	c3                   	ret
