
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1016dc68 <.text+0x16cc68>:
1016dc68:	8b ff                	mov    edi,edi
1016dc6a:	55                   	push   ebp
1016dc6b:	8b ec                	mov    ebp,esp
1016dc6d:	83 ec 1c             	sub    esp,0x1c
1016dc70:	53                   	push   ebx
1016dc71:	56                   	push   esi
1016dc72:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
1016dc75:	8b ce                	mov    ecx,esi
1016dc77:	57                   	push   edi
1016dc78:	e8 dc d6 ff ff       	call   0x1016b359
1016dc7d:	84 c0                	test   al,al
1016dc7f:	0f 84 e9 01 00 00    	je     0x1016de6e
1016dc85:	8b 1e                	mov    ebx,DWORD PTR [esi]
1016dc87:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1016dc8a:	89 5d ec             	mov    DWORD PTR [ebp-0x14],ebx
1016dc8d:	8a 0b                	mov    cl,BYTE PTR [ebx]
1016dc8f:	8d 43 01             	lea    eax,[ebx+0x1]
1016dc92:	eb 05                	jmp    0x1016dc99
1016dc94:	8b 06                	mov    eax,DWORD PTR [esi]
1016dc96:	8a 08                	mov    cl,BYTE PTR [eax]
1016dc98:	40                   	inc    eax
1016dc99:	57                   	push   edi
1016dc9a:	89 06                	mov    DWORD PTR [esi],eax
1016dc9c:	0f b6 c1             	movzx  eax,cl
1016dc9f:	6a 08                	push   0x8
1016dca1:	50                   	push   eax
1016dca2:	88 4d fb             	mov    BYTE PTR [ebp-0x5],cl
1016dca5:	e8 39 c2 ff ff       	call   0x10169ee3
1016dcaa:	83 c4 0c             	add    esp,0xc
1016dcad:	85 c0                	test   eax,eax
1016dcaf:	75 e3                	jne    0x1016dc94
1016dcb1:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
1016dcb4:	8a 4d fb             	mov    cl,BYTE PTR [ebp-0x5]
1016dcb7:	81 c2 08 03 00 00    	add    edx,0x308
1016dcbd:	80 f9 2d             	cmp    cl,0x2d
1016dcc0:	89 55 f0             	mov    DWORD PTR [ebp-0x10],edx
1016dcc3:	0f 94 c0             	sete   al
1016dcc6:	88 02                	mov    BYTE PTR [edx],al
1016dcc8:	74 05                	je     0x1016dccf
1016dcca:	80 f9 2b             	cmp    cl,0x2b
1016dccd:	75 0a                	jne    0x1016dcd9
1016dccf:	8b 06                	mov    eax,DWORD PTR [esi]
1016dcd1:	8a 08                	mov    cl,BYTE PTR [eax]
1016dcd3:	40                   	inc    eax
1016dcd4:	88 4d fb             	mov    BYTE PTR [ebp-0x5],cl
1016dcd7:	89 06                	mov    DWORD PTR [esi],eax
1016dcd9:	80 f9 49             	cmp    cl,0x49
1016dcdc:	0f 84 62 03 00 00    	je     0x1016e044
1016dce2:	80 f9 69             	cmp    cl,0x69
1016dce5:	0f 84 59 03 00 00    	je     0x1016e044
1016dceb:	80 f9 4e             	cmp    cl,0x4e
1016dcee:	0f 84 3d 03 00 00    	je     0x1016e031
1016dcf4:	80 f9 6e             	cmp    cl,0x6e
1016dcf7:	0f 84 34 03 00 00    	je     0x1016e031
