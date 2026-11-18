
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100dad40 <.text+0xd9d40>:
100dad40:	55                   	push   ebp
100dad41:	8b ec                	mov    ebp,esp
100dad43:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
100dad47:	53                   	push   ebx
100dad48:	8b d9                	mov    ebx,ecx
100dad4a:	75 17                	jne    0x100dad63
100dad4c:	68 0c c6 1d 10       	push   0x101dc60c
100dad51:	6a 01                	push   0x1
100dad53:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100dad59:	83 c4 08             	add    esp,0x8
100dad5c:	33 c0                	xor    eax,eax
100dad5e:	5b                   	pop    ebx
100dad5f:	5d                   	pop    ebp
100dad60:	c2 0c 00             	ret    0xc
100dad63:	80 bb 9c 1e 00 00 00 	cmp    BYTE PTR [ebx+0x1e9c],0x0
100dad6a:	56                   	push   esi
100dad6b:	57                   	push   edi
100dad6c:	8d bb 00 22 00 00    	lea    edi,[ebx+0x2200]
100dad72:	be 01 00 00 00       	mov    esi,0x1
100dad77:	74 27                	je     0x100dada0
100dad79:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100dad80:	ff 37                	push   DWORD PTR [edi]
100dad82:	8b cb                	mov    ecx,ebx
100dad84:	e8 57 a1 00 00       	call   0x100e4ee0
100dad89:	85 c0                	test   eax,eax
100dad8b:	75 30                	jne    0x100dadbd
100dad8d:	46                   	inc    esi
100dad8e:	83 c7 04             	add    edi,0x4
100dad91:	83 fe 03             	cmp    esi,0x3
100dad94:	7e ea                	jle    0x100dad80
100dad96:	5f                   	pop    edi
100dad97:	5e                   	pop    esi
100dad98:	5b                   	pop    ebx
100dad99:	5d                   	pop    ebp
100dad9a:	c2 0c 00             	ret    0xc
100dad9d:	0f 1f 00             	nop    DWORD PTR [eax]
100dada0:	ff 37                	push   DWORD PTR [edi]
100dada2:	8b cb                	mov    ecx,ebx
100dada4:	e8 37 a1 00 00       	call   0x100e4ee0
100dada9:	85 c0                	test   eax,eax
100dadab:	75 10                	jne    0x100dadbd
100dadad:	46                   	inc    esi
100dadae:	83 c7 04             	add    edi,0x4
100dadb1:	83 fe 06             	cmp    esi,0x6
100dadb4:	7e ea                	jle    0x100dada0
100dadb6:	5f                   	pop    edi
100dadb7:	5e                   	pop    esi
100dadb8:	5b                   	pop    ebx
100dadb9:	5d                   	pop    ebp
100dadba:	c2 0c 00             	ret    0xc
100dadbd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100dadc2:	8b 7d 10             	mov    edi,DWORD PTR [ebp+0x10]
100dadc5:	6a 07                	push   0x7
100dadc7:	68 90 87 1a 10       	push   0x101a8790
100dadcc:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100dadd2:	03 c7                	add    eax,edi
100dadd4:	50                   	push   eax
100dadd5:	e8 a6 48 09 00       	call   0x1016f680
100dadda:	83 c4 0c             	add    esp,0xc
100daddd:	8b cb                	mov    ecx,ebx
100daddf:	6a 00                	push   0x0
100dade1:	85 c0                	test   eax,eax
100dade3:	0f 85 b7 00 00 00    	jne    0x100daea0
100dade9:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100dadee:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100dadf1:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100dadf7:	03 c7                	add    eax,edi
100dadf9:	50                   	push   eax
100dadfa:	e8 41 74 00 00       	call   0x100e2240
100dadff:	85 c0                	test   eax,eax
100dae01:	75 11                	jne    0x100dae14
100dae03:	50                   	push   eax
100dae04:	57                   	push   edi
100dae05:	56                   	push   esi
100dae06:	8b cb                	mov    ecx,ebx
100dae08:	89 bc b3 fc 21 00 00 	mov    DWORD PTR [ebx+esi*4+0x21fc],edi
100dae0f:	e8 4c 95 00 00       	call   0x100e4360
100dae14:	8b 7d 10             	mov    edi,DWORD PTR [ebp+0x10]
100dae17:	83 3d 80 64 22 10 00 	cmp    DWORD PTR ds:0x10226480,0x0
100dae1e:	75 2e                	jne    0x100dae4e
100dae20:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100dae23:	6a 64                	push   0x64
100dae25:	6a 00                	push   0x0
100dae27:	83 ec 08             	sub    esp,0x8
100dae2a:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100dae31:	3f 
100dae32:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100dae39:	68 3c b5 1a 10       	push   0x101ab53c
100dae3e:	6a 03                	push   0x3
100dae40:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100dae46:	e8 a5 1b 02 00       	call   0x100fc9f0
100dae4b:	83 c4 1c             	add    esp,0x1c
100dae4e:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100dae54:	85 c9                	test   ecx,ecx
100dae56:	0f 84 9a 00 00 00    	je     0x100daef6
100dae5c:	8b 01                	mov    eax,DWORD PTR [ecx]
100dae5e:	ff 50 20             	call   DWORD PTR [eax+0x20]
100dae61:	85 c0                	test   eax,eax
100dae63:	0f 84 8d 00 00 00    	je     0x100daef6
100dae69:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100dae6e:	b9 bc c2 1a 10       	mov    ecx,0x101ac2bc
100dae73:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100dae79:	03 c7                	add    eax,edi
100dae7b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100dae80:	8a 10                	mov    dl,BYTE PTR [eax]
100dae82:	3a 11                	cmp    dl,BYTE PTR [ecx]
100dae84:	75 30                	jne    0x100daeb6
100dae86:	84 d2                	test   dl,dl
100dae88:	74 12                	je     0x100dae9c
100dae8a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100dae8d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100dae90:	75 24                	jne    0x100daeb6
100dae92:	83 c0 02             	add    eax,0x2
100dae95:	83 c1 02             	add    ecx,0x2
100dae98:	84 d2                	test   dl,dl
100dae9a:	75 e4                	jne    0x100dae80
100dae9c:	33 c0                	xor    eax,eax
100dae9e:	eb 1b                	jmp    0x100daebb
100daea0:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100daea3:	50                   	push   eax
100daea4:	56                   	push   esi
100daea5:	89 84 b3 fc 21 00 00 	mov    DWORD PTR [ebx+esi*4+0x21fc],eax
100daeac:	e8 af 94 00 00       	call   0x100e4360
100daeb1:	e9 61 ff ff ff       	jmp    0x100dae17
100daeb6:	1b c0                	sbb    eax,eax
100daeb8:	83 c8 01             	or     eax,0x1
100daebb:	85 c0                	test   eax,eax
100daebd:	75 37                	jne    0x100daef6
100daebf:	50                   	push   eax
100daec0:	50                   	push   eax
100daec1:	ff 35 dc 66 22 10    	push   DWORD PTR ds:0x102266dc
100daec7:	6a 02                	push   0x2
100daec9:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100daecf:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100daed2:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100daed8:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
100daede:	50                   	push   eax
100daedf:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100daee5:	6a 01                	push   0x1
100daee7:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100daeed:	83 c4 1c             	add    esp,0x1c
100daef0:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100daef6:	5f                   	pop    edi
100daef7:	5e                   	pop    esi
100daef8:	b8 01 00 00 00       	mov    eax,0x1
100daefd:	5b                   	pop    ebx
100daefe:	5d                   	pop    ebp
100daeff:	c2 0c 00             	ret    0xc
100daf02:	cc                   	int3
100daf03:	cc                   	int3
100daf04:	cc                   	int3
100daf05:	cc                   	int3
100daf06:	cc                   	int3
100daf07:	cc                   	int3
100daf08:	cc                   	int3
100daf09:	cc                   	int3
100daf0a:	cc                   	int3
100daf0b:	cc                   	int3
100daf0c:	cc                   	int3
100daf0d:	cc                   	int3
100daf0e:	cc                   	int3
100daf0f:	cc                   	int3
