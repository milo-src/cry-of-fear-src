
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1016a01f <.text+0x16901f>:
1016a01f:	8b ff                	mov    edi,edi
1016a021:	55                   	push   ebp
1016a022:	8b ec                	mov    ebp,esp
1016a024:	83 ec 28             	sub    esp,0x28
1016a027:	8d 4d 0c             	lea    ecx,[ebp+0xc]
1016a02a:	53                   	push   ebx
1016a02b:	56                   	push   esi
1016a02c:	e8 28 13 00 00       	call   0x1016b359
1016a031:	84 c0                	test   al,al
1016a033:	74 21                	je     0x1016a056
1016a035:	8b 75 14             	mov    esi,DWORD PTR [ebp+0x14]
1016a038:	85 f6                	test   esi,esi
1016a03a:	74 2e                	je     0x1016a06a
1016a03c:	83 fe 02             	cmp    esi,0x2
1016a03f:	7c 05                	jl     0x1016a046
1016a041:	83 fe 24             	cmp    esi,0x24
1016a044:	7e 24                	jle    0x1016a06a
1016a046:	e8 5e bf 00 00       	call   0x10175fa9
1016a04b:	c7 00 16 00 00 00    	mov    DWORD PTR [eax],0x16
1016a051:	e8 fc 59 00 00       	call   0x1016fa52
1016a056:	33 db                	xor    ebx,ebx
1016a058:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
1016a05b:	85 d2                	test   edx,edx
1016a05d:	74 05                	je     0x1016a064
1016a05f:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
1016a062:	89 0a                	mov    DWORD PTR [edx],ecx
1016a064:	5e                   	pop    esi
1016a065:	8b c3                	mov    eax,ebx
1016a067:	5b                   	pop    ebx
1016a068:	c9                   	leave
1016a069:	c3                   	ret
1016a06a:	57                   	push   edi
1016a06b:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1016a06e:	8d 4d d8             	lea    ecx,[ebp-0x28]
1016a071:	e8 ea 68 fe ff       	call   0x10150960
1016a076:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1016a079:	33 ff                	xor    edi,edi
1016a07b:	89 7d f4             	mov    DWORD PTR [ebp-0xc],edi
1016a07e:	89 45 e8             	mov    DWORD PTR [ebp-0x18],eax
1016a081:	eb 03                	jmp    0x1016a086
1016a083:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1016a086:	8a 18                	mov    bl,BYTE PTR [eax]
1016a088:	40                   	inc    eax
1016a089:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
1016a08c:	8d 45 dc             	lea    eax,[ebp-0x24]
1016a08f:	50                   	push   eax
1016a090:	0f b6 c3             	movzx  eax,bl
1016a093:	6a 08                	push   0x8
1016a095:	50                   	push   eax
1016a096:	88 5d fc             	mov    BYTE PTR [ebp-0x4],bl
1016a099:	e8 45 fe ff ff       	call   0x10169ee3
1016a09e:	83 c4 0c             	add    esp,0xc
1016a0a1:	85 c0                	test   eax,eax
1016a0a3:	75 de                	jne    0x1016a083
1016a0a5:	0f b6 45 18          	movzx  eax,BYTE PTR [ebp+0x18]
1016a0a9:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
1016a0ac:	80 fb 2d             	cmp    bl,0x2d
1016a0af:	75 08                	jne    0x1016a0b9
1016a0b1:	83 c8 02             	or     eax,0x2
1016a0b4:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
1016a0b7:	eb 05                	jmp    0x1016a0be
1016a0b9:	80 fb 2b             	cmp    bl,0x2b
1016a0bc:	75 0e                	jne    0x1016a0cc
1016a0be:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
1016a0c1:	8a 1f                	mov    bl,BYTE PTR [edi]
1016a0c3:	47                   	inc    edi
1016a0c4:	88 5d fc             	mov    BYTE PTR [ebp-0x4],bl
1016a0c7:	89 7d 0c             	mov    DWORD PTR [ebp+0xc],edi
1016a0ca:	eb 03                	jmp    0x1016a0cf
1016a0cc:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
1016a0cf:	85 f6                	test   esi,esi
1016a0d1:	74 05                	je     0x1016a0d8
1016a0d3:	83 fe 10             	cmp    esi,0x10
1016a0d6:	75 78                	jne    0x1016a150
1016a0d8:	8a c3                	mov    al,bl
1016a0da:	2c 30                	sub    al,0x30
1016a0dc:	3c 09                	cmp    al,0x9
1016a0de:	77 08                	ja     0x1016a0e8
1016a0e0:	0f be c3             	movsx  eax,bl
1016a0e3:	83 c0 d0             	add    eax,0xffffffd0
1016a0e6:	eb 23                	jmp    0x1016a10b
1016a0e8:	8a c3                	mov    al,bl
1016a0ea:	2c 61                	sub    al,0x61
1016a0ec:	3c 19                	cmp    al,0x19
1016a0ee:	77 08                	ja     0x1016a0f8
1016a0f0:	0f be c3             	movsx  eax,bl
1016a0f3:	83 c0 a9             	add    eax,0xffffffa9
1016a0f6:	eb 13                	jmp    0x1016a10b
1016a0f8:	8a c3                	mov    al,bl
1016a0fa:	2c 41                	sub    al,0x41
1016a0fc:	3c 19                	cmp    al,0x19
1016a0fe:	77 08                	ja     0x1016a108
1016a100:	0f be c3             	movsx  eax,bl
1016a103:	83 c0 c9             	add    eax,0xffffffc9
1016a106:	eb 03                	jmp    0x1016a10b
1016a108:	83 c8 ff             	or     eax,0xffffffff
1016a10b:	85 c0                	test   eax,eax
1016a10d:	74 09                	je     0x1016a118
1016a10f:	85 f6                	test   esi,esi
1016a111:	75 3d                	jne    0x1016a150
1016a113:	6a 0a                	push   0xa
1016a115:	5e                   	pop    esi
1016a116:	eb 38                	jmp    0x1016a150
1016a118:	8a 07                	mov    al,BYTE PTR [edi]
1016a11a:	47                   	inc    edi
1016a11b:	88 45 f0             	mov    BYTE PTR [ebp-0x10],al
1016a11e:	89 7d 0c             	mov    DWORD PTR [ebp+0xc],edi
1016a121:	3c 78                	cmp    al,0x78
1016a123:	74 1b                	je     0x1016a140
1016a125:	3c 58                	cmp    al,0x58
1016a127:	74 17                	je     0x1016a140
1016a129:	85 f6                	test   esi,esi
1016a12b:	75 03                	jne    0x1016a130
1016a12d:	6a 08                	push   0x8
1016a12f:	5e                   	pop    esi
1016a130:	ff 75 f0             	push   DWORD PTR [ebp-0x10]
1016a133:	8d 4d 0c             	lea    ecx,[ebp+0xc]
1016a136:	e8 c7 11 00 00       	call   0x1016b302
1016a13b:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
1016a13e:	eb 10                	jmp    0x1016a150
1016a140:	85 f6                	test   esi,esi
1016a142:	75 03                	jne    0x1016a147
1016a144:	6a 10                	push   0x10
1016a146:	5e                   	pop    esi
1016a147:	8a 1f                	mov    bl,BYTE PTR [edi]
1016a149:	47                   	inc    edi
1016a14a:	88 5d fc             	mov    BYTE PTR [ebp-0x4],bl
1016a14d:	89 7d 0c             	mov    DWORD PTR [ebp+0xc],edi
1016a150:	33 d2                	xor    edx,edx
1016a152:	83 c8 ff             	or     eax,0xffffffff
1016a155:	f7 f6                	div    esi
1016a157:	89 55 ec             	mov    DWORD PTR [ebp-0x14],edx
1016a15a:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
1016a15d:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
1016a160:	8d 4b d0             	lea    ecx,[ebx-0x30]
1016a163:	80 f9 09             	cmp    cl,0x9
1016a166:	77 08                	ja     0x1016a170
1016a168:	0f be cb             	movsx  ecx,bl
1016a16b:	83 c1 d0             	add    ecx,0xffffffd0
1016a16e:	eb 23                	jmp    0x1016a193
1016a170:	8a c3                	mov    al,bl
1016a172:	2c 61                	sub    al,0x61
1016a174:	3c 19                	cmp    al,0x19
1016a176:	77 08                	ja     0x1016a180
1016a178:	0f be cb             	movsx  ecx,bl
1016a17b:	83 c1 a9             	add    ecx,0xffffffa9
1016a17e:	eb 13                	jmp    0x1016a193
1016a180:	8a c3                	mov    al,bl
1016a182:	2c 41                	sub    al,0x41
1016a184:	3c 19                	cmp    al,0x19
1016a186:	77 08                	ja     0x1016a190
1016a188:	0f be cb             	movsx  ecx,bl
1016a18b:	83 c1 c9             	add    ecx,0xffffffc9
1016a18e:	eb 03                	jmp    0x1016a193
1016a190:	83 c9 ff             	or     ecx,0xffffffff
1016a193:	83 f9 ff             	cmp    ecx,0xffffffff
1016a196:	74 2f                	je     0x1016a1c7
1016a198:	3b ce                	cmp    ecx,esi
1016a19a:	73 2b                	jae    0x1016a1c7
1016a19c:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
1016a19f:	3b 45 f0             	cmp    eax,DWORD PTR [ebp-0x10]
1016a1a2:	72 0b                	jb     0x1016a1af
1016a1a4:	75 05                	jne    0x1016a1ab
1016a1a6:	3b 4d ec             	cmp    ecx,DWORD PTR [ebp-0x14]
1016a1a9:	76 04                	jbe    0x1016a1af
1016a1ab:	6a 0c                	push   0xc
1016a1ad:	eb 0a                	jmp    0x1016a1b9
1016a1af:	0f af c6             	imul   eax,esi
1016a1b2:	6a 08                	push   0x8
1016a1b4:	03 c1                	add    eax,ecx
1016a1b6:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
1016a1b9:	8a 1f                	mov    bl,BYTE PTR [edi]
1016a1bb:	47                   	inc    edi
1016a1bc:	58                   	pop    eax
1016a1bd:	88 5d fc             	mov    BYTE PTR [ebp-0x4],bl
1016a1c0:	0b d0                	or     edx,eax
1016a1c2:	89 7d 0c             	mov    DWORD PTR [ebp+0xc],edi
1016a1c5:	eb 99                	jmp    0x1016a160
1016a1c7:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
1016a1ca:	8d 4d 0c             	lea    ecx,[ebp+0xc]
1016a1cd:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
1016a1d0:	e8 2d 11 00 00       	call   0x1016b302
1016a1d5:	8b 5d f8             	mov    ebx,DWORD PTR [ebp-0x8]
1016a1d8:	f6 c3 08             	test   bl,0x8
1016a1db:	75 0a                	jne    0x1016a1e7
1016a1dd:	8b 45 e8             	mov    eax,DWORD PTR [ebp-0x18]
1016a1e0:	33 db                	xor    ebx,ebx
1016a1e2:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
1016a1e5:	eb 41                	jmp    0x1016a228
1016a1e7:	8b 7d f4             	mov    edi,DWORD PTR [ebp-0xc]
1016a1ea:	57                   	push   edi
1016a1eb:	53                   	push   ebx
1016a1ec:	e8 c7 fd ff ff       	call   0x10169fb8
1016a1f1:	59                   	pop    ecx
1016a1f2:	59                   	pop    ecx
1016a1f3:	84 c0                	test   al,al
1016a1f5:	74 28                	je     0x1016a21f
1016a1f7:	e8 ad bd 00 00       	call   0x10175fa9
1016a1fc:	c7 00 22 00 00 00    	mov    DWORD PTR [eax],0x22
1016a202:	f6 c3 01             	test   bl,0x1
1016a205:	75 05                	jne    0x1016a20c
1016a207:	83 cf ff             	or     edi,0xffffffff
1016a20a:	eb 1a                	jmp    0x1016a226
1016a20c:	f6 c3 02             	test   bl,0x2
1016a20f:	74 07                	je     0x1016a218
1016a211:	bb 00 00 00 80       	mov    ebx,0x80000000
1016a216:	eb 10                	jmp    0x1016a228
1016a218:	bb ff ff ff 7f       	mov    ebx,0x7fffffff
1016a21d:	eb 09                	jmp    0x1016a228
1016a21f:	f6 c3 02             	test   bl,0x2
1016a222:	74 02                	je     0x1016a226
1016a224:	f7 df                	neg    edi
1016a226:	8b df                	mov    ebx,edi
1016a228:	80 7d e4 00          	cmp    BYTE PTR [ebp-0x1c],0x0
1016a22c:	5f                   	pop    edi
1016a22d:	0f 84 25 fe ff ff    	je     0x1016a058
1016a233:	8b 45 d8             	mov    eax,DWORD PTR [ebp-0x28]
1016a236:	83 a0 50 03 00 00 fd 	and    DWORD PTR [eax+0x350],0xfffffffd
1016a23d:	e9 16 fe ff ff       	jmp    0x1016a058
