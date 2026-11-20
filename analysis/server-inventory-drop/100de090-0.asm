
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100de090 <.text+0xdd090>:
100de090:	55                   	push   ebp
100de091:	8b ec                	mov    ebp,esp
100de093:	83 ec 0c             	sub    esp,0xc
100de096:	56                   	push   esi
100de097:	8b f1                	mov    esi,ecx
100de099:	80 be e8 1e 00 00 00 	cmp    BYTE PTR [esi+0x1ee8],0x0
100de0a0:	0f 85 ba 00 00 00    	jne    0x100de160
100de0a6:	e8 25 6e 00 00       	call   0x100e4ed0
100de0ab:	85 c0                	test   eax,eax
100de0ad:	0f 85 ad 00 00 00    	jne    0x100de160
100de0b3:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100de0b6:	53                   	push   ebx
100de0b7:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
100de0ba:	57                   	push   edi
100de0bb:	8b 81 0c 02 00 00    	mov    eax,DWORD PTR [ecx+0x20c]
100de0c1:	f3 0f 10 91 7c 01 00 	movss  xmm2,DWORD PTR [ecx+0x17c]
100de0c8:	00 
100de0c9:	f3 0f 10 89 80 01 00 	movss  xmm1,DWORD PTR [ecx+0x180]
100de0d0:	00 
100de0d1:	f3 0f 10 81 78 01 00 	movss  xmm0,DWORD PTR [ecx+0x178]
100de0d8:	00 
100de0d9:	f3 0f 58 51 0c       	addss  xmm2,DWORD PTR [ecx+0xc]
100de0de:	f3 0f 58 49 10       	addss  xmm1,DWORD PTR [ecx+0x10]
100de0e3:	f3 0f 58 41 08       	addss  xmm0,DWORD PTR [ecx+0x8]
100de0e8:	6a 00                	push   0x0
100de0ea:	50                   	push   eax
100de0eb:	8d 41 74             	lea    eax,[ecx+0x74]
100de0ee:	f3 0f 11 55 f8       	movss  DWORD PTR [ebp-0x8],xmm2
100de0f3:	50                   	push   eax
100de0f4:	8d 45 f4             	lea    eax,[ebp-0xc]
100de0f7:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
100de0fc:	50                   	push   eax
100de0fd:	ff b4 9e fc 21 00 00 	push   DWORD PTR [esi+ebx*4+0x21fc]
100de104:	f3 0f 11 4d fc       	movss  DWORD PTR [ebp-0x4],xmm1
100de109:	68 cc e8 1a 10       	push   0x101ae8cc
100de10e:	e8 dd 98 f3 ff       	call   0x100179f0
100de113:	8b f8                	mov    edi,eax
100de115:	83 c4 18             	add    esp,0x18
100de118:	85 ff                	test   edi,edi
100de11a:	74 42                	je     0x100de15e
100de11c:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
100de11f:	8b 8c 9e fc 21 00 00 	mov    ecx,DWORD PTR [esi+ebx*4+0x21fc]
100de126:	6a 00                	push   0x0
100de128:	53                   	push   ebx
100de129:	89 8a d8 01 00 00    	mov    DWORD PTR [edx+0x1d8],ecx
100de12f:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100de132:	c7 41 50 00 00 00 00 	mov    DWORD PTR [ecx+0x50],0x0
100de139:	8b ce                	mov    ecx,esi
100de13b:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100de13e:	c7 40 58 00 00 00 00 	mov    DWORD PTR [eax+0x58],0x0
100de145:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100de148:	c7 80 c0 01 00 00 00 	mov    DWORD PTR [eax+0x1c0],0x44268000
100de14f:	80 26 44 
100de152:	e8 39 f8 ff ff       	call   0x100dd990
100de157:	8b ce                	mov    ecx,esi
100de159:	e8 e2 fa ff ff       	call   0x100ddc40
100de15e:	5f                   	pop    edi
100de15f:	5b                   	pop    ebx
100de160:	5e                   	pop    esi
100de161:	8b e5                	mov    esp,ebp
100de163:	5d                   	pop    ebp
100de164:	c2 04 00             	ret    0x4
