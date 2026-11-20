; Extracted from retained GNU objdump -d -Mintel listing; original DLL bytes verified.
1003f850:	55                   	push   ebp
1003f851:	8b ec                	mov    ebp,esp
1003f853:	6a ff                	push   0xffffffff
1003f855:	68 fb 3b 13 10       	push   0x10133bfb
1003f85a:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1003f860:	50                   	push   eax
1003f861:	83 ec 18             	sub    esp,0x18
1003f864:	53                   	push   ebx
1003f865:	56                   	push   esi
1003f866:	57                   	push   edi
1003f867:	a1 00 06 19 10       	mov    eax,ds:0x10190600
1003f86c:	33 c5                	xor    eax,ebp
1003f86e:	50                   	push   eax
1003f86f:	8d 45 f4             	lea    eax,[ebp-0xc]
1003f872:	64 a3 00 00 00 00    	mov    fs:0x0,eax
1003f878:	8b d9                	mov    ebx,ecx
1003f87a:	89 5d e4             	mov    DWORD PTR [ebp-0x1c],ebx
1003f87d:	ff 35 34 f4 18 10    	push   DWORD PTR ds:0x1018f434
1003f883:	ff 35 30 f4 18 10    	push   DWORD PTR ds:0x1018f430
1003f889:	6a 00                	push   0x0
1003f88b:	6a 00                	push   0x0
1003f88d:	e8 d2 3b 07 00       	call   0x100b3464
1003f892:	c7 83 bc 00 00 00 18 	mov    DWORD PTR [ebx+0xbc],0x1013cd18
1003f899:	cd 13 10 
1003f89c:	8d b3 cc 00 00 00    	lea    esi,[ebx+0xcc]
1003f8a2:	8b ce                	mov    ecx,esi
1003f8a4:	c7 03 38 75 14 10    	mov    DWORD PTR [ebx],0x10147538
1003f8aa:	c7 83 bc 00 00 00 38 	mov    DWORD PTR [ebx+0xbc],0x10147738
1003f8b1:	77 14 10 
1003f8b4:	e8 87 2a fc ff       	call   0x10002340
1003f8b9:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
1003f8bf:	68 d4 74 14 10       	push   0x101474d4
1003f8c4:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
1003f8cb:	8d 89 30 02 00 00    	lea    ecx,[ecx+0x230]
1003f8d1:	e8 ca da 05 00       	call   0x1009d3a0
1003f8d6:	a1 30 f4 18 10       	mov    eax,ds:0x1018f430
1003f8db:	99                   	cdq
1003f8dc:	2b c2                	sub    eax,edx
1003f8de:	d1 f8                	sar    eax,1
1003f8e0:	2d 40 01 00 00       	sub    eax,0x140
1003f8e5:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
1003f8e8:	a1 34 f4 18 10       	mov    eax,ds:0x1018f434
1003f8ed:	99                   	cdq
1003f8ee:	2b c2                	sub    eax,edx
1003f8f0:	8b f8                	mov    edi,eax
1003f8f2:	d1 ff                	sar    edi,1
1003f8f4:	81 ef f0 00 00 00    	sub    edi,0xf0
1003f8fa:	68 80 77 14 10       	push   0x10147780
1003f8ff:	89 7d ec             	mov    DWORD PTR [ebp-0x14],edi
1003f902:	e8 39 8d fc ff       	call   0x10008640
1003f907:	83 c4 04             	add    esp,0x4
1003f90a:	89 83 c0 00 00 00    	mov    DWORD PTR [ebx+0xc0],eax
1003f910:	85 c0                	test   eax,eax
1003f912:	74 2c                	je     0x1003f940
1003f914:	83 ec 0c             	sub    esp,0xc
1003f917:	8b f0                	mov    esi,eax
1003f919:	8b cc                	mov    ecx,esp
1003f91b:	6a 01                	push   0x1
1003f91d:	68 ff 00 00 00       	push   0xff
1003f922:	68 ff 00 00 00       	push   0xff
1003f927:	68 ff 00 00 00       	push   0xff
1003f92c:	e8 5f 3f 07 00       	call   0x100b3890
1003f931:	8b 06                	mov    eax,DWORD PTR [esi]
1003f933:	8b ce                	mov    ecx,esi
1003f935:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1003f938:	8d b3 cc 00 00 00    	lea    esi,[ebx+0xcc]
1003f93e:	eb 0e                	jmp    0x1003f94e
1003f940:	68 9c 77 14 10       	push   0x1014779c
1003f945:	ff 15 a8 26 1b 10    	call   DWORD PTR ds:0x101b26a8
1003f94b:	83 c4 04             	add    esp,0x4
1003f94e:	68 c0 00 00 00       	push   0xc0
1003f953:	e8 73 4b 07 00       	call   0x100b44cb
1003f958:	83 c4 04             	add    esp,0x4
1003f95b:	89 45 e0             	mov    DWORD PTR [ebp-0x20],eax
1003f95e:	c6 45 fc 01          	mov    BYTE PTR [ebp-0x4],0x1
1003f962:	85 c0                	test   eax,eax
1003f964:	74 11                	je     0x1003f977
1003f966:	ff b3 c0 00 00 00    	push   DWORD PTR [ebx+0xc0]
1003f96c:	8b c8                	mov    ecx,eax
1003f96e:	e8 5d 3e 07 00       	call   0x100b37d0
1003f973:	8b c8                	mov    ecx,eax
1003f975:	eb 02                	jmp    0x1003f979
1003f977:	33 c9                	xor    ecx,ecx
1003f979:	89 8b c4 00 00 00    	mov    DWORD PTR [ebx+0xc4],ecx
1003f97f:	8b 01                	mov    eax,DWORD PTR [ecx]
1003f981:	53                   	push   ebx
1003f982:	c6 45 fc 00          	mov    BYTE PTR [ebp-0x4],0x0
1003f986:	ff 50 40             	call   DWORD PTR [eax+0x40]
1003f989:	8b 8b c4 00 00 00    	mov    ecx,DWORD PTR [ebx+0xc4]
1003f98f:	57                   	push   edi
1003f990:	ff 75 f0             	push   DWORD PTR [ebp-0x10]
1003f993:	8b 01                	mov    eax,DWORD PTR [ecx]
1003f995:	ff 10                	call   DWORD PTR [eax]
1003f997:	8b 8b c4 00 00 00    	mov    ecx,DWORD PTR [ebx+0xc4]
1003f99d:	6a 01                	push   0x1
1003f99f:	8b 01                	mov    eax,DWORD PTR [ecx]
1003f9a1:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003f9a4:	8b 06                	mov    eax,DWORD PTR [esi]
1003f9a6:	8b ce                	mov    ecx,esi
1003f9a8:	53                   	push   ebx
1003f9a9:	ff 50 40             	call   DWORD PTR [eax+0x40]
1003f9ac:	68 5c e3 13 10       	push   0x1013e35c
1003f9b1:	68 74 e3 13 10       	push   0x1013e374
1003f9b6:	8b ce                	mov    ecx,esi
1003f9b8:	e8 e3 41 fc ff       	call   0x10003ba0
1003f9bd:	68 c8 77 14 10       	push   0x101477c8
1003f9c2:	56                   	push   esi
1003f9c3:	e8 18 42 fc ff       	call   0x10003be0
1003f9c8:	83 c4 08             	add    esp,0x8
1003f9cb:	8b ce                	mov    ecx,esi
1003f9cd:	6a 01                	push   0x1
1003f9cf:	e8 4c 41 fc ff       	call   0x10003b20
