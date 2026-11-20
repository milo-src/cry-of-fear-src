
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008d870 <.text+0x8c870>:
1008d870:	56                   	push   esi
1008d871:	8b f1                	mov    esi,ecx
1008d873:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1008d876:	83 ba a4 01 00 00 00 	cmp    DWORD PTR [edx+0x1a4],0x0
1008d87d:	7c 76                	jl     0x1008d8f5
1008d87f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008d884:	8b 8a f0 01 00 00    	mov    ecx,DWORD PTR [edx+0x1f0]
1008d88a:	6a 64                	push   0x64
1008d88c:	6a 20                	push   0x20
1008d88e:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1008d894:	83 ec 08             	sub    esp,0x8
1008d897:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x0
1008d89e:	00 
1008d89f:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1008d8a6:	51                   	push   ecx
1008d8a7:	6a 06                	push   0x6
1008d8a9:	ff b2 0c 02 00 00    	push   DWORD PTR [edx+0x20c]
1008d8af:	e8 3c f1 06 00       	call   0x100fc9f0
1008d8b4:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1008d8b7:	83 c4 1c             	add    esp,0x1c
1008d8ba:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008d8bf:	8b 8a f4 01 00 00    	mov    ecx,DWORD PTR [edx+0x1f4]
1008d8c5:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1008d8cb:	6a 64                	push   0x64
1008d8cd:	6a 00                	push   0x0
1008d8cf:	83 ec 08             	sub    esp,0x8
1008d8d2:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1008d8d9:	3f 
1008d8da:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1008d8e1:	51                   	push   ecx
1008d8e2:	6a 06                	push   0x6
1008d8e4:	ff b2 0c 02 00 00    	push   DWORD PTR [edx+0x20c]
1008d8ea:	e8 01 f1 06 00       	call   0x100fc9f0
1008d8ef:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1008d8f2:	83 c4 1c             	add    esp,0x1c
1008d8f5:	c7 86 00 01 00 00 00 	mov    DWORD PTR [esi+0x100],0x0
1008d8fc:	00 00 00 
1008d8ff:	8b 82 a4 01 00 00    	mov    eax,DWORD PTR [edx+0x1a4]
1008d905:	a8 20                	test   al,0x20
1008d907:	74 15                	je     0x1008d91e
1008d909:	25 00 05 00 00       	and    eax,0x500
1008d90e:	3d 00 01 00 00       	cmp    eax,0x100
1008d913:	74 41                	je     0x1008d956
1008d915:	c7 46 7c 20 da 08 10 	mov    DWORD PTR [esi+0x7c],0x1008da20
1008d91c:	eb 38                	jmp    0x1008d956
1008d91e:	8b 06                	mov    eax,DWORD PTR [esi]
1008d920:	f3 0f 10 86 0c 01 00 	movss  xmm0,DWORD PTR [esi+0x10c]
1008d927:	00 
1008d928:	51                   	push   ecx
1008d929:	8b ce                	mov    ecx,esi
1008d92b:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008d930:	ff 50 08             	call   DWORD PTR [eax+0x8]
1008d933:	f3 0f 10 86 0c 01 00 	movss  xmm0,DWORD PTR [esi+0x10c]
1008d93a:	00 
1008d93b:	0f 2e 05 d0 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a13d0
1008d942:	c7 46 78 20 d3 08 10 	mov    DWORD PTR [esi+0x78],0x1008d320
1008d949:	9f                   	lahf
1008d94a:	f6 c4 44             	test   ah,0x44
1008d94d:	7a 07                	jp     0x1008d956
1008d94f:	8b ce                	mov    ecx,esi
1008d951:	e8 7a a1 f8 ff       	call   0x10017ad0
1008d956:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008d959:	f6 80 a4 01 00 00 01 	test   BYTE PTR [eax+0x1a4],0x1
1008d960:	74 36                	je     0x1008d998
1008d962:	83 b8 d4 01 00 00 00 	cmp    DWORD PTR [eax+0x1d4],0x0
1008d969:	74 6a                	je     0x1008d9d5
1008d96b:	51                   	push   ecx
1008d96c:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1008d973:	8d 8e e4 00 00 00    	lea    ecx,[esi+0xe4]
1008d979:	6a 03                	push   0x3
1008d97b:	56                   	push   esi
1008d97c:	e8 0f 9e f8 ff       	call   0x10017790
1008d981:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008d984:	50                   	push   eax
1008d985:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008d98a:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1008d990:	03 81 d4 01 00 00    	add    eax,DWORD PTR [ecx+0x1d4]
1008d996:	eb 34                	jmp    0x1008d9cc
1008d998:	83 b8 d8 01 00 00 00 	cmp    DWORD PTR [eax+0x1d8],0x0
1008d99f:	74 34                	je     0x1008d9d5
1008d9a1:	51                   	push   ecx
1008d9a2:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1008d9a9:	8d 8e e4 00 00 00    	lea    ecx,[esi+0xe4]
1008d9af:	6a 03                	push   0x3
1008d9b1:	56                   	push   esi
1008d9b2:	e8 d9 9d f8 ff       	call   0x10017790
1008d9b7:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008d9ba:	50                   	push   eax
1008d9bb:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008d9c0:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1008d9c6:	03 81 d8 01 00 00    	add    eax,DWORD PTR [ecx+0x1d8]
1008d9cc:	50                   	push   eax
1008d9cd:	e8 1e 46 07 00       	call   0x10101ff0
1008d9d2:	83 c4 14             	add    esp,0x14
1008d9d5:	83 be b0 01 00 00 00 	cmp    DWORD PTR [esi+0x1b0],0x0
1008d9dc:	75 37                	jne    0x1008da15
1008d9de:	83 be ac 01 00 00 00 	cmp    DWORD PTR [esi+0x1ac],0x0
1008d9e5:	8d 8e e4 00 00 00    	lea    ecx,[esi+0xe4]
1008d9eb:	51                   	push   ecx
1008d9ec:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1008d9f3:	74 11                	je     0x1008da06
1008d9f5:	6a 00                	push   0x0
1008d9f7:	e8 94 9d f8 ff       	call   0x10017790
1008d9fc:	50                   	push   eax
1008d9fd:	8b ce                	mov    ecx,esi
1008d9ff:	e8 2c 4f 07 00       	call   0x10102930
1008da04:	5e                   	pop    esi
1008da05:	c3                   	ret
1008da06:	6a 03                	push   0x3
1008da08:	e8 83 9d f8 ff       	call   0x10017790
1008da0d:	50                   	push   eax
1008da0e:	8b ce                	mov    ecx,esi
1008da10:	e8 1b 4f 07 00       	call   0x10102930
1008da15:	5e                   	pop    esi
1008da16:	c3                   	ret
