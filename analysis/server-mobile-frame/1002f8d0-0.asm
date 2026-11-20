
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1002f8d0 <.text+0x2e8d0>:
1002f8d0:	55                   	push   ebp
1002f8d1:	8b ec                	mov    ebp,esp
1002f8d3:	6a ff                	push   0xffffffff
1002f8d5:	68 ef d3 19 10       	push   0x1019d3ef
1002f8da:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1002f8e0:	50                   	push   eax
1002f8e1:	83 ec 28             	sub    esp,0x28
1002f8e4:	53                   	push   ebx
1002f8e5:	56                   	push   esi
1002f8e6:	57                   	push   edi
1002f8e7:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1002f8ec:	33 c5                	xor    eax,ebp
1002f8ee:	50                   	push   eax
1002f8ef:	8d 45 f4             	lea    eax,[ebp-0xc]
1002f8f2:	64 a3 00 00 00 00    	mov    fs:0x0,eax
1002f8f8:	8b d9                	mov    ebx,ecx
1002f8fa:	89 5d f0             	mov    DWORD PTR [ebp-0x10],ebx
1002f8fd:	83 7d 14 00          	cmp    DWORD PTR [ebp+0x14],0x0
1002f901:	c7 45 e8 00 00 00 00 	mov    DWORD PTR [ebp-0x18],0x0
1002f908:	74 1b                	je     0x1002f925
1002f90a:	c7 03 44 db 1a 10    	mov    DWORD PTR [ebx],0x101adb44
1002f910:	c7 43 70 a8 da 1a 10 	mov    DWORD PTR [ebx+0x70],0x101adaa8
1002f917:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
1002f91e:	c7 45 e8 01 00 00 00 	mov    DWORD PTR [ebp-0x18],0x1
1002f925:	6a 00                	push   0x0
1002f927:	8d 73 10             	lea    esi,[ebx+0x10]
1002f92a:	8b cb                	mov    ecx,ebx
1002f92c:	6a 00                	push   0x0
1002f92e:	56                   	push   esi
1002f92f:	89 75 14             	mov    DWORD PTR [ebp+0x14],esi
1002f932:	e8 d9 01 00 00       	call   0x1002fb10
1002f937:	8b 03                	mov    eax,DWORD PTR [ebx]
1002f939:	6a 08                	push   0x8
1002f93b:	c7 45 fc 01 00 00 00 	mov    DWORD PTR [ebp-0x4],0x1
1002f942:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1002f945:	c7 04 03 40 db 1a 10 	mov    DWORD PTR [ebx+eax*1],0x101adb40
1002f94c:	8b 03                	mov    eax,DWORD PTR [ebx]
1002f94e:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
1002f951:	89 75 e4             	mov    DWORD PTR [ebp-0x1c],esi
1002f954:	8d 41 90             	lea    eax,[ecx-0x70]
1002f957:	89 44 19 fc          	mov    DWORD PTR [ecx+ebx*1-0x4],eax
1002f95b:	c7 06 c0 da 1a 10    	mov    DWORD PTR [esi],0x101adac0
1002f961:	e8 83 e8 10 00       	call   0x1013e1e9
1002f966:	8b f8                	mov    edi,eax
1002f968:	83 c4 04             	add    esp,0x4
1002f96b:	85 ff                	test   edi,edi
1002f96d:	74 13                	je     0x1002f982
1002f96f:	6a 01                	push   0x1
1002f971:	c6 45 fc 02          	mov    BYTE PTR [ebp-0x4],0x2
1002f975:	e8 de 30 0f 00       	call   0x10122a58
1002f97a:	83 c4 04             	add    esp,0x4
1002f97d:	89 47 04             	mov    DWORD PTR [edi+0x4],eax
1002f980:	eb 02                	jmp    0x1002f984
1002f982:	33 ff                	xor    edi,edi
1002f984:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
1002f987:	8d 5e 04             	lea    ebx,[esi+0x4]
1002f98a:	89 5d ec             	mov    DWORD PTR [ebp-0x14],ebx
1002f98d:	8d 56 08             	lea    edx,[esi+0x8]
1002f990:	8b 5d 14             	mov    ebx,DWORD PTR [ebp+0x14]
1002f993:	8d 4e 18             	lea    ecx,[esi+0x18]
1002f996:	89 7e 34             	mov    DWORD PTR [esi+0x34],edi
1002f999:	83 c0 28             	add    eax,0x28
1002f99c:	89 55 e4             	mov    DWORD PTR [ebp-0x1c],edx
1002f99f:	8d 7e 14             	lea    edi,[esi+0x14]
1002f9a2:	8b 55 14             	mov    edx,DWORD PTR [ebp+0x14]
1002f9a5:	83 c6 24             	add    esi,0x24
1002f9a8:	c7 03 00 db 1a 10    	mov    DWORD PTR [ebx],0x101adb00
1002f9ae:	c6 43 48 00          	mov    BYTE PTR [ebx+0x48],0x0
1002f9b2:	c6 43 3d 00          	mov    BYTE PTR [ebx+0x3d],0x0
1002f9b6:	8b 5d ec             	mov    ebx,DWORD PTR [ebp-0x14]
1002f9b9:	89 5a 0c             	mov    DWORD PTR [edx+0xc],ebx
1002f9bc:	8b 5d 14             	mov    ebx,DWORD PTR [ebp+0x14]
1002f9bf:	8b 55 e4             	mov    edx,DWORD PTR [ebp-0x1c]
1002f9c2:	89 53 10             	mov    DWORD PTR [ebx+0x10],edx
1002f9c5:	89 7b 1c             	mov    DWORD PTR [ebx+0x1c],edi
1002f9c8:	89 4b 20             	mov    DWORD PTR [ebx+0x20],ecx
1002f9cb:	89 73 2c             	mov    DWORD PTR [ebx+0x2c],esi
1002f9ce:	89 43 30             	mov    DWORD PTR [ebx+0x30],eax
1002f9d1:	8b 5d ec             	mov    ebx,DWORD PTR [ebp-0x14]
1002f9d4:	c7 02 00 00 00 00    	mov    DWORD PTR [edx],0x0
1002f9da:	c7 01 00 00 00 00    	mov    DWORD PTR [ecx],0x0
1002f9e0:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
1002f9e6:	c7 03 00 00 00 00    	mov    DWORD PTR [ebx],0x0
1002f9ec:	8b 5d 14             	mov    ebx,DWORD PTR [ebp+0x14]
1002f9ef:	c7 07 00 00 00 00    	mov    DWORD PTR [edi],0x0
1002f9f5:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
1002f9fb:	c7 43 4c 00 00 00 00 	mov    DWORD PTR [ebx+0x4c],0x0
1002fa02:	a1 1c 2e 22 10       	mov    eax,ds:0x10222e1c
1002fa07:	89 43 40             	mov    DWORD PTR [ebx+0x40],eax
1002fa0a:	a1 20 2e 22 10       	mov    eax,ds:0x10222e20
1002fa0f:	89 43 44             	mov    DWORD PTR [ebx+0x44],eax
1002fa12:	c7 43 38 00 00 00 00 	mov    DWORD PTR [ebx+0x38],0x0
1002fa19:	ff 75 10             	push   DWORD PTR [ebp+0x10]
1002fa1c:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1002fa1f:	83 c8 01             	or     eax,0x1
1002fa22:	c6 45 fc 03          	mov    BYTE PTR [ebp-0x4],0x3
1002fa26:	50                   	push   eax
1002fa27:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1002fa2a:	e8 c1 37 0f 00       	call   0x101231f0
1002fa2f:	83 c4 0c             	add    esp,0xc
1002fa32:	85 c0                	test   eax,eax
1002fa34:	74 62                	je     0x1002fa98
1002fa36:	6a 01                	push   0x1
1002fa38:	50                   	push   eax
1002fa39:	8b cb                	mov    ecx,ebx
1002fa3b:	e8 40 77 00 00       	call   0x10037180
1002fa40:	8b 43 34             	mov    eax,DWORD PTR [ebx+0x34]
1002fa43:	8b 70 04             	mov    esi,DWORD PTR [eax+0x4]
1002fa46:	8b ce                	mov    ecx,esi
1002fa48:	89 75 e4             	mov    DWORD PTR [ebp-0x1c],esi
1002fa4b:	8b 06                	mov    eax,DWORD PTR [esi]
1002fa4d:	ff 50 04             	call   DWORD PTR [eax+0x4]
1002fa50:	8d 45 e0             	lea    eax,[ebp-0x20]
1002fa53:	c6 45 fc 04          	mov    BYTE PTR [ebp-0x4],0x4
1002fa57:	50                   	push   eax
1002fa58:	e8 93 fb ff ff       	call   0x1002f5f0
1002fa5d:	83 c4 04             	add    esp,0x4
1002fa60:	8b cb                	mov    ecx,ebx
1002fa62:	50                   	push   eax
1002fa63:	e8 08 78 00 00       	call   0x10037270
1002fa68:	85 f6                	test   esi,esi
1002fa6a:	74 13                	je     0x1002fa7f
1002fa6c:	8b 06                	mov    eax,DWORD PTR [esi]
1002fa6e:	8b ce                	mov    ecx,esi
1002fa70:	ff 50 08             	call   DWORD PTR [eax+0x8]
1002fa73:	85 c0                	test   eax,eax
1002fa75:	74 08                	je     0x1002fa7f
1002fa77:	8b 10                	mov    edx,DWORD PTR [eax]
1002fa79:	8b c8                	mov    ecx,eax
1002fa7b:	6a 01                	push   0x1
1002fa7d:	ff 12                	call   DWORD PTR [edx]
1002fa7f:	8b 55 f0             	mov    edx,DWORD PTR [ebp-0x10]
1002fa82:	8b c2                	mov    eax,edx
1002fa84:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
1002fa87:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1002fa8e:	59                   	pop    ecx
1002fa8f:	5f                   	pop    edi
1002fa90:	5e                   	pop    esi
1002fa91:	5b                   	pop    ebx
1002fa92:	8b e5                	mov    esp,ebp
1002fa94:	5d                   	pop    ebp
1002fa95:	c2 10 00             	ret    0x10
1002fa98:	8b 55 f0             	mov    edx,DWORD PTR [ebp-0x10]
1002fa9b:	33 f6                	xor    esi,esi
1002fa9d:	8b 02                	mov    eax,DWORD PTR [edx]
1002fa9f:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
1002faa2:	b8 04 00 00 00       	mov    eax,0x4
1002faa7:	03 ca                	add    ecx,edx
1002faa9:	39 71 38             	cmp    DWORD PTR [ecx+0x38],esi
1002faac:	0f 45 c6             	cmovne eax,esi
1002faaf:	0b 41 0c             	or     eax,DWORD PTR [ecx+0xc]
1002fab2:	83 e0 15             	and    eax,0x15
1002fab5:	83 c8 02             	or     eax,0x2
1002fab8:	89 41 0c             	mov    DWORD PTR [ecx+0xc],eax
1002fabb:	8b 49 10             	mov    ecx,DWORD PTR [ecx+0x10]
1002fabe:	23 c8                	and    ecx,eax
1002fac0:	74 c0                	je     0x1002fa82
1002fac2:	f6 c1 04             	test   cl,0x4
1002fac5:	74 07                	je     0x1002face
1002fac7:	be 5c da 1a 10       	mov    esi,0x101ada5c
1002facc:	eb 10                	jmp    0x1002fade
1002face:	f6 c1 02             	test   cl,0x2
1002fad1:	be 74 da 1a 10       	mov    esi,0x101ada74
1002fad6:	b8 8c da 1a 10       	mov    eax,0x101ada8c
1002fadb:	0f 44 f0             	cmove  esi,eax
1002fade:	8d 45 e0             	lea    eax,[ebp-0x20]
1002fae1:	6a 01                	push   0x1
1002fae3:	50                   	push   eax
1002fae4:	e8 67 82 00 00       	call   0x10037d50
1002fae9:	83 c4 08             	add    esp,0x8
1002faec:	8d 4d cc             	lea    ecx,[ebp-0x34]
1002faef:	50                   	push   eax
1002faf0:	56                   	push   esi
1002faf1:	e8 0a 06 00 00       	call   0x10030100
1002faf6:	68 cc 48 20 10       	push   0x102048cc
1002fafb:	8d 45 cc             	lea    eax,[ebp-0x34]
1002fafe:	50                   	push   eax
1002faff:	e8 b8 05 11 00       	call   0x101400bc
