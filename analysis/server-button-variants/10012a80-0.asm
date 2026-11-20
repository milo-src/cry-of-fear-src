
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10012a80 <.text+0x11a80>:
10012a80:	56                   	push   esi
10012a81:	57                   	push   edi
10012a82:	8b f9                	mov    edi,ecx
10012a84:	6a 64                	push   0x64
10012a86:	6a 00                	push   0x0
10012a88:	83 ec 08             	sub    esp,0x8
10012a8b:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10012a8e:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
10012a95:	3f 
10012a96:	8b b0 0c 02 00 00    	mov    esi,DWORD PTR [eax+0x20c]
10012a9c:	8b 90 ec 01 00 00    	mov    edx,DWORD PTR [eax+0x1ec]
10012aa2:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10012aa7:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10012aae:	03 90 98 00 00 00    	add    edx,DWORD PTR [eax+0x98]
10012ab4:	52                   	push   edx
10012ab5:	6a 02                	push   0x2
10012ab7:	56                   	push   esi
10012ab8:	e8 33 9f 0e 00       	call   0x100fc9f0
10012abd:	83 c4 1c             	add    esp,0x1c
10012ac0:	8d 8f e4 00 00 00    	lea    ecx,[edi+0xe4]
10012ac6:	e8 c5 4c 00 00       	call   0x10017790
10012acb:	50                   	push   eax
10012acc:	ff b7 7c 01 00 00    	push   DWORD PTR [edi+0x17c]
10012ad2:	e8 89 65 10 00       	call   0x10119060
10012ad7:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
10012ada:	8d 8f b4 01 00 00    	lea    ecx,[edi+0x1b4]
10012ae0:	83 c4 08             	add    esp,0x8
10012ae3:	6a 01                	push   0x1
10012ae5:	85 c0                	test   eax,eax
10012ae7:	75 0f                	jne    0x10012af8
10012ae9:	6a 01                	push   0x1
10012aeb:	51                   	push   ecx
10012aec:	52                   	push   edx
10012aed:	e8 1e b5 07 00       	call   0x1008e010
10012af2:	83 c4 10             	add    esp,0x10
10012af5:	5f                   	pop    edi
10012af6:	5e                   	pop    esi
10012af7:	c3                   	ret
10012af8:	6a 00                	push   0x0
10012afa:	51                   	push   ecx
10012afb:	52                   	push   edx
10012afc:	e8 0f b5 07 00       	call   0x1008e010
10012b01:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10012b04:	83 c4 10             	add    esp,0x10
10012b07:	c7 87 00 01 00 00 02 	mov    DWORD PTR [edi+0x100],0x2
10012b0e:	00 00 00 
10012b11:	f6 80 a4 01 00 00 01 	test   BYTE PTR [eax+0x1a4],0x1
10012b18:	74 12                	je     0x10012b2c
10012b1a:	83 bf ac 01 00 00 00 	cmp    DWORD PTR [edi+0x1ac],0x0
10012b21:	75 09                	jne    0x10012b2c
10012b23:	8b cf                	mov    ecx,edi
10012b25:	5f                   	pop    edi
10012b26:	5e                   	pop    esi
10012b27:	e9 34 2e 00 00       	jmp    0x10015960
10012b2c:	83 ec 10             	sub    esp,0x10
10012b2f:	c7 87 54 01 00 00 60 	mov    DWORD PTR [edi+0x154],0x10015960
10012b36:	59 01 10 
10012b39:	83 bf ac 01 00 00 00 	cmp    DWORD PTR [edi+0x1ac],0x0
10012b40:	8b cc                	mov    ecx,esp
10012b42:	f3 0f 10 80 fc 01 00 	movss  xmm0,DWORD PTR [eax+0x1fc]
10012b49:	00 
10012b4a:	f3 0f 11 44 24 0c    	movss  DWORD PTR [esp+0xc],xmm0
10012b50:	75 24                	jne    0x10012b76
10012b52:	8b 87 28 01 00 00    	mov    eax,DWORD PTR [edi+0x128]
10012b58:	89 01                	mov    DWORD PTR [ecx],eax
10012b5a:	8b 87 2c 01 00 00    	mov    eax,DWORD PTR [edi+0x12c]
10012b60:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
10012b63:	8b 87 30 01 00 00    	mov    eax,DWORD PTR [edi+0x130]
10012b69:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
10012b6c:	8b cf                	mov    ecx,edi
10012b6e:	e8 4d fa 0e 00       	call   0x101025c0
10012b73:	5f                   	pop    edi
10012b74:	5e                   	pop    esi
10012b75:	c3                   	ret
10012b76:	8b 87 40 01 00 00    	mov    eax,DWORD PTR [edi+0x140]
10012b7c:	89 01                	mov    DWORD PTR [ecx],eax
10012b7e:	8b 87 44 01 00 00    	mov    eax,DWORD PTR [edi+0x144]
10012b84:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
10012b87:	8b 87 48 01 00 00    	mov    eax,DWORD PTR [edi+0x148]
10012b8d:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
10012b90:	8b cf                	mov    ecx,edi
10012b92:	e8 b9 ef 0e 00       	call   0x10101b50
10012b97:	5f                   	pop    edi
10012b98:	5e                   	pop    esi
10012b99:	c3                   	ret
