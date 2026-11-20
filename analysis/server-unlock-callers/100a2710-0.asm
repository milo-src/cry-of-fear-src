
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100a2710 <.text+0xa1710>:
100a2710:	55                   	push   ebp
100a2711:	8b ec                	mov    ebp,esp
100a2713:	81 ec 18 02 00 00    	sub    esp,0x218
100a2719:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100a271e:	33 c5                	xor    eax,ebp
100a2720:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100a2723:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
100a2727:	53                   	push   ebx
100a2728:	8b d9                	mov    ebx,ecx
100a272a:	0f 84 99 11 00 00    	je     0x100a38c9
100a2730:	56                   	push   esi
100a2731:	8d 85 fc fd ff ff    	lea    eax,[ebp-0x204]
100a2737:	c7 85 ec fd ff ff 00 	mov    DWORD PTR [ebp-0x214],0x0
100a273e:	00 00 00 
100a2741:	57                   	push   edi
100a2742:	50                   	push   eax
100a2743:	c7 85 f0 fd ff ff 00 	mov    DWORD PTR [ebp-0x210],0x0
100a274a:	00 00 00 
100a274d:	ff 15 d4 30 22 10    	call   DWORD PTR ds:0x102230d4
100a2753:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a2756:	83 c4 04             	add    esp,0x4
100a2759:	8b 88 d8 01 00 00    	mov    ecx,DWORD PTR [eax+0x1d8]
100a275f:	85 c9                	test   ecx,ecx
100a2761:	0f 84 f4 00 00 00    	je     0x100a285b
100a2767:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100a276c:	68 8c 8b 1c 10       	push   0x101c8b8c
100a2771:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100a2777:	03 c1                	add    eax,ecx
100a2779:	50                   	push   eax
100a277a:	e8 71 ce 09 00       	call   0x1013f5f0
100a277f:	8b 15 88 31 22 10    	mov    edx,DWORD PTR ds:0x10223188
100a2785:	83 c4 08             	add    esp,0x8
100a2788:	8b 92 98 00 00 00    	mov    edx,DWORD PTR [edx+0x98]
100a278e:	85 c0                	test   eax,eax
100a2790:	0f 85 92 00 00 00    	jne    0x100a2828
100a2796:	66 a1 48 14 1b 10    	mov    ax,ds:0x101b1448
100a279c:	f3 0f 7e 05 40 14 1b 	movq   xmm0,QWORD PTR ds:0x101b1440
100a27a3:	10 
100a27a4:	66 89 85 04 ff ff ff 	mov    WORD PTR [ebp-0xfc],ax
100a27ab:	a0 4a 14 1b 10       	mov    al,ds:0x101b144a
100a27b0:	88 85 06 ff ff ff    	mov    BYTE PTR [ebp-0xfa],al
100a27b6:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a27b9:	66 0f d6 85 fc fe ff 	movq   QWORD PTR [ebp-0x104],xmm0
100a27c0:	ff 
100a27c1:	03 90 d8 01 00 00    	add    edx,DWORD PTR [eax+0x1d8]
100a27c7:	8b f2                	mov    esi,edx
100a27c9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100a27d0:	8a 02                	mov    al,BYTE PTR [edx]
100a27d2:	42                   	inc    edx
100a27d3:	84 c0                	test   al,al
100a27d5:	75 f9                	jne    0x100a27d0
100a27d7:	8d bd fc fe ff ff    	lea    edi,[ebp-0x104]
100a27dd:	2b d6                	sub    edx,esi
100a27df:	4f                   	dec    edi
100a27e0:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
100a27e3:	47                   	inc    edi
100a27e4:	84 c0                	test   al,al
100a27e6:	75 f8                	jne    0x100a27e0
100a27e8:	8b ca                	mov    ecx,edx
100a27ea:	c1 e9 02             	shr    ecx,0x2
100a27ed:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
100a27ef:	8b ca                	mov    ecx,edx
100a27f1:	8d 95 fc fe ff ff    	lea    edx,[ebp-0x104]
100a27f7:	83 e1 03             	and    ecx,0x3
100a27fa:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
100a27fc:	8b f2                	mov    esi,edx
100a27fe:	66 90                	xchg   ax,ax
100a2800:	8a 02                	mov    al,BYTE PTR [edx]
100a2802:	42                   	inc    edx
100a2803:	84 c0                	test   al,al
100a2805:	75 f9                	jne    0x100a2800
100a2807:	8d bd fc fd ff ff    	lea    edi,[ebp-0x204]
100a280d:	2b d6                	sub    edx,esi
100a280f:	4f                   	dec    edi
100a2810:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
100a2813:	47                   	inc    edi
100a2814:	84 c0                	test   al,al
100a2816:	75 f8                	jne    0x100a2810
100a2818:	8b ca                	mov    ecx,edx
100a281a:	c1 e9 02             	shr    ecx,0x2
100a281d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
100a281f:	8b ca                	mov    ecx,edx
100a2821:	83 e1 03             	and    ecx,0x3
100a2824:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
100a2826:	eb 75                	jmp    0x100a289d
100a2828:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a282b:	03 90 d8 01 00 00    	add    edx,DWORD PTR [eax+0x1d8]
100a2831:	8b f2                	mov    esi,edx
100a2833:	8a 02                	mov    al,BYTE PTR [edx]
100a2835:	42                   	inc    edx
100a2836:	84 c0                	test   al,al
100a2838:	75 f9                	jne    0x100a2833
100a283a:	8d bd fc fd ff ff    	lea    edi,[ebp-0x204]
100a2840:	2b d6                	sub    edx,esi
100a2842:	4f                   	dec    edi
100a2843:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
100a2846:	47                   	inc    edi
100a2847:	84 c0                	test   al,al
100a2849:	75 f8                	jne    0x100a2843
100a284b:	8b ca                	mov    ecx,edx
100a284d:	c1 e9 02             	shr    ecx,0x2
100a2850:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
100a2852:	8b ca                	mov    ecx,edx
100a2854:	83 e1 03             	and    ecx,0x3
100a2857:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
100a2859:	eb 42                	jmp    0x100a289d
100a285b:	8d 8d fc fd ff ff    	lea    ecx,[ebp-0x204]
100a2861:	49                   	dec    ecx
100a2862:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100a2865:	8d 49 01             	lea    ecx,[ecx+0x1]
100a2868:	84 c0                	test   al,al
100a286a:	75 f6                	jne    0x100a2862
100a286c:	a1 98 8b 1c 10       	mov    eax,ds:0x101c8b98
100a2871:	89 01                	mov    DWORD PTR [ecx],eax
100a2873:	a1 9c 8b 1c 10       	mov    eax,ds:0x101c8b9c
100a2878:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
100a287b:	a1 a0 8b 1c 10       	mov    eax,ds:0x101c8ba0
100a2880:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
100a2883:	a1 a4 8b 1c 10       	mov    eax,ds:0x101c8ba4
100a2888:	89 41 0c             	mov    DWORD PTR [ecx+0xc],eax
100a288b:	a1 a8 8b 1c 10       	mov    eax,ds:0x101c8ba8
100a2890:	89 41 10             	mov    DWORD PTR [ecx+0x10],eax
100a2893:	66 a1 ac 8b 1c 10    	mov    ax,ds:0x101c8bac
100a2899:	66 89 41 14          	mov    WORD PTR [ecx+0x14],ax
100a289d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100a28a2:	b9 01 00 00 00       	mov    ecx,0x1
100a28a7:	89 8d e8 fd ff ff    	mov    DWORD PTR [ebp-0x218],ecx
100a28ad:	39 88 90 00 00 00    	cmp    DWORD PTR [eax+0x90],ecx
100a28b3:	0f 8c 0e 10 00 00    	jl     0x100a38c7
100a28b9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100a28c0:	51                   	push   ecx
100a28c1:	e8 ba 6d 07 00       	call   0x10119680
100a28c6:	83 c4 04             	add    esp,0x4
100a28c9:	85 c0                	test   eax,eax
100a28cb:	0f 84 d8 0f 00 00    	je     0x100a38a9
100a28d1:	ff 70 04             	push   DWORD PTR [eax+0x4]
100a28d4:	e8 07 fd f6 ff       	call   0x100125e0
100a28d9:	8b f0                	mov    esi,eax
100a28db:	83 c4 04             	add    esp,0x4
100a28de:	85 f6                	test   esi,esi
100a28e0:	0f 84 c3 0f 00 00    	je     0x100a38a9
100a28e6:	33 ff                	xor    edi,edi
100a28e8:	c7 85 f8 fd ff ff 07 	mov    DWORD PTR [ebp-0x208],0x7
100a28ef:	00 00 00 
100a28f2:	80 be 78 06 00 00 00 	cmp    BYTE PTR [esi+0x678],0x0
100a28f9:	89 bd f4 fd ff ff    	mov    DWORD PTR [ebp-0x20c],edi
100a28ff:	0f 84 bf 0c 00 00    	je     0x100a35c4
100a2905:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100a290a:	68 b0 8b 1c 10       	push   0x101c8bb0
100a290f:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
100a2915:	03 48 0c             	add    ecx,DWORD PTR [eax+0xc]
100a2918:	51                   	push   ecx
100a2919:	e8 d2 cc 09 00       	call   0x1013f5f0
100a291e:	83 c4 08             	add    esp,0x8
100a2921:	85 c0                	test   eax,eax
100a2923:	74 07                	je     0x100a292c
100a2925:	c6 86 79 06 00 00 01 	mov    BYTE PTR [esi+0x679],0x1
100a292c:	80 be 78 06 00 00 00 	cmp    BYTE PTR [esi+0x678],0x0
100a2933:	0f 84 8b 0c 00 00    	je     0x100a35c4
100a2939:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a293c:	8b 80 a4 01 00 00    	mov    eax,DWORD PTR [eax+0x1a4]
100a2942:	a8 01                	test   al,0x1
100a2944:	0f 85 7a 0c 00 00    	jne    0x100a35c4
100a294a:	80 be 79 06 00 00 00 	cmp    BYTE PTR [esi+0x679],0x0
100a2951:	0f 84 6d 0c 00 00    	je     0x100a35c4
100a2957:	8b 8e 2c 04 00 00    	mov    ecx,DWORD PTR [esi+0x42c]
100a295d:	f7 c1 00 00 08 00    	test   ecx,0x80000
100a2963:	74 21                	je     0x100a2986
100a2965:	a8 02                	test   al,0x2
100a2967:	74 1d                	je     0x100a2986
100a2969:	6a 00                	push   0x0
100a296b:	6a 00                	push   0x0
100a296d:	6a 00                	push   0x0
100a296f:	68 00 00 08 00       	push   0x80000
100a2974:	8b ce                	mov    ecx,esi
100a2976:	e8 55 05 05 00       	call   0x100f2ed0
100a297b:	8b 8e 2c 04 00 00    	mov    ecx,DWORD PTR [esi+0x42c]
100a2981:	bf 00 00 08 00       	mov    edi,0x80000
100a2986:	84 c9                	test   cl,cl
100a2988:	79 2a                	jns    0x100a29b4
100a298a:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a298d:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a2994:	74 1e                	je     0x100a29b4
100a2996:	6a 00                	push   0x0
100a2998:	6a 00                	push   0x0
100a299a:	6a 00                	push   0x0
100a299c:	68 80 00 00 00       	push   0x80
100a29a1:	8b ce                	mov    ecx,esi
100a29a3:	e8 28 05 05 00       	call   0x100f2ed0
100a29a8:	8b 8e 2c 04 00 00    	mov    ecx,DWORD PTR [esi+0x42c]
100a29ae:	81 cf 80 00 00 00    	or     edi,0x80
100a29b4:	f7 c1 00 01 00 00    	test   ecx,0x100
100a29ba:	74 2a                	je     0x100a29e6
100a29bc:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a29bf:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a29c6:	74 1e                	je     0x100a29e6
100a29c8:	6a 00                	push   0x0
100a29ca:	6a 00                	push   0x0
100a29cc:	6a 00                	push   0x0
100a29ce:	68 00 01 00 00       	push   0x100
100a29d3:	8b ce                	mov    ecx,esi
100a29d5:	e8 f6 04 05 00       	call   0x100f2ed0
100a29da:	8b 8e 2c 04 00 00    	mov    ecx,DWORD PTR [esi+0x42c]
100a29e0:	81 cf 00 01 00 00    	or     edi,0x100
100a29e6:	f7 c1 00 02 00 00    	test   ecx,0x200
100a29ec:	74 2a                	je     0x100a2a18
100a29ee:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a29f1:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a29f8:	74 1e                	je     0x100a2a18
100a29fa:	6a 00                	push   0x0
100a29fc:	6a 00                	push   0x0
100a29fe:	6a 00                	push   0x0
100a2a00:	68 00 02 00 00       	push   0x200
100a2a05:	8b ce                	mov    ecx,esi
100a2a07:	e8 c4 04 05 00       	call   0x100f2ed0
100a2a0c:	8b 8e 2c 04 00 00    	mov    ecx,DWORD PTR [esi+0x42c]
100a2a12:	81 cf 00 02 00 00    	or     edi,0x200
100a2a18:	f7 c1 00 04 00 00    	test   ecx,0x400
100a2a1e:	74 2a                	je     0x100a2a4a
100a2a20:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a2a23:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a2a2a:	74 1e                	je     0x100a2a4a
100a2a2c:	6a 00                	push   0x0
100a2a2e:	6a 00                	push   0x0
100a2a30:	6a 00                	push   0x0
100a2a32:	68 00 04 00 00       	push   0x400
100a2a37:	8b ce                	mov    ecx,esi
100a2a39:	e8 92 04 05 00       	call   0x100f2ed0
100a2a3e:	8b 8e 2c 04 00 00    	mov    ecx,DWORD PTR [esi+0x42c]
100a2a44:	81 cf 00 04 00 00    	or     edi,0x400
100a2a4a:	f7 c1 00 08 00 00    	test   ecx,0x800
100a2a50:	74 2a                	je     0x100a2a7c
100a2a52:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a2a55:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a2a5c:	74 1e                	je     0x100a2a7c
100a2a5e:	6a 00                	push   0x0
100a2a60:	6a 00                	push   0x0
100a2a62:	6a 00                	push   0x0
100a2a64:	68 00 08 00 00       	push   0x800
100a2a69:	8b ce                	mov    ecx,esi
100a2a6b:	e8 60 04 05 00       	call   0x100f2ed0
100a2a70:	8b 8e 2c 04 00 00    	mov    ecx,DWORD PTR [esi+0x42c]
100a2a76:	81 cf 00 08 00 00    	or     edi,0x800
100a2a7c:	f7 c1 00 10 00 00    	test   ecx,0x1000
100a2a82:	74 2a                	je     0x100a2aae
100a2a84:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a2a87:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a2a8e:	74 1e                	je     0x100a2aae
100a2a90:	6a 00                	push   0x0
100a2a92:	6a 00                	push   0x0
100a2a94:	6a 00                	push   0x0
100a2a96:	68 00 10 00 00       	push   0x1000
100a2a9b:	8b ce                	mov    ecx,esi
100a2a9d:	e8 2e 04 05 00       	call   0x100f2ed0
100a2aa2:	8b 8e 2c 04 00 00    	mov    ecx,DWORD PTR [esi+0x42c]
100a2aa8:	81 cf 00 10 00 00    	or     edi,0x1000
100a2aae:	f7 c1 00 20 00 00    	test   ecx,0x2000
100a2ab4:	74 2a                	je     0x100a2ae0
100a2ab6:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a2ab9:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a2ac0:	74 1e                	je     0x100a2ae0
100a2ac2:	6a 00                	push   0x0
100a2ac4:	6a 00                	push   0x0
100a2ac6:	6a 00                	push   0x0
100a2ac8:	68 00 20 00 00       	push   0x2000
100a2acd:	8b ce                	mov    ecx,esi
100a2acf:	e8 fc 03 05 00       	call   0x100f2ed0
100a2ad4:	8b 8e 2c 04 00 00    	mov    ecx,DWORD PTR [esi+0x42c]
100a2ada:	81 cf 00 20 00 00    	or     edi,0x2000
100a2ae0:	f7 c1 00 40 00 00    	test   ecx,0x4000
100a2ae6:	74 2a                	je     0x100a2b12
100a2ae8:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a2aeb:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a2af2:	74 1e                	je     0x100a2b12
100a2af4:	6a 00                	push   0x0
100a2af6:	6a 00                	push   0x0
100a2af8:	6a 00                	push   0x0
100a2afa:	68 00 40 00 00       	push   0x4000
100a2aff:	8b ce                	mov    ecx,esi
100a2b01:	e8 ca 03 05 00       	call   0x100f2ed0
100a2b06:	8b 8e 2c 04 00 00    	mov    ecx,DWORD PTR [esi+0x42c]
100a2b0c:	81 cf 00 40 00 00    	or     edi,0x4000
100a2b12:	f7 c1 00 80 00 00    	test   ecx,0x8000
100a2b18:	74 2a                	je     0x100a2b44
100a2b1a:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a2b1d:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a2b24:	74 1e                	je     0x100a2b44
100a2b26:	6a 00                	push   0x0
100a2b28:	6a 00                	push   0x0
100a2b2a:	6a 00                	push   0x0
100a2b2c:	68 00 80 00 00       	push   0x8000
100a2b31:	8b ce                	mov    ecx,esi
100a2b33:	e8 98 03 05 00       	call   0x100f2ed0
100a2b38:	8b 8e 2c 04 00 00    	mov    ecx,DWORD PTR [esi+0x42c]
100a2b3e:	81 cf 00 80 00 00    	or     edi,0x8000
100a2b44:	f7 c1 00 00 01 00    	test   ecx,0x10000
100a2b4a:	74 2a                	je     0x100a2b76
100a2b4c:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a2b4f:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a2b56:	74 1e                	je     0x100a2b76
100a2b58:	6a 00                	push   0x0
100a2b5a:	6a 00                	push   0x0
100a2b5c:	6a 00                	push   0x0
100a2b5e:	68 00 00 01 00       	push   0x10000
100a2b63:	8b ce                	mov    ecx,esi
100a2b65:	e8 66 03 05 00       	call   0x100f2ed0
100a2b6a:	8b 8e 2c 04 00 00    	mov    ecx,DWORD PTR [esi+0x42c]
100a2b70:	81 cf 00 00 01 00    	or     edi,0x10000
100a2b76:	f7 c1 00 00 02 00    	test   ecx,0x20000
100a2b7c:	74 2a                	je     0x100a2ba8
100a2b7e:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a2b81:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a2b88:	74 1e                	je     0x100a2ba8
100a2b8a:	6a 00                	push   0x0
100a2b8c:	6a 00                	push   0x0
100a2b8e:	6a 00                	push   0x0
100a2b90:	68 00 00 02 00       	push   0x20000
100a2b95:	8b ce                	mov    ecx,esi
100a2b97:	e8 34 03 05 00       	call   0x100f2ed0
100a2b9c:	8b 8e 2c 04 00 00    	mov    ecx,DWORD PTR [esi+0x42c]
100a2ba2:	81 cf 00 00 02 00    	or     edi,0x20000
100a2ba8:	f7 c1 00 00 04 00    	test   ecx,0x40000
100a2bae:	74 2a                	je     0x100a2bda
100a2bb0:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a2bb3:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a2bba:	74 1e                	je     0x100a2bda
100a2bbc:	6a 00                	push   0x0
100a2bbe:	6a 00                	push   0x0
100a2bc0:	6a 00                	push   0x0
100a2bc2:	68 00 00 04 00       	push   0x40000
100a2bc7:	8b ce                	mov    ecx,esi
100a2bc9:	e8 02 03 05 00       	call   0x100f2ed0
100a2bce:	8b 8e 2c 04 00 00    	mov    ecx,DWORD PTR [esi+0x42c]
100a2bd4:	81 cf 00 00 04 00    	or     edi,0x40000
100a2bda:	f7 c1 00 00 00 02    	test   ecx,0x2000000
100a2be0:	74 2a                	je     0x100a2c0c
100a2be2:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a2be5:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a2bec:	74 1e                	je     0x100a2c0c
100a2bee:	6a 00                	push   0x0
100a2bf0:	6a 00                	push   0x0
100a2bf2:	6a 00                	push   0x0
100a2bf4:	68 00 00 00 02       	push   0x2000000
100a2bf9:	8b ce                	mov    ecx,esi
100a2bfb:	e8 d0 02 05 00       	call   0x100f2ed0
100a2c00:	8b 8e 2c 04 00 00    	mov    ecx,DWORD PTR [esi+0x42c]
100a2c06:	81 cf 00 00 00 02    	or     edi,0x2000000
100a2c0c:	f7 c1 00 00 00 04    	test   ecx,0x4000000
100a2c12:	74 2a                	je     0x100a2c3e
100a2c14:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a2c17:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a2c1e:	74 1e                	je     0x100a2c3e
100a2c20:	6a 00                	push   0x0
100a2c22:	6a 00                	push   0x0
100a2c24:	6a 00                	push   0x0
100a2c26:	68 00 00 00 04       	push   0x4000000
100a2c2b:	8b ce                	mov    ecx,esi
100a2c2d:	e8 9e 02 05 00       	call   0x100f2ed0
100a2c32:	8b 8e 2c 04 00 00    	mov    ecx,DWORD PTR [esi+0x42c]
100a2c38:	81 cf 00 00 00 04    	or     edi,0x4000000
100a2c3e:	f7 c1 00 00 00 08    	test   ecx,0x8000000
100a2c44:	74 2a                	je     0x100a2c70
100a2c46:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a2c49:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a2c50:	74 1e                	je     0x100a2c70
100a2c52:	6a 00                	push   0x0
100a2c54:	6a 00                	push   0x0
100a2c56:	6a 00                	push   0x0
100a2c58:	68 00 00 00 08       	push   0x8000000
100a2c5d:	8b ce                	mov    ecx,esi
100a2c5f:	e8 6c 02 05 00       	call   0x100f2ed0
100a2c64:	8b 8e 2c 04 00 00    	mov    ecx,DWORD PTR [esi+0x42c]
100a2c6a:	81 cf 00 00 00 08    	or     edi,0x8000000
100a2c70:	f7 c1 00 00 00 10    	test   ecx,0x10000000
100a2c76:	74 2a                	je     0x100a2ca2
100a2c78:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a2c7b:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a2c82:	74 1e                	je     0x100a2ca2
100a2c84:	6a 00                	push   0x0
100a2c86:	6a 00                	push   0x0
100a2c88:	6a 00                	push   0x0
100a2c8a:	68 00 00 00 10       	push   0x10000000
100a2c8f:	8b ce                	mov    ecx,esi
100a2c91:	e8 3a 02 05 00       	call   0x100f2ed0
100a2c96:	8b 8e 2c 04 00 00    	mov    ecx,DWORD PTR [esi+0x42c]
100a2c9c:	81 cf 00 00 00 10    	or     edi,0x10000000
100a2ca2:	f7 c1 00 00 00 20    	test   ecx,0x20000000
100a2ca8:	74 2a                	je     0x100a2cd4
100a2caa:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a2cad:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a2cb4:	74 1e                	je     0x100a2cd4
100a2cb6:	6a 00                	push   0x0
100a2cb8:	6a 00                	push   0x0
100a2cba:	6a 00                	push   0x0
100a2cbc:	68 00 00 00 20       	push   0x20000000
100a2cc1:	8b ce                	mov    ecx,esi
100a2cc3:	e8 08 02 05 00       	call   0x100f2ed0
100a2cc8:	8b 8e 2c 04 00 00    	mov    ecx,DWORD PTR [esi+0x42c]
100a2cce:	81 cf 00 00 00 20    	or     edi,0x20000000
100a2cd4:	f7 c1 00 00 00 40    	test   ecx,0x40000000
100a2cda:	74 24                	je     0x100a2d00
100a2cdc:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a2cdf:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a2ce6:	74 18                	je     0x100a2d00
100a2ce8:	6a 00                	push   0x0
100a2cea:	6a 00                	push   0x0
100a2cec:	6a 00                	push   0x0
100a2cee:	68 00 00 00 40       	push   0x40000000
100a2cf3:	8b ce                	mov    ecx,esi
100a2cf5:	e8 d6 01 05 00       	call   0x100f2ed0
100a2cfa:	81 cf 00 00 00 40    	or     edi,0x40000000
100a2d00:	8b 86 6c 06 00 00    	mov    eax,DWORD PTR [esi+0x66c]
100a2d06:	8b c8                	mov    ecx,eax
100a2d08:	c1 e1 04             	shl    ecx,0x4
100a2d0b:	2b c8                	sub    ecx,eax
100a2d0d:	8b 86 68 06 00 00    	mov    eax,DWORD PTR [esi+0x668]
100a2d13:	8d 04 88             	lea    eax,[eax+ecx*4]
100a2d16:	3d 96 00 00 00       	cmp    eax,0x96
100a2d1b:	7f 40                	jg     0x100a2d5d
100a2d1d:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a2d20:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a2d27:	74 34                	je     0x100a2d5d
100a2d29:	6a 00                	push   0x0
100a2d2b:	6a 00                	push   0x0
100a2d2d:	68 00 00 10 00       	push   0x100000
100a2d32:	8b ce                	mov    ecx,esi
100a2d34:	e8 c7 a2 03 00       	call   0x100dd000
100a2d39:	84 c0                	test   al,al
100a2d3b:	75 0e                	jne    0x100a2d4b
100a2d3d:	38 86 80 06 00 00    	cmp    BYTE PTR [esi+0x680],al
100a2d43:	75 06                	jne    0x100a2d4b
100a2d45:	81 cf 00 00 10 00    	or     edi,0x100000
100a2d4b:	6a 00                	push   0x0
100a2d4d:	6a 00                	push   0x0
100a2d4f:	6a 00                	push   0x0
100a2d51:	68 00 00 10 00       	push   0x100000
100a2d56:	8b ce                	mov    ecx,esi
100a2d58:	e8 73 01 05 00       	call   0x100f2ed0
100a2d5d:	8a 8e cd 04 00 00    	mov    cl,BYTE PTR [esi+0x4cd]
100a2d63:	84 c9                	test   cl,cl
100a2d65:	0f 85 af 00 00 00    	jne    0x100a2e1a
100a2d6b:	38 8e ce 04 00 00    	cmp    BYTE PTR [esi+0x4ce],cl
100a2d71:	75 47                	jne    0x100a2dba
100a2d73:	38 8e 80 06 00 00    	cmp    BYTE PTR [esi+0x680],cl
100a2d79:	75 3f                	jne    0x100a2dba
100a2d7b:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a2d7e:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a2d85:	74 33                	je     0x100a2dba
100a2d87:	6a 00                	push   0x0
100a2d89:	6a 00                	push   0x0
100a2d8b:	6a 01                	push   0x1
100a2d8d:	8b ce                	mov    ecx,esi
100a2d8f:	e8 6c a2 03 00       	call   0x100dd000
100a2d94:	84 c0                	test   al,al
100a2d96:	75 03                	jne    0x100a2d9b
100a2d98:	83 cf 01             	or     edi,0x1
100a2d9b:	6a 00                	push   0x0
100a2d9d:	6a 00                	push   0x0
100a2d9f:	6a 00                	push   0x0
100a2da1:	6a 01                	push   0x1
100a2da3:	8b ce                	mov    ecx,esi
100a2da5:	e8 26 01 05 00       	call   0x100f2ed0
100a2daa:	8a 8e cd 04 00 00    	mov    cl,BYTE PTR [esi+0x4cd]
100a2db0:	c7 85 f4 fd ff ff 01 	mov    DWORD PTR [ebp-0x20c],0x1
100a2db7:	00 00 00 
100a2dba:	84 c9                	test   cl,cl
100a2dbc:	75 5c                	jne    0x100a2e1a
100a2dbe:	38 8e 80 06 00 00    	cmp    BYTE PTR [esi+0x680],cl
100a2dc4:	0f 85 fc 00 00 00    	jne    0x100a2ec6
100a2dca:	80 be ce 04 00 00 01 	cmp    BYTE PTR [esi+0x4ce],0x1
100a2dd1:	0f 85 ef 00 00 00    	jne    0x100a2ec6
100a2dd7:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a2dda:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a2de1:	0f 84 df 00 00 00    	je     0x100a2ec6
100a2de7:	6a 00                	push   0x0
100a2de9:	6a 00                	push   0x0
100a2deb:	6a 02                	push   0x2
100a2ded:	8b ce                	mov    ecx,esi
100a2def:	e8 0c a2 03 00       	call   0x100dd000
100a2df4:	84 c0                	test   al,al
100a2df6:	75 03                	jne    0x100a2dfb
100a2df8:	83 cf 02             	or     edi,0x2
100a2dfb:	6a 00                	push   0x0
100a2dfd:	6a 00                	push   0x0
100a2dff:	6a 00                	push   0x0
100a2e01:	6a 02                	push   0x2
100a2e03:	8b ce                	mov    ecx,esi
100a2e05:	e8 c6 00 05 00       	call   0x100f2ed0
100a2e0a:	8a 8e cd 04 00 00    	mov    cl,BYTE PTR [esi+0x4cd]
100a2e10:	c7 85 f4 fd ff ff 02 	mov    DWORD PTR [ebp-0x20c],0x2
100a2e17:	00 00 00 
100a2e1a:	80 f9 01             	cmp    cl,0x1
100a2e1d:	0f 85 a3 00 00 00    	jne    0x100a2ec6
100a2e23:	80 be 80 06 00 00 00 	cmp    BYTE PTR [esi+0x680],0x0
100a2e2a:	0f 85 96 00 00 00    	jne    0x100a2ec6
100a2e30:	80 be ce 04 00 00 00 	cmp    BYTE PTR [esi+0x4ce],0x0
100a2e37:	75 42                	jne    0x100a2e7b
100a2e39:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a2e3c:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a2e43:	74 36                	je     0x100a2e7b
100a2e45:	6a 00                	push   0x0
100a2e47:	6a 00                	push   0x0
100a2e49:	6a 04                	push   0x4
100a2e4b:	8b ce                	mov    ecx,esi
100a2e4d:	e8 ae a1 03 00       	call   0x100dd000
100a2e52:	84 c0                	test   al,al
100a2e54:	75 03                	jne    0x100a2e59
100a2e56:	83 cf 04             	or     edi,0x4
100a2e59:	6a 00                	push   0x0
100a2e5b:	6a 00                	push   0x0
100a2e5d:	6a 00                	push   0x0
100a2e5f:	6a 04                	push   0x4
100a2e61:	8b ce                	mov    ecx,esi
100a2e63:	e8 68 00 05 00       	call   0x100f2ed0
100a2e68:	80 be cd 04 00 00 01 	cmp    BYTE PTR [esi+0x4cd],0x1
100a2e6f:	c7 85 f4 fd ff ff 03 	mov    DWORD PTR [ebp-0x20c],0x3
100a2e76:	00 00 00 
100a2e79:	75 4b                	jne    0x100a2ec6
100a2e7b:	80 be 80 06 00 00 00 	cmp    BYTE PTR [esi+0x680],0x0
100a2e82:	75 42                	jne    0x100a2ec6
100a2e84:	80 be ce 04 00 00 01 	cmp    BYTE PTR [esi+0x4ce],0x1
100a2e8b:	75 39                	jne    0x100a2ec6
100a2e8d:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a2e90:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a2e97:	74 2d                	je     0x100a2ec6
100a2e99:	6a 00                	push   0x0
100a2e9b:	6a 00                	push   0x0
100a2e9d:	6a 08                	push   0x8
100a2e9f:	8b ce                	mov    ecx,esi
100a2ea1:	e8 5a a1 03 00       	call   0x100dd000
100a2ea6:	84 c0                	test   al,al
100a2ea8:	75 03                	jne    0x100a2ead
100a2eaa:	83 cf 08             	or     edi,0x8
100a2ead:	6a 00                	push   0x0
100a2eaf:	6a 00                	push   0x0
100a2eb1:	6a 00                	push   0x0
100a2eb3:	6a 08                	push   0x8
100a2eb5:	8b ce                	mov    ecx,esi
100a2eb7:	e8 14 00 05 00       	call   0x100f2ed0
100a2ebc:	c7 85 f4 fd ff ff 04 	mov    DWORD PTR [ebp-0x20c],0x4
100a2ec3:	00 00 00 
100a2ec6:	80 be cf 04 00 00 01 	cmp    BYTE PTR [esi+0x4cf],0x1
100a2ecd:	75 42                	jne    0x100a2f11
100a2ecf:	80 be 80 06 00 00 00 	cmp    BYTE PTR [esi+0x680],0x0
100a2ed6:	75 42                	jne    0x100a2f1a
100a2ed8:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a2edb:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a2ee2:	74 2d                	je     0x100a2f11
100a2ee4:	6a 00                	push   0x0
100a2ee6:	6a 00                	push   0x0
100a2ee8:	6a 10                	push   0x10
100a2eea:	8b ce                	mov    ecx,esi
100a2eec:	e8 0f a1 03 00       	call   0x100dd000
100a2ef1:	84 c0                	test   al,al
100a2ef3:	75 03                	jne    0x100a2ef8
100a2ef5:	83 cf 10             	or     edi,0x10
100a2ef8:	6a 00                	push   0x0
100a2efa:	6a 00                	push   0x0
100a2efc:	6a 00                	push   0x0
100a2efe:	6a 10                	push   0x10
100a2f00:	8b ce                	mov    ecx,esi
100a2f02:	e8 c9 ff 04 00       	call   0x100f2ed0
100a2f07:	c7 85 f4 fd ff ff 05 	mov    DWORD PTR [ebp-0x20c],0x5
100a2f0e:	00 00 00 
100a2f11:	80 be 80 06 00 00 00 	cmp    BYTE PTR [esi+0x680],0x0
100a2f18:	74 2f                	je     0x100a2f49
100a2f1a:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a2f1d:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a2f24:	74 23                	je     0x100a2f49
100a2f26:	6a 00                	push   0x0
100a2f28:	6a 01                	push   0x1
100a2f2a:	6a 00                	push   0x0
100a2f2c:	6a 00                	push   0x0
100a2f2e:	8b ce                	mov    ecx,esi
100a2f30:	c7 85 ec fd ff ff 01 	mov    DWORD PTR [ebp-0x214],0x1
100a2f37:	00 00 00 
100a2f3a:	e8 91 ff 04 00       	call   0x100f2ed0
100a2f3f:	c7 85 f4 fd ff ff 06 	mov    DWORD PTR [ebp-0x20c],0x6
100a2f46:	00 00 00 
100a2f49:	6a 01                	push   0x1
100a2f4b:	6a 00                	push   0x0
100a2f4d:	6a 00                	push   0x0
100a2f4f:	8b ce                	mov    ecx,esi
100a2f51:	e8 aa a0 03 00       	call   0x100dd000
100a2f56:	8b 8d f0 fd ff ff    	mov    ecx,DWORD PTR [ebp-0x210]
100a2f5c:	84 c0                	test   al,al
100a2f5e:	b8 01 00 00 00       	mov    eax,0x1
100a2f63:	0f 45 c8             	cmovne ecx,eax
100a2f66:	80 be 80 06 00 00 00 	cmp    BYTE PTR [esi+0x680],0x0
100a2f6d:	89 8d f0 fd ff ff    	mov    DWORD PTR [ebp-0x210],ecx
100a2f73:	56                   	push   esi
100a2f74:	74 7b                	je     0x100a2ff1
100a2f76:	e8 e5 ff fe ff       	call   0x10092f60
100a2f7b:	8b c8                	mov    ecx,eax
100a2f7d:	83 c4 04             	add    esp,0x4
100a2f80:	ba 07 00 00 00       	mov    edx,0x7
100a2f85:	83 f9 04             	cmp    ecx,0x4
100a2f88:	7f 0b                	jg     0x100a2f95
100a2f8a:	83 f9 02             	cmp    ecx,0x2
100a2f8d:	b8 06 00 00 00       	mov    eax,0x6
100a2f92:	0f 4f d0             	cmovg  edx,eax
100a2f95:	8d 41 fb             	lea    eax,[ecx-0x5]
100a2f98:	83 f8 05             	cmp    eax,0x5
100a2f9b:	b8 05 00 00 00       	mov    eax,0x5
100a2fa0:	0f 46 d0             	cmovbe edx,eax
100a2fa3:	8d 41 f5             	lea    eax,[ecx-0xb]
100a2fa6:	83 f8 03             	cmp    eax,0x3
100a2fa9:	b8 04 00 00 00       	mov    eax,0x4
100a2fae:	0f 46 d0             	cmovbe edx,eax
100a2fb1:	8d 41 f1             	lea    eax,[ecx-0xf]
100a2fb4:	83 f8 01             	cmp    eax,0x1
100a2fb7:	b8 03 00 00 00       	mov    eax,0x3
100a2fbc:	0f 46 d0             	cmovbe edx,eax
100a2fbf:	89 95 f8 fd ff ff    	mov    DWORD PTR [ebp-0x208],edx
100a2fc5:	83 f9 11             	cmp    ecx,0x11
100a2fc8:	75 0f                	jne    0x100a2fd9
100a2fca:	c7 85 f8 fd ff ff 02 	mov    DWORD PTR [ebp-0x208],0x2
100a2fd1:	00 00 00 
100a2fd4:	e9 df 00 00 00       	jmp    0x100a30b8
100a2fd9:	83 f9 12             	cmp    ecx,0x12
100a2fdc:	0f 8c d6 00 00 00    	jl     0x100a30b8
100a2fe2:	c7 85 f8 fd ff ff 01 	mov    DWORD PTR [ebp-0x208],0x1
100a2fe9:	00 00 00 
100a2fec:	e9 c7 00 00 00       	jmp    0x100a30b8
100a2ff1:	e8 ea fc fe ff       	call   0x10092ce0
100a2ff6:	8b d0                	mov    edx,eax
100a2ff8:	83 c4 04             	add    esp,0x4
100a2ffb:	8b 85 f8 fd ff ff    	mov    eax,DWORD PTR [ebp-0x208]
100a3001:	83 fa 02             	cmp    edx,0x2
100a3004:	b9 02 00 00 00       	mov    ecx,0x2
100a3009:	0f 4e c1             	cmovle eax,ecx
100a300c:	89 85 f8 fd ff ff    	mov    DWORD PTR [ebp-0x208],eax
100a3012:	8d 4a fd             	lea    ecx,[edx-0x3]
100a3015:	83 f9 04             	cmp    ecx,0x4
100a3018:	8b c8                	mov    ecx,eax
100a301a:	b8 06 00 00 00       	mov    eax,0x6
100a301f:	0f 46 c8             	cmovbe ecx,eax
100a3022:	8d 42 f8             	lea    eax,[edx-0x8]
100a3025:	83 f8 06             	cmp    eax,0x6
100a3028:	b8 05 00 00 00       	mov    eax,0x5
100a302d:	0f 46 c8             	cmovbe ecx,eax
100a3030:	8d 42 f1             	lea    eax,[edx-0xf]
100a3033:	83 f8 06             	cmp    eax,0x6
100a3036:	b8 04 00 00 00       	mov    eax,0x4
100a303b:	0f 46 c8             	cmovbe ecx,eax
100a303e:	8d 42 ea             	lea    eax,[edx-0x16]
100a3041:	83 f8 06             	cmp    eax,0x6
100a3044:	b8 03 00 00 00       	mov    eax,0x3
100a3049:	0f 46 c8             	cmovbe ecx,eax
100a304c:	89 8d f8 fd ff ff    	mov    DWORD PTR [ebp-0x208],ecx
100a3052:	83 fa 23             	cmp    edx,0x23
100a3055:	7d 11                	jge    0x100a3068
100a3057:	83 fa 1c             	cmp    edx,0x1c
100a305a:	7e 5c                	jle    0x100a30b8
100a305c:	c7 85 f8 fd ff ff 02 	mov    DWORD PTR [ebp-0x208],0x2
100a3063:	00 00 00 
100a3066:	eb 50                	jmp    0x100a30b8
100a3068:	6a 00                	push   0x0
100a306a:	6a 00                	push   0x0
100a306c:	68 00 00 20 00       	push   0x200000
100a3071:	8b ce                	mov    ecx,esi
100a3073:	c7 85 f8 fd ff ff 01 	mov    DWORD PTR [ebp-0x208],0x1
100a307a:	00 00 00 
100a307d:	e8 7e 9f 03 00       	call   0x100dd000
100a3082:	84 c0                	test   al,al
100a3084:	75 14                	jne    0x100a309a
100a3086:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a3089:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a3090:	74 08                	je     0x100a309a
100a3092:	81 cf 00 00 20 00    	or     edi,0x200000
100a3098:	eb 0c                	jmp    0x100a30a6
100a309a:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a309d:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a30a4:	74 12                	je     0x100a30b8
100a30a6:	6a 00                	push   0x0
100a30a8:	6a 00                	push   0x0
100a30aa:	6a 00                	push   0x0
100a30ac:	68 00 00 20 00       	push   0x200000
100a30b1:	8b ce                	mov    ecx,esi
100a30b3:	e8 18 fe 04 00       	call   0x100f2ed0
100a30b8:	6a 00                	push   0x0
100a30ba:	6a 00                	push   0x0
100a30bc:	68 00 00 00 02       	push   0x2000000
100a30c1:	8b ce                	mov    ecx,esi
100a30c3:	e8 38 9f 03 00       	call   0x100dd000
100a30c8:	84 c0                	test   al,al
100a30ca:	75 1c                	jne    0x100a30e8
100a30cc:	38 86 80 06 00 00    	cmp    BYTE PTR [esi+0x680],al
100a30d2:	75 14                	jne    0x100a30e8
100a30d4:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a30d7:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a30de:	74 08                	je     0x100a30e8
100a30e0:	81 cf 00 00 00 02    	or     edi,0x2000000
100a30e6:	eb 15                	jmp    0x100a30fd
100a30e8:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a30eb:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a30f2:	74 1b                	je     0x100a310f
100a30f4:	80 be 80 06 00 00 00 	cmp    BYTE PTR [esi+0x680],0x0
100a30fb:	75 12                	jne    0x100a310f
100a30fd:	6a 00                	push   0x0
100a30ff:	6a 00                	push   0x0
100a3101:	6a 00                	push   0x0
100a3103:	68 00 00 00 02       	push   0x2000000
100a3108:	8b ce                	mov    ecx,esi
100a310a:	e8 c1 fd 04 00       	call   0x100f2ed0
100a310f:	6a 00                	push   0x0
100a3111:	6a 00                	push   0x0
100a3113:	68 00 00 40 00       	push   0x400000
100a3118:	8b ce                	mov    ecx,esi
100a311a:	e8 e1 9e 03 00       	call   0x100dd000
100a311f:	84 c0                	test   al,al
100a3121:	75 1c                	jne    0x100a313f
100a3123:	38 86 80 06 00 00    	cmp    BYTE PTR [esi+0x680],al
100a3129:	75 14                	jne    0x100a313f
100a312b:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a312e:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a3135:	74 08                	je     0x100a313f
100a3137:	81 cf 00 00 40 00    	or     edi,0x400000
100a313d:	eb 15                	jmp    0x100a3154
100a313f:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a3142:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a3149:	74 1b                	je     0x100a3166
100a314b:	80 be 80 06 00 00 00 	cmp    BYTE PTR [esi+0x680],0x0
100a3152:	75 12                	jne    0x100a3166
100a3154:	6a 00                	push   0x0
100a3156:	6a 00                	push   0x0
100a3158:	6a 00                	push   0x0
100a315a:	68 00 00 40 00       	push   0x400000
100a315f:	8b ce                	mov    ecx,esi
100a3161:	e8 6a fd 04 00       	call   0x100f2ed0
100a3166:	6a 00                	push   0x0
100a3168:	6a 00                	push   0x0
100a316a:	68 00 00 00 80       	push   0x80000000
100a316f:	8b ce                	mov    ecx,esi
100a3171:	e8 8a 9e 03 00       	call   0x100dd000
100a3176:	84 c0                	test   al,al
100a3178:	75 1c                	jne    0x100a3196
100a317a:	38 86 80 06 00 00    	cmp    BYTE PTR [esi+0x680],al
100a3180:	75 14                	jne    0x100a3196
100a3182:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a3185:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a318c:	74 08                	je     0x100a3196
100a318e:	81 cf 00 00 00 80    	or     edi,0x80000000
100a3194:	eb 15                	jmp    0x100a31ab
100a3196:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a3199:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a31a0:	74 1b                	je     0x100a31bd
100a31a2:	80 be 80 06 00 00 00 	cmp    BYTE PTR [esi+0x680],0x0
100a31a9:	75 12                	jne    0x100a31bd
100a31ab:	6a 00                	push   0x0
100a31ad:	6a 00                	push   0x0
100a31af:	6a 00                	push   0x0
100a31b1:	68 00 00 00 80       	push   0x80000000
100a31b6:	8b ce                	mov    ecx,esi
100a31b8:	e8 13 fd 04 00       	call   0x100f2ed0
100a31bd:	6a 00                	push   0x0
100a31bf:	6a 00                	push   0x0
100a31c1:	6a 20                	push   0x20
100a31c3:	8b ce                	mov    ecx,esi
100a31c5:	e8 36 9e 03 00       	call   0x100dd000
100a31ca:	84 c0                	test   al,al
100a31cc:	75 19                	jne    0x100a31e7
100a31ce:	38 86 80 06 00 00    	cmp    BYTE PTR [esi+0x680],al
100a31d4:	75 11                	jne    0x100a31e7
100a31d6:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a31d9:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a31e0:	74 05                	je     0x100a31e7
100a31e2:	83 cf 20             	or     edi,0x20
100a31e5:	eb 15                	jmp    0x100a31fc
100a31e7:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a31ea:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a31f1:	74 1b                	je     0x100a320e
100a31f3:	80 be 80 06 00 00 00 	cmp    BYTE PTR [esi+0x680],0x0
100a31fa:	75 12                	jne    0x100a320e
100a31fc:	6a 00                	push   0x0
100a31fe:	6a 00                	push   0x0
100a3200:	6a 00                	push   0x0
100a3202:	6a 20                	push   0x20
100a3204:	8b ce                	mov    ecx,esi
100a3206:	e8 c5 fc 04 00       	call   0x100f2ed0
100a320b:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a320e:	83 be 7c 06 00 00 04 	cmp    DWORD PTR [esi+0x67c],0x4
100a3215:	75 35                	jne    0x100a324c
100a3217:	80 be 80 06 00 00 00 	cmp    BYTE PTR [esi+0x680],0x0
100a321e:	75 2c                	jne    0x100a324c
100a3220:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a3227:	74 23                	je     0x100a324c
100a3229:	6a 00                	push   0x0
100a322b:	6a 00                	push   0x0
100a322d:	6a 40                	push   0x40
100a322f:	8b ce                	mov    ecx,esi
100a3231:	e8 ca 9d 03 00       	call   0x100dd000
100a3236:	84 c0                	test   al,al
100a3238:	75 03                	jne    0x100a323d
100a323a:	83 cf 40             	or     edi,0x40
100a323d:	6a 00                	push   0x0
100a323f:	6a 00                	push   0x0
100a3241:	6a 00                	push   0x0
100a3243:	6a 40                	push   0x40
100a3245:	8b ce                	mov    ecx,esi
100a3247:	e8 84 fc 04 00       	call   0x100f2ed0
100a324c:	6a 00                	push   0x0
100a324e:	6a 00                	push   0x0
100a3250:	68 80 00 00 00       	push   0x80
100a3255:	8b ce                	mov    ecx,esi
100a3257:	e8 a4 9d 03 00       	call   0x100dd000
100a325c:	84 c0                	test   al,al
100a325e:	0f 84 21 01 00 00    	je     0x100a3385
100a3264:	6a 00                	push   0x0
100a3266:	6a 00                	push   0x0
100a3268:	68 00 01 00 00       	push   0x100
100a326d:	8b ce                	mov    ecx,esi
100a326f:	e8 8c 9d 03 00       	call   0x100dd000
100a3274:	84 c0                	test   al,al
100a3276:	0f 84 09 01 00 00    	je     0x100a3385
100a327c:	6a 00                	push   0x0
100a327e:	6a 00                	push   0x0
100a3280:	68 00 02 00 00       	push   0x200
100a3285:	8b ce                	mov    ecx,esi
100a3287:	e8 74 9d 03 00       	call   0x100dd000
100a328c:	84 c0                	test   al,al
100a328e:	0f 84 f1 00 00 00    	je     0x100a3385
100a3294:	6a 00                	push   0x0
100a3296:	6a 00                	push   0x0
100a3298:	68 00 04 00 00       	push   0x400
100a329d:	8b ce                	mov    ecx,esi
100a329f:	e8 5c 9d 03 00       	call   0x100dd000
100a32a4:	84 c0                	test   al,al
100a32a6:	0f 84 d9 00 00 00    	je     0x100a3385
100a32ac:	6a 00                	push   0x0
100a32ae:	6a 00                	push   0x0
100a32b0:	68 00 08 00 00       	push   0x800
100a32b5:	8b ce                	mov    ecx,esi
100a32b7:	e8 44 9d 03 00       	call   0x100dd000
100a32bc:	84 c0                	test   al,al
100a32be:	0f 84 c1 00 00 00    	je     0x100a3385
100a32c4:	6a 00                	push   0x0
100a32c6:	6a 00                	push   0x0
100a32c8:	68 00 10 00 00       	push   0x1000
100a32cd:	8b ce                	mov    ecx,esi
100a32cf:	e8 2c 9d 03 00       	call   0x100dd000
100a32d4:	84 c0                	test   al,al
100a32d6:	0f 84 a9 00 00 00    	je     0x100a3385
100a32dc:	6a 00                	push   0x0
100a32de:	6a 00                	push   0x0
100a32e0:	68 00 20 00 00       	push   0x2000
100a32e5:	8b ce                	mov    ecx,esi
100a32e7:	e8 14 9d 03 00       	call   0x100dd000
100a32ec:	84 c0                	test   al,al
100a32ee:	0f 84 91 00 00 00    	je     0x100a3385
100a32f4:	6a 00                	push   0x0
100a32f6:	6a 00                	push   0x0
100a32f8:	68 00 40 00 00       	push   0x4000
100a32fd:	8b ce                	mov    ecx,esi
100a32ff:	e8 fc 9c 03 00       	call   0x100dd000
100a3304:	84 c0                	test   al,al
100a3306:	74 7d                	je     0x100a3385
100a3308:	6a 00                	push   0x0
100a330a:	6a 00                	push   0x0
100a330c:	68 00 80 00 00       	push   0x8000
100a3311:	8b ce                	mov    ecx,esi
100a3313:	e8 e8 9c 03 00       	call   0x100dd000
100a3318:	84 c0                	test   al,al
100a331a:	74 69                	je     0x100a3385
100a331c:	6a 00                	push   0x0
100a331e:	6a 00                	push   0x0
100a3320:	68 00 00 01 00       	push   0x10000
100a3325:	8b ce                	mov    ecx,esi
100a3327:	e8 d4 9c 03 00       	call   0x100dd000
100a332c:	84 c0                	test   al,al
100a332e:	74 55                	je     0x100a3385
100a3330:	6a 00                	push   0x0
100a3332:	6a 00                	push   0x0
100a3334:	68 00 00 02 00       	push   0x20000
100a3339:	8b ce                	mov    ecx,esi
100a333b:	e8 c0 9c 03 00       	call   0x100dd000
100a3340:	84 c0                	test   al,al
100a3342:	74 41                	je     0x100a3385
100a3344:	80 be 80 06 00 00 00 	cmp    BYTE PTR [esi+0x680],0x0
100a334b:	75 38                	jne    0x100a3385
100a334d:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a3350:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a3357:	74 2c                	je     0x100a3385
100a3359:	6a 00                	push   0x0
100a335b:	6a 00                	push   0x0
100a335d:	68 00 00 04 00       	push   0x40000
100a3362:	8b ce                	mov    ecx,esi
100a3364:	e8 97 9c 03 00       	call   0x100dd000
100a3369:	84 c0                	test   al,al
100a336b:	75 06                	jne    0x100a3373
100a336d:	81 cf 00 00 04 00    	or     edi,0x40000
100a3373:	6a 00                	push   0x0
100a3375:	6a 00                	push   0x0
100a3377:	6a 00                	push   0x0
100a3379:	68 00 00 04 00       	push   0x40000
100a337e:	8b ce                	mov    ecx,esi
100a3380:	e8 4b fb 04 00       	call   0x100f2ed0
100a3385:	8b 85 f4 fd ff ff    	mov    eax,DWORD PTR [ebp-0x20c]
100a338b:	83 f8 01             	cmp    eax,0x1
100a338e:	75 47                	jne    0x100a33d7
100a3390:	80 be 80 06 00 00 00 	cmp    BYTE PTR [esi+0x680],0x0
100a3397:	0f 85 8d 01 00 00    	jne    0x100a352a
100a339d:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a33a0:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a33a7:	0f 84 7d 01 00 00    	je     0x100a352a
100a33ad:	6a 00                	push   0x0
100a33af:	6a 00                	push   0x0
100a33b1:	68 00 20 00 00       	push   0x2000
100a33b6:	8b ce                	mov    ecx,esi
100a33b8:	e8 43 9c 03 00       	call   0x100dd000
100a33bd:	84 c0                	test   al,al
100a33bf:	75 06                	jne    0x100a33c7
100a33c1:	81 cf 00 20 00 00    	or     edi,0x2000
100a33c7:	6a 00                	push   0x0
100a33c9:	6a 00                	push   0x0
100a33cb:	6a 00                	push   0x0
100a33cd:	68 00 20 00 00       	push   0x2000
100a33d2:	e9 4c 01 00 00       	jmp    0x100a3523
100a33d7:	83 f8 02             	cmp    eax,0x2
100a33da:	75 47                	jne    0x100a3423
100a33dc:	80 be 80 06 00 00 00 	cmp    BYTE PTR [esi+0x680],0x0
100a33e3:	0f 85 41 01 00 00    	jne    0x100a352a
100a33e9:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a33ec:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a33f3:	0f 84 31 01 00 00    	je     0x100a352a
100a33f9:	6a 00                	push   0x0
100a33fb:	6a 00                	push   0x0
100a33fd:	68 00 08 00 00       	push   0x800
100a3402:	8b ce                	mov    ecx,esi
100a3404:	e8 f7 9b 03 00       	call   0x100dd000
100a3409:	84 c0                	test   al,al
100a340b:	75 06                	jne    0x100a3413
100a340d:	81 cf 00 08 00 00    	or     edi,0x800
100a3413:	6a 00                	push   0x0
100a3415:	6a 00                	push   0x0
100a3417:	6a 00                	push   0x0
100a3419:	68 00 08 00 00       	push   0x800
100a341e:	e9 00 01 00 00       	jmp    0x100a3523
100a3423:	83 f8 03             	cmp    eax,0x3
100a3426:	75 47                	jne    0x100a346f
100a3428:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a342b:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a3432:	0f 84 f2 00 00 00    	je     0x100a352a
100a3438:	80 be 80 06 00 00 00 	cmp    BYTE PTR [esi+0x680],0x0
100a343f:	0f 85 e5 00 00 00    	jne    0x100a352a
100a3445:	6a 00                	push   0x0
100a3447:	6a 00                	push   0x0
100a3449:	68 00 40 00 00       	push   0x4000
100a344e:	8b ce                	mov    ecx,esi
100a3450:	e8 ab 9b 03 00       	call   0x100dd000
100a3455:	84 c0                	test   al,al
100a3457:	75 06                	jne    0x100a345f
100a3459:	81 cf 00 40 00 00    	or     edi,0x4000
100a345f:	6a 00                	push   0x0
100a3461:	6a 00                	push   0x0
100a3463:	6a 00                	push   0x0
100a3465:	68 00 40 00 00       	push   0x4000
100a346a:	e9 b4 00 00 00       	jmp    0x100a3523
100a346f:	83 f8 04             	cmp    eax,0x4
100a3472:	75 70                	jne    0x100a34e4
100a3474:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a3477:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a347e:	0f 84 a6 00 00 00    	je     0x100a352a
100a3484:	80 be 80 06 00 00 00 	cmp    BYTE PTR [esi+0x680],0x0
100a348b:	0f 85 99 00 00 00    	jne    0x100a352a
100a3491:	6a 00                	push   0x0
100a3493:	6a 00                	push   0x0
100a3495:	68 00 00 01 00       	push   0x10000
100a349a:	8b ce                	mov    ecx,esi
100a349c:	e8 5f 9b 03 00       	call   0x100dd000
100a34a1:	84 c0                	test   al,al
100a34a3:	75 06                	jne    0x100a34ab
100a34a5:	81 cf 00 00 01 00    	or     edi,0x10000
100a34ab:	6a 00                	push   0x0
100a34ad:	6a 00                	push   0x0
100a34af:	6a 00                	push   0x0
100a34b1:	68 00 00 01 00       	push   0x10000
100a34b6:	8b ce                	mov    ecx,esi
100a34b8:	e8 13 fa 04 00       	call   0x100f2ed0
100a34bd:	6a 00                	push   0x0
100a34bf:	6a 00                	push   0x0
100a34c1:	68 00 00 80 00       	push   0x800000
100a34c6:	8b ce                	mov    ecx,esi
100a34c8:	e8 33 9b 03 00       	call   0x100dd000
100a34cd:	84 c0                	test   al,al
100a34cf:	75 06                	jne    0x100a34d7
100a34d1:	81 cf 00 00 80 00    	or     edi,0x800000
100a34d7:	6a 00                	push   0x0
100a34d9:	6a 00                	push   0x0
100a34db:	6a 00                	push   0x0
100a34dd:	68 00 00 80 00       	push   0x800000
100a34e2:	eb 3f                	jmp    0x100a3523
100a34e4:	83 f8 05             	cmp    eax,0x5
100a34e7:	75 41                	jne    0x100a352a
100a34e9:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a34ec:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a34f3:	74 35                	je     0x100a352a
100a34f5:	80 be 80 06 00 00 00 	cmp    BYTE PTR [esi+0x680],0x0
100a34fc:	75 2c                	jne    0x100a352a
100a34fe:	6a 00                	push   0x0
100a3500:	6a 00                	push   0x0
100a3502:	68 80 00 00 00       	push   0x80
100a3507:	8b ce                	mov    ecx,esi
100a3509:	e8 f2 9a 03 00       	call   0x100dd000
100a350e:	84 c0                	test   al,al
100a3510:	75 06                	jne    0x100a3518
100a3512:	81 cf 80 00 00 00    	or     edi,0x80
100a3518:	6a 00                	push   0x0
100a351a:	6a 00                	push   0x0
100a351c:	6a 00                	push   0x0
100a351e:	68 80 00 00 00       	push   0x80
100a3523:	8b ce                	mov    ecx,esi
100a3525:	e8 a6 f9 04 00       	call   0x100f2ed0
100a352a:	6a 00                	push   0x0
100a352c:	6a 00                	push   0x0
100a352e:	6a 01                	push   0x1
100a3530:	8b ce                	mov    ecx,esi
100a3532:	e8 c9 9a 03 00       	call   0x100dd000
100a3537:	84 c0                	test   al,al
100a3539:	0f 84 85 00 00 00    	je     0x100a35c4
100a353f:	6a 00                	push   0x0
100a3541:	6a 00                	push   0x0
100a3543:	6a 02                	push   0x2
100a3545:	8b ce                	mov    ecx,esi
100a3547:	e8 b4 9a 03 00       	call   0x100dd000
100a354c:	84 c0                	test   al,al
100a354e:	74 74                	je     0x100a35c4
100a3550:	6a 00                	push   0x0
100a3552:	6a 00                	push   0x0
100a3554:	6a 04                	push   0x4
100a3556:	8b ce                	mov    ecx,esi
100a3558:	e8 a3 9a 03 00       	call   0x100dd000
100a355d:	84 c0                	test   al,al
100a355f:	74 63                	je     0x100a35c4
100a3561:	6a 00                	push   0x0
100a3563:	6a 00                	push   0x0
100a3565:	6a 08                	push   0x8
100a3567:	8b ce                	mov    ecx,esi
100a3569:	e8 92 9a 03 00       	call   0x100dd000
100a356e:	84 c0                	test   al,al
100a3570:	74 52                	je     0x100a35c4
100a3572:	6a 00                	push   0x0
100a3574:	6a 00                	push   0x0
100a3576:	6a 10                	push   0x10
100a3578:	8b ce                	mov    ecx,esi
100a357a:	e8 81 9a 03 00       	call   0x100dd000
100a357f:	84 c0                	test   al,al
100a3581:	74 41                	je     0x100a35c4
100a3583:	80 be 80 06 00 00 00 	cmp    BYTE PTR [esi+0x680],0x0
100a358a:	75 38                	jne    0x100a35c4
100a358c:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a358f:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a3596:	74 2c                	je     0x100a35c4
100a3598:	6a 00                	push   0x0
100a359a:	6a 00                	push   0x0
100a359c:	68 00 80 00 00       	push   0x8000
100a35a1:	8b ce                	mov    ecx,esi
100a35a3:	e8 58 9a 03 00       	call   0x100dd000
100a35a8:	84 c0                	test   al,al
100a35aa:	75 06                	jne    0x100a35b2
100a35ac:	81 cf 00 80 00 00    	or     edi,0x8000
100a35b2:	6a 00                	push   0x0
100a35b4:	6a 00                	push   0x0
100a35b6:	6a 00                	push   0x0
100a35b8:	68 00 80 00 00       	push   0x8000
100a35bd:	8b ce                	mov    ecx,esi
100a35bf:	e8 0c f9 04 00       	call   0x100f2ed0
100a35c4:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a35c7:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a35ce:	74 6d                	je     0x100a363d
100a35d0:	80 be 80 06 00 00 00 	cmp    BYTE PTR [esi+0x680],0x0
100a35d7:	75 64                	jne    0x100a363d
100a35d9:	6a 00                	push   0x0
100a35db:	6a 00                	push   0x0
100a35dd:	6a 01                	push   0x1
100a35df:	8b ce                	mov    ecx,esi
100a35e1:	e8 1a 9a 03 00       	call   0x100dd000
100a35e6:	84 c0                	test   al,al
100a35e8:	74 03                	je     0x100a35ed
100a35ea:	83 cf 01             	or     edi,0x1
100a35ed:	6a 00                	push   0x0
100a35ef:	6a 00                	push   0x0
100a35f1:	6a 02                	push   0x2
100a35f3:	8b ce                	mov    ecx,esi
100a35f5:	e8 06 9a 03 00       	call   0x100dd000
100a35fa:	84 c0                	test   al,al
100a35fc:	74 03                	je     0x100a3601
100a35fe:	83 cf 02             	or     edi,0x2
100a3601:	6a 00                	push   0x0
100a3603:	6a 00                	push   0x0
100a3605:	6a 04                	push   0x4
100a3607:	8b ce                	mov    ecx,esi
100a3609:	e8 f2 99 03 00       	call   0x100dd000
100a360e:	84 c0                	test   al,al
100a3610:	74 03                	je     0x100a3615
100a3612:	83 cf 04             	or     edi,0x4
100a3615:	6a 00                	push   0x0
100a3617:	6a 00                	push   0x0
100a3619:	6a 08                	push   0x8
100a361b:	8b ce                	mov    ecx,esi
100a361d:	e8 de 99 03 00       	call   0x100dd000
100a3622:	84 c0                	test   al,al
100a3624:	74 03                	je     0x100a3629
100a3626:	83 cf 08             	or     edi,0x8
100a3629:	6a 00                	push   0x0
100a362b:	6a 00                	push   0x0
100a362d:	6a 10                	push   0x10
100a362f:	8b ce                	mov    ecx,esi
100a3631:	e8 ca 99 03 00       	call   0x100dd000
100a3636:	84 c0                	test   al,al
100a3638:	74 03                	je     0x100a363d
100a363a:	83 cf 10             	or     edi,0x10
100a363d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100a3640:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100a3646:	6a 00                	push   0x0
100a3648:	ff 35 8c 66 22 10    	push   DWORD PTR ds:0x1022668c
100a364e:	6a 01                	push   0x1
100a3650:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100a3656:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a3659:	83 c4 10             	add    esp,0x10
100a365c:	83 b8 d8 01 00 00 00 	cmp    DWORD PTR [eax+0x1d8],0x0
100a3663:	74 0d                	je     0x100a3672
100a3665:	f6 80 a4 01 00 00 04 	test   BYTE PTR [eax+0x1a4],0x4
100a366c:	75 04                	jne    0x100a3672
100a366e:	6a 01                	push   0x1
100a3670:	eb 02                	jmp    0x100a3674
100a3672:	6a 00                	push   0x0
100a3674:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a367a:	83 c4 04             	add    esp,0x4
100a367d:	8d 85 fc fd ff ff    	lea    eax,[ebp-0x204]
100a3683:	50                   	push   eax
100a3684:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100a368a:	ff b6 3c 06 00 00    	push   DWORD PTR [esi+0x63c]
100a3690:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a3696:	ff b6 40 06 00 00    	push   DWORD PTR [esi+0x640]
100a369c:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a36a2:	ff b6 44 06 00 00    	push   DWORD PTR [esi+0x644]
100a36a8:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a36ae:	ff b6 48 06 00 00    	push   DWORD PTR [esi+0x648]
100a36b4:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a36ba:	83 c4 14             	add    esp,0x14
100a36bd:	8b ce                	mov    ecx,esi
100a36bf:	e8 ec 88 03 00       	call   0x100dbfb0
100a36c4:	51                   	push   ecx
100a36c5:	d9 1c 24             	fstp   DWORD PTR [esp]
100a36c8:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100a36ce:	ff b6 50 06 00 00    	push   DWORD PTR [esi+0x650]
100a36d4:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a36da:	ff b6 54 06 00 00    	push   DWORD PTR [esi+0x654]
100a36e0:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a36e6:	ff b6 58 06 00 00    	push   DWORD PTR [esi+0x658]
100a36ec:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a36f2:	f3 0f 2c 86 5c 06 00 	cvttss2si eax,DWORD PTR [esi+0x65c]
100a36f9:	00 
100a36fa:	50                   	push   eax
100a36fb:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a3701:	f3 0f 2c 86 60 06 00 	cvttss2si eax,DWORD PTR [esi+0x660]
100a3708:	00 
100a3709:	50                   	push   eax
100a370a:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a3710:	ff b6 64 06 00 00    	push   DWORD PTR [esi+0x664]
100a3716:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a371c:	ff b6 68 06 00 00    	push   DWORD PTR [esi+0x668]
100a3722:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a3728:	ff b6 6c 06 00 00    	push   DWORD PTR [esi+0x66c]
100a372e:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a3734:	ff b6 70 06 00 00    	push   DWORD PTR [esi+0x670]
100a373a:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a3740:	ff b6 74 06 00 00    	push   DWORD PTR [esi+0x674]
100a3746:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a374c:	83 c4 2c             	add    esp,0x2c
100a374f:	80 be 78 06 00 00 00 	cmp    BYTE PTR [esi+0x678],0x0
100a3756:	74 0d                	je     0x100a3765
100a3758:	80 be 79 06 00 00 00 	cmp    BYTE PTR [esi+0x679],0x0
100a375f:	74 04                	je     0x100a3765
100a3761:	6a 01                	push   0x1
100a3763:	eb 02                	jmp    0x100a3767
100a3765:	6a 00                	push   0x0
100a3767:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a376d:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a3770:	83 c4 04             	add    esp,0x4
100a3773:	ff b0 48 02 00 00    	push   DWORD PTR [eax+0x248]
100a3779:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a377f:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a3782:	83 c4 04             	add    esp,0x4
100a3785:	f6 80 a4 01 00 00 01 	test   BYTE PTR [eax+0x1a4],0x1
100a378c:	74 04                	je     0x100a3792
100a378e:	6a 01                	push   0x1
100a3790:	eb 02                	jmp    0x100a3794
100a3792:	6a 00                	push   0x0
100a3794:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a379a:	83 c4 04             	add    esp,0x4
100a379d:	ff b6 7c 06 00 00    	push   DWORD PTR [esi+0x67c]
100a37a3:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a37a9:	57                   	push   edi
100a37aa:	ff 15 14 30 22 10    	call   DWORD PTR ds:0x10223014
100a37b0:	ff b5 f4 fd ff ff    	push   DWORD PTR [ebp-0x20c]
100a37b6:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a37bc:	ff b5 f8 fd ff ff    	push   DWORD PTR [ebp-0x208]
100a37c2:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a37c8:	83 c4 10             	add    esp,0x10
100a37cb:	80 be 80 06 00 00 00 	cmp    BYTE PTR [esi+0x680],0x0
100a37d2:	74 04                	je     0x100a37d8
100a37d4:	6a 01                	push   0x1
100a37d6:	eb 02                	jmp    0x100a37da
100a37d8:	6a 00                	push   0x0
100a37da:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a37e0:	83 c4 04             	add    esp,0x4
100a37e3:	6a 00                	push   0x0
100a37e5:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a37eb:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100a37f1:	83 c4 04             	add    esp,0x4
100a37f4:	85 c9                	test   ecx,ecx
100a37f6:	74 0d                	je     0x100a3805
100a37f8:	8b 01                	mov    eax,DWORD PTR [ecx]
100a37fa:	ff 50 20             	call   DWORD PTR [eax+0x20]
100a37fd:	85 c0                	test   eax,eax
100a37ff:	74 04                	je     0x100a3805
100a3801:	6a 01                	push   0x1
100a3803:	eb 02                	jmp    0x100a3807
100a3805:	6a 00                	push   0x0
100a3807:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a380d:	83 c4 04             	add    esp,0x4
100a3810:	ff b5 ec fd ff ff    	push   DWORD PTR [ebp-0x214]
100a3816:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a381c:	ff b5 f0 fd ff ff    	push   DWORD PTR [ebp-0x210]
100a3822:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a3828:	83 c4 08             	add    esp,0x8
100a382b:	8b ce                	mov    ecx,esi
100a382d:	6a 00                	push   0x0
100a382f:	6a 01                	push   0x1
100a3831:	6a 00                	push   0x0
100a3833:	e8 c8 97 03 00       	call   0x100dd000
100a3838:	84 c0                	test   al,al
100a383a:	74 04                	je     0x100a3840
100a383c:	6a 01                	push   0x1
100a383e:	eb 02                	jmp    0x100a3842
100a3840:	6a 00                	push   0x0
100a3842:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a3848:	83 c4 04             	add    esp,0x4
100a384b:	8b ce                	mov    ecx,esi
100a384d:	6a 01                	push   0x1
100a384f:	6a 00                	push   0x0
100a3851:	6a 00                	push   0x0
100a3853:	e8 a8 97 03 00       	call   0x100dd000
100a3858:	84 c0                	test   al,al
100a385a:	74 04                	je     0x100a3860
100a385c:	6a 01                	push   0x1
100a385e:	eb 02                	jmp    0x100a3862
100a3860:	6a 00                	push   0x0
100a3862:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a3868:	83 c4 04             	add    esp,0x4
100a386b:	80 be 78 06 00 00 00 	cmp    BYTE PTR [esi+0x678],0x0
100a3872:	74 24                	je     0x100a3898
100a3874:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100a3879:	68 b0 8b 1c 10       	push   0x101c8bb0
100a387e:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
100a3884:	03 48 0c             	add    ecx,DWORD PTR [eax+0xc]
100a3887:	51                   	push   ecx
100a3888:	e8 63 bd 09 00       	call   0x1013f5f0
100a388d:	83 c4 08             	add    esp,0x8
100a3890:	85 c0                	test   eax,eax
100a3892:	74 04                	je     0x100a3898
100a3894:	6a 01                	push   0x1
100a3896:	eb 02                	jmp    0x100a389a
100a3898:	6a 00                	push   0x0
100a389a:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a38a0:	83 c4 04             	add    esp,0x4
100a38a3:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100a38a9:	8b 8d e8 fd ff ff    	mov    ecx,DWORD PTR [ebp-0x218]
100a38af:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100a38b4:	41                   	inc    ecx
100a38b5:	89 8d e8 fd ff ff    	mov    DWORD PTR [ebp-0x218],ecx
100a38bb:	3b 88 90 00 00 00    	cmp    ecx,DWORD PTR [eax+0x90]
100a38c1:	0f 8e f9 ef ff ff    	jle    0x100a28c0
100a38c7:	5f                   	pop    edi
100a38c8:	5e                   	pop    esi
100a38c9:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100a38cc:	33 cd                	xor    ecx,ebp
100a38ce:	5b                   	pop    ebx
100a38cf:	e8 df a2 09 00       	call   0x1013dbb3
100a38d4:	8b e5                	mov    esp,ebp
100a38d6:	5d                   	pop    ebp
100a38d7:	c2 10 00             	ret    0x10
