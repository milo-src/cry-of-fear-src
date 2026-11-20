
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fef60 <.text+0xfdf60>:
100fef60:	55                   	push   ebp
100fef61:	8b ec                	mov    ebp,esp
100fef63:	81 ec 10 02 00 00    	sub    esp,0x210
100fef69:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100fef6e:	33 c5                	xor    eax,ebp
100fef70:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100fef73:	83 3d 68 f1 22 10 00 	cmp    DWORD PTR ds:0x1022f168,0x0
100fef7a:	0f 85 44 02 00 00    	jne    0x100ff1c4
100fef80:	56                   	push   esi
100fef81:	68 00 1a 00 00       	push   0x1a00
100fef86:	6a 00                	push   0x0
100fef88:	68 70 f1 22 10       	push   0x1022f170
100fef8d:	e8 fe 04 04 00       	call   0x1013f490
100fef92:	68 00 02 00 00       	push   0x200
100fef97:	6a 00                	push   0x0
100fef99:	68 70 0b 23 10       	push   0x10230b70
100fef9e:	e8 ed 04 04 00       	call   0x1013f490
100fefa3:	68 00 02 00 00       	push   0x200
100fefa8:	8d 85 fc fd ff ff    	lea    eax,[ebp-0x204]
100fefae:	c7 05 6c f1 22 10 00 	mov    DWORD PTR ds:0x1022f16c,0x0
100fefb5:	00 00 00 
100fefb8:	6a 00                	push   0x0
100fefba:	50                   	push   eax
100fefbb:	e8 d0 04 04 00       	call   0x1013f490
100fefc0:	68 b4 b6 1c 10       	push   0x101cb6b4
100fefc5:	ff 15 30 30 22 10    	call   DWORD PTR ds:0x10223030
100fefcb:	8b d0                	mov    edx,eax
100fefcd:	83 c4 28             	add    esp,0x28
100fefd0:	8d 72 01             	lea    esi,[edx+0x1]
100fefd3:	8a 0a                	mov    cl,BYTE PTR [edx]
100fefd5:	42                   	inc    edx
100fefd6:	84 c9                	test   cl,cl
100fefd8:	75 f9                	jne    0x100fefd3
100fefda:	2b d6                	sub    edx,esi
100fefdc:	83 fa 02             	cmp    edx,0x2
100fefdf:	76 18                	jbe    0x100feff9
100fefe1:	8d 8d f8 fd ff ff    	lea    ecx,[ebp-0x208]
100fefe7:	51                   	push   ecx
100fefe8:	50                   	push   eax
100fefe9:	ff 15 c4 30 22 10    	call   DWORD PTR ds:0x102230c4
100fefef:	8b f0                	mov    esi,eax
100feff1:	89 b5 f4 fd ff ff    	mov    DWORD PTR [ebp-0x20c],esi
100feff7:	eb 1a                	jmp    0x100ff013
100feff9:	8d 85 f8 fd ff ff    	lea    eax,[ebp-0x208]
100fefff:	50                   	push   eax
100ff000:	68 14 14 1a 10       	push   0x101a1414
100ff005:	ff 15 c4 30 22 10    	call   DWORD PTR ds:0x102230c4
100ff00b:	8b f0                	mov    esi,eax
100ff00d:	89 85 f4 fd ff ff    	mov    DWORD PTR [ebp-0x20c],eax
100ff013:	83 c4 08             	add    esp,0x8
100ff016:	85 f6                	test   esi,esi
100ff018:	0f 84 a5 01 00 00    	je     0x100ff1c3
100ff01e:	68 ff 01 00 00       	push   0x1ff
100ff023:	8d 85 fc fd ff ff    	lea    eax,[ebp-0x204]
100ff029:	50                   	push   eax
100ff02a:	8d 85 f0 fd ff ff    	lea    eax,[ebp-0x210]
100ff030:	50                   	push   eax
100ff031:	ff b5 f8 fd ff ff    	push   DWORD PTR [ebp-0x208]
100ff037:	56                   	push   esi
100ff038:	e8 d3 13 00 00       	call   0x10100410
100ff03d:	83 c4 14             	add    esp,0x14
100ff040:	85 c0                	test   eax,eax
100ff042:	0f 84 67 01 00 00    	je     0x100ff1af
100ff048:	53                   	push   ebx
100ff049:	57                   	push   edi
100ff04a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100ff050:	81 3d 6c f1 22 10 00 	cmp    DWORD PTR ds:0x1022f16c,0x200
100ff057:	02 00 00 
100ff05a:	0f 8d 4d 01 00 00    	jge    0x100ff1ad
100ff060:	33 f6                	xor    esi,esi
100ff062:	80 bd fc fd ff ff 00 	cmp    BYTE PTR [ebp-0x204],0x0
100ff069:	74 25                	je     0x100ff090
100ff06b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100ff070:	0f be 84 35 fc fd ff 	movsx  eax,BYTE PTR [ebp+esi*1-0x204]
100ff077:	ff 
100ff078:	50                   	push   eax
100ff079:	e8 d2 e1 06 00       	call   0x1016d250
100ff07e:	83 c4 04             	add    esp,0x4
100ff081:	85 c0                	test   eax,eax
100ff083:	74 0b                	je     0x100ff090
100ff085:	46                   	inc    esi
100ff086:	80 bc 35 fc fd ff ff 	cmp    BYTE PTR [ebp+esi*1-0x204],0x0
100ff08d:	00 
100ff08e:	75 e0                	jne    0x100ff070
100ff090:	8a 84 35 fc fd ff ff 	mov    al,BYTE PTR [ebp+esi*1-0x204]
100ff097:	84 c0                	test   al,al
100ff099:	0f 84 de 00 00 00    	je     0x100ff17d
100ff09f:	3c 2f                	cmp    al,0x2f
100ff0a1:	0f 84 d6 00 00 00    	je     0x100ff17d
100ff0a7:	0f be c0             	movsx  eax,al
100ff0aa:	50                   	push   eax
100ff0ab:	e8 10 dd 06 00       	call   0x1016cdc0
100ff0b0:	83 c4 04             	add    esp,0x4
100ff0b3:	85 c0                	test   eax,eax
100ff0b5:	0f 84 c2 00 00 00    	je     0x100ff17d
100ff0bb:	0f be 84 35 fc fd ff 	movsx  eax,BYTE PTR [ebp+esi*1-0x204]
100ff0c2:	ff 
100ff0c3:	50                   	push   eax
100ff0c4:	e8 32 e8 06 00       	call   0x1016d8fb
100ff0c9:	8b 0d 6c f1 22 10    	mov    ecx,DWORD PTR ds:0x1022f16c
100ff0cf:	46                   	inc    esi
100ff0d0:	83 c4 04             	add    esp,0x4
100ff0d3:	88 81 70 0b 23 10    	mov    BYTE PTR [ecx+0x10230b70],al
100ff0d9:	8a 84 35 fc fd ff ff 	mov    al,BYTE PTR [ebp+esi*1-0x204]
100ff0e0:	84 c0                	test   al,al
100ff0e2:	74 1c                	je     0x100ff100
100ff0e4:	0f be c0             	movsx  eax,al
100ff0e7:	50                   	push   eax
100ff0e8:	e8 63 e1 06 00       	call   0x1016d250
100ff0ed:	83 c4 04             	add    esp,0x4
100ff0f0:	85 c0                	test   eax,eax
100ff0f2:	74 0c                	je     0x100ff100
100ff0f4:	8a 84 35 fd fd ff ff 	mov    al,BYTE PTR [ebp+esi*1-0x203]
100ff0fb:	46                   	inc    esi
100ff0fc:	84 c0                	test   al,al
100ff0fe:	75 e4                	jne    0x100ff0e4
100ff100:	8d 9d fc fd ff ff    	lea    ebx,[ebp-0x204]
100ff106:	03 de                	add    ebx,esi
100ff108:	80 3b 00             	cmp    BYTE PTR [ebx],0x0
100ff10b:	74 70                	je     0x100ff17d
100ff10d:	8b fe                	mov    edi,esi
100ff10f:	90                   	nop
100ff110:	0f be 84 3d fc fd ff 	movsx  eax,BYTE PTR [ebp+edi*1-0x204]
100ff117:	ff 
100ff118:	50                   	push   eax
100ff119:	e8 32 e1 06 00       	call   0x1016d250
100ff11e:	83 c4 04             	add    esp,0x4
100ff121:	85 c0                	test   eax,eax
100ff123:	75 0a                	jne    0x100ff12f
100ff125:	47                   	inc    edi
100ff126:	38 84 3d fc fd ff ff 	cmp    BYTE PTR [ebp+edi*1-0x204],al
100ff12d:	75 e1                	jne    0x100ff110
100ff12f:	80 bc 3d fc fd ff ff 	cmp    BYTE PTR [ebp+edi*1-0x204],0x0
100ff136:	00 
100ff137:	74 44                	je     0x100ff17d
100ff139:	83 c6 0c             	add    esi,0xc
100ff13c:	3b fe                	cmp    edi,esi
100ff13e:	0f 4c f7             	cmovl  esi,edi
100ff141:	81 fe 00 02 00 00    	cmp    esi,0x200
100ff147:	0f 83 85 00 00 00    	jae    0x100ff1d2
100ff14d:	a1 6c f1 22 10       	mov    eax,ds:0x1022f16c
100ff152:	6b c8 0d             	imul   ecx,eax,0xd
100ff155:	40                   	inc    eax
100ff156:	c6 84 35 fc fd ff ff 	mov    BYTE PTR [ebp+esi*1-0x204],0x0
100ff15d:	00 
100ff15e:	a3 6c f1 22 10       	mov    ds:0x1022f16c,eax
100ff163:	81 c1 70 f1 22 10    	add    ecx,0x1022f170
100ff169:	2b cb                	sub    ecx,ebx
100ff16b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100ff170:	8a 03                	mov    al,BYTE PTR [ebx]
100ff172:	8d 5b 01             	lea    ebx,[ebx+0x1]
100ff175:	88 44 19 ff          	mov    BYTE PTR [ecx+ebx*1-0x1],al
100ff179:	84 c0                	test   al,al
100ff17b:	75 f3                	jne    0x100ff170
100ff17d:	8b b5 f4 fd ff ff    	mov    esi,DWORD PTR [ebp-0x20c]
100ff183:	8d 85 fc fd ff ff    	lea    eax,[ebp-0x204]
100ff189:	68 ff 01 00 00       	push   0x1ff
100ff18e:	50                   	push   eax
100ff18f:	8d 85 f0 fd ff ff    	lea    eax,[ebp-0x210]
100ff195:	50                   	push   eax
100ff196:	ff b5 f8 fd ff ff    	push   DWORD PTR [ebp-0x208]
100ff19c:	56                   	push   esi
100ff19d:	e8 6e 12 00 00       	call   0x10100410
100ff1a2:	83 c4 14             	add    esp,0x14
100ff1a5:	85 c0                	test   eax,eax
100ff1a7:	0f 85 a3 fe ff ff    	jne    0x100ff050
100ff1ad:	5f                   	pop    edi
100ff1ae:	5b                   	pop    ebx
100ff1af:	56                   	push   esi
100ff1b0:	ff 15 c8 30 22 10    	call   DWORD PTR ds:0x102230c8
100ff1b6:	83 c4 04             	add    esp,0x4
100ff1b9:	c7 05 68 f1 22 10 01 	mov    DWORD PTR ds:0x1022f168,0x1
100ff1c0:	00 00 00 
100ff1c3:	5e                   	pop    esi
100ff1c4:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100ff1c7:	33 cd                	xor    ecx,ebp
100ff1c9:	e8 e5 e9 03 00       	call   0x1013dbb3
100ff1ce:	8b e5                	mov    esp,ebp
100ff1d0:	5d                   	pop    ebp
100ff1d1:	c3                   	ret
100ff1d2:	e8 71 eb 03 00       	call   0x1013dd48
