
D:\Steam\steamapps\common\Cry of Fear\hw.dll:     file format pei-i386


Disassembly of section .text:

01e731bc <.text+0x1721bc>:
 1e731bc:	8b 5c 24 04          	mov    ebx,DWORD PTR [esp+0x4]
 1e731c0:	8b 2b                	mov    ebp,DWORD PTR [ebx]
 1e731c2:	8b 73 18             	mov    esi,DWORD PTR [ebx+0x18]
 1e731c5:	64 3b 35 00 00 00 00 	cmp    esi,DWORD PTR fs:0x0
 1e731cc:	74 09                	je     0x1e731d7
 1e731ce:	56                   	push   esi
 1e731cf:	e8 c8 f0 ff ff       	call   0x1e7229c
 1e731d4:	83 c4 04             	add    esp,0x4
 1e731d7:	83 fe 00             	cmp    esi,0x0
 1e731da:	74 30                	je     0x1e7320c
 1e731dc:	8d 43 20             	lea    eax,[ebx+0x20]
 1e731df:	50                   	push   eax
 1e731e0:	e8 56 89 00 00       	call   0x1e7bb3b
 1e731e5:	0b c0                	or     eax,eax
 1e731e7:	74 16                	je     0x1e731ff
 1e731e9:	8b 43 20             	mov    eax,DWORD PTR [ebx+0x20]
 1e731ec:	3d 30 32 43 56       	cmp    eax,0x56433230
 1e731f1:	75 0c                	jne    0x1e731ff
 1e731f3:	8b 43 24             	mov    eax,DWORD PTR [ebx+0x24]
 1e731f6:	0b c0                	or     eax,eax
 1e731f8:	74 12                	je     0x1e7320c
 1e731fa:	53                   	push   ebx
 1e731fb:	ff d0                	call   eax
 1e731fd:	eb 0d                	jmp    0x1e7320c
 1e731ff:	8b 43 1c             	mov    eax,DWORD PTR [ebx+0x1c]
 1e73202:	50                   	push   eax
 1e73203:	56                   	push   esi
 1e73204:	e8 d5 f0 ff ff       	call   0x1e722de
 1e73209:	83 c4 08             	add    esp,0x8
 1e7320c:	6a 00                	push   0x0
 1e7320e:	8b 43 14             	mov    eax,DWORD PTR [ebx+0x14]
 1e73211:	e8 5c f1 ff ff       	call   0x1e72372
 1e73216:	8b d3                	mov    edx,ebx
 1e73218:	8b 5a 04             	mov    ebx,DWORD PTR [edx+0x4]
 1e7321b:	8b 7a 08             	mov    edi,DWORD PTR [edx+0x8]
 1e7321e:	8b 72 0c             	mov    esi,DWORD PTR [edx+0xc]
 1e73221:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
 1e73225:	83 f8 01             	cmp    eax,0x1
 1e73228:	83 d0 00             	adc    eax,0x0
 1e7322b:	8b 62 10             	mov    esp,DWORD PTR [edx+0x10]
 1e7322e:	83 c4 04             	add    esp,0x4
 1e73231:	ff 62 14             	jmp    DWORD PTR [edx+0x14]
 1e73234:	c3                   	ret
