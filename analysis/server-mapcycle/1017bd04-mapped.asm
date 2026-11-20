
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1017bd04 <.text+0x17ad04>:
1017bd04:	8b ff                	mov    edi,edi
1017bd06:	55                   	push   ebp
1017bd07:	8b ec                	mov    ebp,esp
1017bd09:	83 ec 10             	sub    esp,0x10
1017bd0c:	56                   	push   esi
1017bd0d:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1017bd10:	85 f6                	test   esi,esi
1017bd12:	75 17                	jne    0x1017bd2b
1017bd14:	e8 90 a2 ff ff       	call   0x10175fa9
1017bd19:	c7 00 16 00 00 00    	mov    DWORD PTR [eax],0x16
1017bd1f:	e8 2e 3d ff ff       	call   0x1016fa52
1017bd24:	b8 ff ff ff 7f       	mov    eax,0x7fffffff
1017bd29:	eb 64                	jmp    0x1017bd8f
1017bd2b:	57                   	push   edi
1017bd2c:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
1017bd2f:	85 ff                	test   edi,edi
1017bd31:	75 17                	jne    0x1017bd4a
1017bd33:	e8 71 a2 ff ff       	call   0x10175fa9
1017bd38:	c7 00 16 00 00 00    	mov    DWORD PTR [eax],0x16
1017bd3e:	e8 0f 3d ff ff       	call   0x1016fa52
1017bd43:	b8 ff ff ff 7f       	mov    eax,0x7fffffff
1017bd48:	eb 44                	jmp    0x1017bd8e
1017bd4a:	53                   	push   ebx
1017bd4b:	ff 75 10             	push   DWORD PTR [ebp+0x10]
1017bd4e:	8d 4d f0             	lea    ecx,[ebp-0x10]
1017bd51:	e8 0a 4c fd ff       	call   0x10150960
1017bd56:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
1017bd59:	8b 98 94 00 00 00    	mov    ebx,DWORD PTR [eax+0x94]
1017bd5f:	0f b6 06             	movzx  eax,BYTE PTR [esi]
1017bd62:	46                   	inc    esi
1017bd63:	0f b6 0c 18          	movzx  ecx,BYTE PTR [eax+ebx*1]
1017bd67:	8a 07                	mov    al,BYTE PTR [edi]
1017bd69:	8b d1                	mov    edx,ecx
1017bd6b:	0f b6 c0             	movzx  eax,al
1017bd6e:	47                   	inc    edi
1017bd6f:	0f b6 04 18          	movzx  eax,BYTE PTR [eax+ebx*1]
1017bd73:	2b d0                	sub    edx,eax
1017bd75:	75 04                	jne    0x1017bd7b
1017bd77:	85 c9                	test   ecx,ecx
1017bd79:	75 e4                	jne    0x1017bd5f
1017bd7b:	80 7d fc 00          	cmp    BYTE PTR [ebp-0x4],0x0
1017bd7f:	5b                   	pop    ebx
1017bd80:	74 0a                	je     0x1017bd8c
1017bd82:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
1017bd85:	83 a1 50 03 00 00 fd 	and    DWORD PTR [ecx+0x350],0xfffffffd
1017bd8c:	8b c2                	mov    eax,edx
1017bd8e:	5f                   	pop    edi
1017bd8f:	5e                   	pop    esi
1017bd90:	c9                   	leave
1017bd91:	c3                   	ret
