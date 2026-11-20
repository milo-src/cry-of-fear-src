
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10174843 <.text+0x173843>:
10174843:	8b ff                	mov    edi,edi
10174845:	55                   	push   ebp
10174846:	8b ec                	mov    ebp,esp
10174848:	83 ec 30             	sub    esp,0x30
1017484b:	53                   	push   ebx
1017484c:	56                   	push   esi
1017484d:	57                   	push   edi
1017484e:	e8 7b f2 ff ff       	call   0x10173ace
10174853:	8b f8                	mov    edi,eax
10174855:	33 db                	xor    ebx,ebx
10174857:	57                   	push   edi
10174858:	8d 45 d0             	lea    eax,[ebp-0x30]
1017485b:	89 5d d0             	mov    DWORD PTR [ebp-0x30],ebx
1017485e:	50                   	push   eax
1017485f:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10174862:	89 5d d4             	mov    DWORD PTR [ebp-0x2c],ebx
10174865:	89 5d d8             	mov    DWORD PTR [ebp-0x28],ebx
10174868:	89 5d dc             	mov    DWORD PTR [ebp-0x24],ebx
1017486b:	89 5d e0             	mov    DWORD PTR [ebp-0x20],ebx
1017486e:	88 5d e4             	mov    BYTE PTR [ebp-0x1c],bl
10174871:	e8 88 dc ff ff       	call   0x101724fe
10174876:	8b f0                	mov    esi,eax
10174878:	83 c4 0c             	add    esp,0xc
1017487b:	85 f6                	test   esi,esi
1017487d:	74 0c                	je     0x1017488b
1017487f:	e8 25 17 00 00       	call   0x10175fa9
10174884:	89 30                	mov    DWORD PTR [eax],esi
10174886:	83 ce ff             	or     esi,0xffffffff
10174889:	eb 51                	jmp    0x101748dc
1017488b:	57                   	push   edi
1017488c:	8d 45 e8             	lea    eax,[ebp-0x18]
1017488f:	89 5d e8             	mov    DWORD PTR [ebp-0x18],ebx
10174892:	50                   	push   eax
10174893:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10174896:	89 5d ec             	mov    DWORD PTR [ebp-0x14],ebx
10174899:	89 5d f0             	mov    DWORD PTR [ebp-0x10],ebx
1017489c:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
1017489f:	89 5d f8             	mov    DWORD PTR [ebp-0x8],ebx
101748a2:	88 5d fc             	mov    BYTE PTR [ebp-0x4],bl
101748a5:	e8 54 dc ff ff       	call   0x101724fe
101748aa:	8b f0                	mov    esi,eax
101748ac:	83 c4 0c             	add    esp,0xc
101748af:	85 f6                	test   esi,esi
101748b1:	74 0c                	je     0x101748bf
101748b3:	e8 f1 16 00 00       	call   0x10175fa9
101748b8:	89 30                	mov    DWORD PTR [eax],esi
101748ba:	83 ce ff             	or     esi,0xffffffff
101748bd:	eb 0f                	jmp    0x101748ce
101748bf:	ff 75 f0             	push   DWORD PTR [ebp-0x10]
101748c2:	ff 75 d8             	push   DWORD PTR [ebp-0x28]
101748c5:	e8 7d 4c 01 00       	call   0x10189547
101748ca:	59                   	pop    ecx
101748cb:	59                   	pop    ecx
101748cc:	8b f0                	mov    esi,eax
101748ce:	38 5d fc             	cmp    BYTE PTR [ebp-0x4],bl
101748d1:	74 09                	je     0x101748dc
101748d3:	ff 75 f0             	push   DWORD PTR [ebp-0x10]
101748d6:	e8 c7 8d 00 00       	call   0x1017d6a2
101748db:	59                   	pop    ecx
101748dc:	38 5d e4             	cmp    BYTE PTR [ebp-0x1c],bl
101748df:	74 09                	je     0x101748ea
101748e1:	ff 75 d8             	push   DWORD PTR [ebp-0x28]
101748e4:	e8 b9 8d 00 00       	call   0x1017d6a2
101748e9:	59                   	pop    ecx
101748ea:	5f                   	pop    edi
101748eb:	8b c6                	mov    eax,esi
101748ed:	5e                   	pop    esi
101748ee:	5b                   	pop    ebx
101748ef:	c9                   	leave
101748f0:	c3                   	ret
