
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10037bd0 <.text+0x36bd0>:
10037bd0:	55                   	push   ebp
10037bd1:	8b ec                	mov    ebp,esp
10037bd3:	6a ff                	push   0xffffffff
10037bd5:	68 85 d7 19 10       	push   0x1019d785
10037bda:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10037be0:	50                   	push   eax
10037be1:	83 ec 24             	sub    esp,0x24
10037be4:	56                   	push   esi
10037be5:	57                   	push   edi
10037be6:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
10037beb:	33 c5                	xor    eax,ebp
10037bed:	50                   	push   eax
10037bee:	8d 45 f4             	lea    eax,[ebp-0xc]
10037bf1:	64 a3 00 00 00 00    	mov    fs:0x0,eax
10037bf7:	8b f1                	mov    esi,ecx
10037bf9:	8b 06                	mov    eax,DWORD PTR [esi]
10037bfb:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10037bfe:	8b 7c 30 38          	mov    edi,DWORD PTR [eax+esi*1+0x38]
10037c02:	85 ff                	test   edi,edi
10037c04:	0f 84 a7 00 00 00    	je     0x10037cb1
10037c0a:	8b 07                	mov    eax,DWORD PTR [edi]
10037c0c:	8b cf                	mov    ecx,edi
10037c0e:	89 75 ec             	mov    DWORD PTR [ebp-0x14],esi
10037c11:	ff 50 04             	call   DWORD PTR [eax+0x4]
10037c14:	8b 06                	mov    eax,DWORD PTR [esi]
10037c16:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
10037c1d:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10037c20:	83 7c 30 0c 00       	cmp    DWORD PTR [eax+esi*1+0xc],0x0
10037c25:	8d 0c 30             	lea    ecx,[eax+esi*1]
10037c28:	74 04                	je     0x10037c2e
10037c2a:	32 c0                	xor    al,al
10037c2c:	eb 21                	jmp    0x10037c4f
10037c2e:	8b 49 3c             	mov    ecx,DWORD PTR [ecx+0x3c]
10037c31:	85 c9                	test   ecx,ecx
10037c33:	74 18                	je     0x10037c4d
10037c35:	3b ce                	cmp    ecx,esi
10037c37:	74 14                	je     0x10037c4d
10037c39:	e8 92 ff ff ff       	call   0x10037bd0
10037c3e:	8b 06                	mov    eax,DWORD PTR [esi]
10037c40:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10037c43:	83 7c 30 0c 00       	cmp    DWORD PTR [eax+esi*1+0xc],0x0
10037c48:	0f 94 c0             	sete   al
10037c4b:	eb 02                	jmp    0x10037c4f
10037c4d:	b0 01                	mov    al,0x1
10037c4f:	88 45 f0             	mov    BYTE PTR [ebp-0x10],al
10037c52:	c7 45 fc 01 00 00 00 	mov    DWORD PTR [ebp-0x4],0x1
10037c59:	84 c0                	test   al,al
10037c5b:	74 27                	je     0x10037c84
10037c5d:	8b 07                	mov    eax,DWORD PTR [edi]
10037c5f:	8b cf                	mov    ecx,edi
10037c61:	ff 50 34             	call   DWORD PTR [eax+0x34]
10037c64:	83 f8 ff             	cmp    eax,0xffffffff
10037c67:	75 1b                	jne    0x10037c84
10037c69:	8b 06                	mov    eax,DWORD PTR [esi]
10037c6b:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
10037c6e:	8b 44 31 0c          	mov    eax,DWORD PTR [ecx+esi*1+0xc]
10037c72:	83 e0 13             	and    eax,0x13
10037c75:	83 c8 04             	or     eax,0x4
10037c78:	89 44 31 0c          	mov    DWORD PTR [ecx+esi*1+0xc],eax
10037c7c:	8b 4c 31 10          	mov    ecx,DWORD PTR [ecx+esi*1+0x10]
10037c80:	23 c8                	and    ecx,eax
10037c82:	75 40                	jne    0x10037cc4
10037c84:	c7 45 fc 02 00 00 00 	mov    DWORD PTR [ebp-0x4],0x2
10037c8b:	e8 d0 aa 0e 00       	call   0x10122760
10037c90:	84 c0                	test   al,al
10037c92:	75 07                	jne    0x10037c9b
10037c94:	8b ce                	mov    ecx,esi
10037c96:	e8 b5 f8 ff ff       	call   0x10037550
10037c9b:	8b 06                	mov    eax,DWORD PTR [esi]
10037c9d:	c6 45 fc 03          	mov    BYTE PTR [ebp-0x4],0x3
10037ca1:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10037ca4:	8b 4c 30 38          	mov    ecx,DWORD PTR [eax+esi*1+0x38]
10037ca8:	85 c9                	test   ecx,ecx
10037caa:	74 05                	je     0x10037cb1
10037cac:	8b 01                	mov    eax,DWORD PTR [ecx]
10037cae:	ff 50 08             	call   DWORD PTR [eax+0x8]
10037cb1:	8b c6                	mov    eax,esi
10037cb3:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
10037cb6:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10037cbd:	59                   	pop    ecx
10037cbe:	5f                   	pop    edi
10037cbf:	5e                   	pop    esi
10037cc0:	8b e5                	mov    esp,ebp
10037cc2:	5d                   	pop    ebp
10037cc3:	c3                   	ret
10037cc4:	f6 c1 04             	test   cl,0x4
10037cc7:	74 07                	je     0x10037cd0
10037cc9:	be 5c da 1a 10       	mov    esi,0x101ada5c
10037cce:	eb 10                	jmp    0x10037ce0
10037cd0:	f6 c1 02             	test   cl,0x2
10037cd3:	be 74 da 1a 10       	mov    esi,0x101ada74
10037cd8:	b8 8c da 1a 10       	mov    eax,0x101ada8c
10037cdd:	0f 44 f0             	cmove  esi,eax
10037ce0:	8d 45 e4             	lea    eax,[ebp-0x1c]
10037ce3:	6a 01                	push   0x1
10037ce5:	50                   	push   eax
10037ce6:	e8 65 00 00 00       	call   0x10037d50
10037ceb:	83 c4 08             	add    esp,0x8
10037cee:	8d 4d d0             	lea    ecx,[ebp-0x30]
10037cf1:	50                   	push   eax
10037cf2:	56                   	push   esi
10037cf3:	e8 08 84 ff ff       	call   0x10030100
10037cf8:	68 cc 48 20 10       	push   0x102048cc
10037cfd:	8d 45 d0             	lea    eax,[ebp-0x30]
10037d00:	50                   	push   eax
10037d01:	e8 b6 83 10 00       	call   0x101400bc
