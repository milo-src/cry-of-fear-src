
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1004cfb0 <.text+0x4bfb0>:
1004cfb0:	55                   	push   ebp
1004cfb1:	8b ec                	mov    ebp,esp
1004cfb3:	83 ec 0c             	sub    esp,0xc
1004cfb6:	8b c1                	mov    eax,ecx
1004cfb8:	53                   	push   ebx
1004cfb9:	56                   	push   esi
1004cfba:	57                   	push   edi
1004cfbb:	83 78 4c 00          	cmp    DWORD PTR [eax+0x4c],0x0
1004cfbf:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1004cfc2:	74 2b                	je     0x1004cfef
1004cfc4:	e8 b7 a0 fe ff       	call   0x10037080
1004cfc9:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1004cfcc:	33 f6                	xor    esi,esi
1004cfce:	84 c0                	test   al,al
1004cfd0:	8b d1                	mov    edx,ecx
1004cfd2:	0f 44 d6             	cmove  edx,esi
1004cfd5:	ff 71 4c             	push   DWORD PTR [ecx+0x4c]
1004cfd8:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
1004cfdb:	e8 81 2d 12 00       	call   0x1016fd61
1004cfe0:	83 c4 04             	add    esp,0x4
1004cfe3:	85 c0                	test   eax,eax
1004cfe5:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1004cfe8:	74 0c                	je     0x1004cff6
1004cfea:	89 75 f8             	mov    DWORD PTR [ebp-0x8],esi
1004cfed:	eb 07                	jmp    0x1004cff6
1004cfef:	c7 45 f8 00 00 00 00 	mov    DWORD PTR [ebp-0x8],0x0
1004cff6:	c6 40 48 00          	mov    BYTE PTR [eax+0x48],0x0
1004cffa:	8d 58 04             	lea    ebx,[eax+0x4]
1004cffd:	89 58 0c             	mov    DWORD PTR [eax+0xc],ebx
1004d000:	8d 70 08             	lea    esi,[eax+0x8]
1004d003:	89 70 10             	mov    DWORD PTR [eax+0x10],esi
1004d006:	8d 78 14             	lea    edi,[eax+0x14]
1004d009:	89 78 1c             	mov    DWORD PTR [eax+0x1c],edi
1004d00c:	8d 48 18             	lea    ecx,[eax+0x18]
1004d00f:	c6 40 3d 00          	mov    BYTE PTR [eax+0x3d],0x0
1004d013:	8d 50 24             	lea    edx,[eax+0x24]
1004d016:	89 48 20             	mov    DWORD PTR [eax+0x20],ecx
1004d019:	89 50 2c             	mov    DWORD PTR [eax+0x2c],edx
1004d01c:	83 c0 28             	add    eax,0x28
1004d01f:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
1004d022:	8b 5d fc             	mov    ebx,DWORD PTR [ebp-0x4]
1004d025:	89 43 30             	mov    DWORD PTR [ebx+0x30],eax
1004d028:	8b 5d f4             	mov    ebx,DWORD PTR [ebp-0xc]
1004d02b:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
1004d031:	c7 01 00 00 00 00    	mov    DWORD PTR [ecx],0x0
1004d037:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
1004d03d:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1004d040:	c7 03 00 00 00 00    	mov    DWORD PTR [ebx],0x0
1004d046:	c7 07 00 00 00 00    	mov    DWORD PTR [edi],0x0
1004d04c:	c7 02 00 00 00 00    	mov    DWORD PTR [edx],0x0
1004d052:	c7 40 4c 00 00 00 00 	mov    DWORD PTR [eax+0x4c],0x0
1004d059:	8b 0d 1c 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222e1c
1004d05f:	5f                   	pop    edi
1004d060:	89 48 40             	mov    DWORD PTR [eax+0x40],ecx
1004d063:	8b 0d 20 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222e20
1004d069:	5e                   	pop    esi
1004d06a:	89 48 44             	mov    DWORD PTR [eax+0x44],ecx
1004d06d:	c7 40 38 00 00 00 00 	mov    DWORD PTR [eax+0x38],0x0
1004d074:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
1004d077:	5b                   	pop    ebx
1004d078:	8b e5                	mov    esp,ebp
1004d07a:	5d                   	pop    ebp
1004d07b:	c3                   	ret
